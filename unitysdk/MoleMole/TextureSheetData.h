#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class CEDHMCAELMM;
class JPIEIAPMKHM;
class MPKBDIJDMAP;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TEXTURESHEETDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x1A0991B0)
#define MOLEMOLE_TEXTURESHEETDATA_FINDBLENDTEXTURESHEETDATABYKEY_OFFSET UNITYSDK_OFFSET(0x1A099030)
#define MOLEMOLE_TEXTURESHEETDATA_FINDBLENDTEXTURESHEETDATABYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A098FA0)
#define MOLEMOLE_TEXTURESHEETDATA_FINDTEXTURESHEETDATABYKEY_OFFSET UNITYSDK_OFFSET(0x1A099140)
#define MOLEMOLE_TEXTURESHEETDATA_FINDTEXTURESHEETDATABYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A099090)
#define MOLEMOLE_TEXTURESHEETDATA_GETFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1A099210)
#define MOLEMOLE_TEXTURESHEETDATA_GETSOUNDCLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x1A098ED0)
#define MOLEMOLE_TEXTURESHEETDATA_GETTEXTUREOFFSETBYFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x1A099260)
#define MOLEMOLE_TEXTURESHEETDATA_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1A099360)
#define MOLEMOLE_TEXTURESHEETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0994C0)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetData_TypeDefinitionIndex = 89401;

	class TextureSheetData : public ::System::Object
	{
	public:
		::System::Int32 Frequency; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ResUrl; // 0x18
		::System::Int32 RowCount; // 0x20
		::System::Int32 ColCount; // 0x24
		::System::Int32 frameWidth; // 0x28
		::System::Int32 frameHeight; // 0x2C
		::System::Single realWidthP; // 0x30
		::System::Single realHeightP; // 0x34
		::System::Int32 FrameCount; // 0x38
		::System::Int32 LoopTimes; // 0x3C
		::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* loopFrames; // 0x40
		::System::String* ClipKey; // 0x48
		::System::String* LoopStartClipKey; // 0x50
		::System::String* LoopEndClipKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigSoundActionGeneral* GetSoundClipConfig()
		{
			return ((::MoleMole::Config::ConfigSoundActionGeneral*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_GETSOUNDCLIPCONFIG_OFFSET))(this);
		}

		static ::MoleMole::BlendTextureSheetData* FindBlendTextureSheetDataByTemplate(::CEDHMCAELMM* template_)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::CEDHMCAELMM*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_FINDBLENDTEXTURESHEETDATABYTEMPLATE_OFFSET))(template_);
		}

		static ::MoleMole::TextureSheetData* FindTextureSheetDataByTemplate(::CEDHMCAELMM* template_, ::System::Boolean enableLog)
		{
			return ((::MoleMole::TextureSheetData*(*)(::CEDHMCAELMM*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_FINDTEXTURESHEETDATABYTEMPLATE_OFFSET))(template_, enableLog);
		}

		static ::MoleMole::TextureSheetData* FindTextureSheetDataByKey(::System::String* key, ::System::Boolean enableLog)
		{
			return ((::MoleMole::TextureSheetData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_FINDTEXTURESHEETDATABYKEY_OFFSET))(key, enableLog);
		}

		static ::MoleMole::BlendTextureSheetData* FindBlendTextureSheetDataByKey(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_FINDBLENDTEXTURESHEETDATABYKEY_OFFSET))(key);
		}

		::MPKBDIJDMAP* CreatePlayer(::JPIEIAPMKHM* textureSheetImpl)
		{
			return ((::MPKBDIJDMAP*(*)(::PVOID, ::JPIEIAPMKHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}

		::System::Single GetFrameTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_GETFRAMETIME_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetTextureOffsetByFrameIndex(::System::Int32 frameIndex)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_GETTEXTUREOFFSETBYFRAMEINDEX_OFFSET))(this, frameIndex);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETDATA_ISLOOP_OFFSET))(this);
		}
	};
}

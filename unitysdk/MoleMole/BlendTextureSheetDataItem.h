#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

class JPIEIAPMKHM;
class MPKBDIJDMAP;
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class String; }

#define MOLEMOLE_BLENDTEXTURESHEETDATAITEM_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0xFFB58A0)
#define MOLEMOLE_BLENDTEXTURESHEETDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB5910)

namespace MoleMole
{
	inline static constexpr unsigned int BlendTextureSheetDataItem_TypeDefinitionIndex = 89907;

	class BlendTextureSheetDataItem : public ::System::Object
	{
	public:
		::System::String* TextureSheetKey; // 0x10
		::MoleMole::TextureSheetSkipFrameParam* SkipFrames; // 0x18
		::System::Single Hue; // 0x20
		::System::Boolean EnableScc; // 0x24
		::System::Boolean IsMain; // 0x25
		::System::Byte _padding0[0x2];
		::System::Single Value; // 0x28
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x2C
		::System::Single Saturation; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLENDTEXTURESHEETDATAITEM__CTOR_OFFSET))(this);
		}

		::MPKBDIJDMAP* CreatePlayer(::JPIEIAPMKHM* textureSheetImpl)
		{
			return ((::MPKBDIJDMAP*(*)(::PVOID, ::JPIEIAPMKHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BLENDTEXTURESHEETDATAITEM_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}
	};
}

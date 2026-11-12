#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFCPCNGNEC.h"
#include "unitysdk/OIJLBJIKKNJ.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HKHEHEDBIJA_CTOR_OFFSET UNITYSDK_OFFSET(0x16C9A710)
#define HKHEHEDBIJA_GET_COMICPATH_OFFSET UNITYSDK_OFFSET(0x16C9A6B0)
#define HKHEHEDBIJA_GET_COMICTALKGROUPID_OFFSET UNITYSDK_OFFSET(0x16C9A6D0)
#define HKHEHEDBIJA_GET_ILLUSTRATIONID_OFFSET UNITYSDK_OFFSET(0x16C9A6F0)
#define HKHEHEDBIJA_GET_LEVELCOMICID_OFFSET UNITYSDK_OFFSET(0x16C9A690)
#define HKHEHEDBIJA_SET_COMICPATH_OFFSET UNITYSDK_OFFSET(0x16C9A6C0)
#define HKHEHEDBIJA_SET_COMICTALKGROUPID_OFFSET UNITYSDK_OFFSET(0x16C9A6E0)
#define HKHEHEDBIJA_SET_ILLUSTRATIONID_OFFSET UNITYSDK_OFFSET(0x16C9A700)
#define HKHEHEDBIJA_SET_LEVELCOMICID_OFFSET UNITYSDK_OFFSET(0x16C9A6A0)

inline static constexpr unsigned int HKHEHEDBIJA_TypeDefinitionIndex = 77062;

	class HKHEHEDBIJA : public ::System::Object
	{
	public:
		::System::String* _ComicPath_k__BackingField; // 0x10
		::CKFCPCNGNEC _IllustrationId_k__BackingField; // 0x18
		::System::UInt32 _ComicTalkGroupId_k__BackingField; // 0x1C
		::OIJLBJIKKNJ _LevelComicId_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_CTOR_OFFSET))(this);
		}

		::OIJLBJIKKNJ get_LevelComicId()
		{
			return ((::OIJLBJIKKNJ(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_GET_LEVELCOMICID_OFFSET))(this);
		}

		::System::Void set_LevelComicId(::OIJLBJIKKNJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJLBJIKKNJ))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_SET_LEVELCOMICID_OFFSET))(this, a1);
		}

		::System::String* get_ComicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_GET_COMICPATH_OFFSET))(this);
		}

		::System::Void set_ComicPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_SET_COMICPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_ComicTalkGroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_GET_COMICTALKGROUPID_OFFSET))(this);
		}

		::System::Void set_ComicTalkGroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_SET_COMICTALKGROUPID_OFFSET))(this, a1);
		}

		::CKFCPCNGNEC get_IllustrationId()
		{
			return ((::CKFCPCNGNEC(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_GET_ILLUSTRATIONID_OFFSET))(this);
		}

		::System::Void set_IllustrationId(::CKFCPCNGNEC a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + HKHEHEDBIJA_SET_ILLUSTRATIONID_OFFSET))(this, a1);
		}

	};

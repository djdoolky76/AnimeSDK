#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
class CKJKGHLKKIA;

#define CKJKGHLKKIA___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE099CC0)
#define CKJKGHLKKIA___C__DISPLAYCLASS5_0__POSTSFX_B__0_OFFSET UNITYSDK_OFFSET(0xE099ED0)

inline static constexpr unsigned int CKJKGHLKKIA___c__DisplayClass5_0_TypeDefinitionIndex = 49895;

	class CKJKGHLKKIA___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::CKJKGHLKKIA* __4__this; // 0x10
		::System::UInt32 sfxID; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double endTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJKGHLKKIA___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _PostSFX_b__0(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CKJKGHLKKIA___C__DISPLAYCLASS5_0__POSTSFX_B__0_OFFSET))(this, a1, a2, a3);
		}

	};

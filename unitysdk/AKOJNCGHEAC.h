#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFACHPPOANI.h"
class IDCFNANLPDK;

#define AKOJNCGHEAC_CTOR_OFFSET UNITYSDK_OFFSET(0x197B0890)
#define AKOJNCGHEAC_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x197B0950)
#define AKOJNCGHEAC_ONENTEREND_OFFSET UNITYSDK_OFFSET(0x197B0A20)
#define AKOJNCGHEAC_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x197B08A0)

inline static constexpr unsigned int AKOJNCGHEAC_TypeDefinitionIndex = 75236;

	class AKOJNCGHEAC : public ::HFACHPPOANI
	{
	public:
		::IDCFNANLPDK* KPEIDIGNAMA; // 0x10
		::System::Boolean BPLPEPBNLCO; // 0x18
		::System::Boolean GIKHJLDIKPJ; // 0x19
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOJNCGHEAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExitBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOJNCGHEAC_ONEXITBEGIN_OFFSET))(this);
		}

		::System::Void OnEnterBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOJNCGHEAC_ONENTERBEGIN_OFFSET))(this);
		}

		::System::Void OnEnterEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOJNCGHEAC_ONENTEREND_OFFSET))(this);
		}

	};

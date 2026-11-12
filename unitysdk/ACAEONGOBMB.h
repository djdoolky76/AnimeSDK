#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BCNKFBPILLH;

#define ACAEONGOBMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB773CC0)
#define ACAEONGOBMB_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0xB773B20)
#define ACAEONGOBMB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB7738E0)
#define ACAEONGOBMB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB773940)

inline static constexpr unsigned int ACAEONGOBMB_TypeDefinitionIndex = 73610;

	class ACAEONGOBMB : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::BCNKFBPILLH*>* EGLCKKBLNPL; // 0x60
		::System::UInt32 EPCFHPAJBOI; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAEONGOBMB_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ACAEONGOBMB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAEONGOBMB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EJDAKAECODE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACAEONGOBMB_EJDAKAECODE_OFFSET))(this, a1);
		}

	};

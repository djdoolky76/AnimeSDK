#pragma once
#include "unitysdk/unitysdk.h"

#define KBNONEGEOMC_EICHGMOKKKM_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define KBNONEGEOMC_EICHGMOKKKM_HFMIICCCCHM_OFFSET UNITYSDK_OFFSET(0x13260)

inline static constexpr unsigned int KBNONEGEOMC_EICHGMOKKKM_TypeDefinitionIndex = 51812;

	struct alignas(8) KBNONEGEOMC_EICHGMOKKKM
	{
		::Il2CppArray<::System::Single>* AJHDAJDJDAP; // 0x10
		::System::Void _ctor(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + KBNONEGEOMC_EICHGMOKKKM_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 HFMIICCCCHM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNONEGEOMC_EICHGMOKKKM_HFMIICCCCHM_OFFSET))(this);
		}

	};

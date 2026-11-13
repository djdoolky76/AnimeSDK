#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILPPBGLJABD;
class PMNODEHAEDC;

#define HNBBDOGAMJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A362B40)
#define HNBBDOGAMJG_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0x1A362B50)

inline static constexpr unsigned int HNBBDOGAMJG_TypeDefinitionIndex = 63720;

	class HNBBDOGAMJG : public ::System::Object
	{
	public:
		::ILPPBGLJABD* FKBJADHDHFO; // 0x10
		::PMNODEHAEDC* CAKDGCACICI; // 0x18
		::System::Void _ctor(::ILPPBGLJABD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILPPBGLJABD*))((::PBYTE)hIl2Cpp + HNBBDOGAMJG_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPKCFMCJBCF(::PMNODEHAEDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMNODEHAEDC*))((::PBYTE)hIl2Cpp + HNBBDOGAMJG_KPKCFMCJBCF_OFFSET))(this, a1);
		}

	};

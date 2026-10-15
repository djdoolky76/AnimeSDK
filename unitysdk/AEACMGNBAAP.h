#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AEACMGNBAAP;
class FCOEMCEDLNL;

#define AEACMGNBAAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAE0D0)
#define AEACMGNBAAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCAE0E0)
#define AEACMGNBAAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCAE010)

inline static constexpr unsigned int AEACMGNBAAP_TypeDefinitionIndex = 10251;

	class AEACMGNBAAP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEACMGNBAAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AEACMGNBAAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEACMGNBAAP*))((::PBYTE)hIl2Cpp + AEACMGNBAAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AEACMGNBAAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AEACMGNBAAP*))((::PBYTE)hIl2Cpp + AEACMGNBAAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

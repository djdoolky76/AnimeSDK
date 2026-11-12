#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class EEHPNCLKDJH;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define EEHPNCLKDJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF473F0)
#define EEHPNCLKDJH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF47400)
#define EEHPNCLKDJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF473B0)

inline static constexpr unsigned int EEHPNCLKDJH_TypeDefinitionIndex = 22366;

	class EEHPNCLKDJH : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CMIFLIMCPBO; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPNCLKDJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EEHPNCLKDJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEHPNCLKDJH*))((::PBYTE)hIl2Cpp + EEHPNCLKDJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EEHPNCLKDJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEHPNCLKDJH*))((::PBYTE)hIl2Cpp + EEHPNCLKDJH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

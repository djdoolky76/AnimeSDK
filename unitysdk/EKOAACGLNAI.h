#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EKOAACGLNAI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtCusomtEventConfig; }

#define EKOAACGLNAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F124050)
#define EKOAACGLNAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F124060)
#define EKOAACGLNAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F124020)

inline static constexpr unsigned int EKOAACGLNAI_TypeDefinitionIndex = 24655;

	class EKOAACGLNAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtCusomtEventConfig*>* PMIFFBHOOOO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOAACGLNAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EKOAACGLNAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EKOAACGLNAI*))((::PBYTE)hIl2Cpp + EKOAACGLNAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EKOAACGLNAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EKOAACGLNAI*))((::PBYTE)hIl2Cpp + EKOAACGLNAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

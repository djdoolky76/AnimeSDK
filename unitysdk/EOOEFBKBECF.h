#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EOOEFBKBECF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define EOOEFBKBECF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBBAB0)
#define EOOEFBKBECF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDBBAC0)
#define EOOEFBKBECF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDBBA80)

inline static constexpr unsigned int EOOEFBKBECF_TypeDefinitionIndex = 22323;

	class EOOEFBKBECF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EFNMJOCFKPN; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IGMEGAHKMJK; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* HKABOILMHMK; // 0x28
		::RPG::GameCore::DynamicFloat* AMHGLPIJMBN; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FBLPGOPAGJI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOEFBKBECF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EOOEFBKBECF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOOEFBKBECF*))((::PBYTE)hIl2Cpp + EOOEFBKBECF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EOOEFBKBECF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOOEFBKBECF*))((::PBYTE)hIl2Cpp + EOOEFBKBECF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

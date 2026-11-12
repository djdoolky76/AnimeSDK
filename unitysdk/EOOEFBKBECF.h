#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EOOEFBKBECF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define EOOEFBKBECF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF93220)
#define EOOEFBKBECF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF93230)
#define EOOEFBKBECF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF931F0)

inline static constexpr unsigned int EOOEFBKBECF_TypeDefinitionIndex = 22728;

	class EOOEFBKBECF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* HKABOILMHMK; // 0x18
		::RPG::GameCore::DynamicFloat* AMHGLPIJMBN; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IGMEGAHKMJK; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FBLPGOPAGJI; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EFNMJOCFKPN; // 0x38
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

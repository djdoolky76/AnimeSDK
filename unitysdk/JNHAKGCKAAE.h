#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JNHAKGCKAAE;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }

#define JNHAKGCKAAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D051D10)
#define JNHAKGCKAAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D051D20)
#define JNHAKGCKAAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D051CE0)

	class JNHAKGCKAAE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* NCMKOFAAAOI; // 0x18
		::RPG::GameCore::DynamicString* PEEJFDAFPBJ; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LEGADFBLDKA; // 0x28
		::System::Boolean PJOKHJGPJCM; // 0x30
		::System::Boolean IIACEHCDKNN; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHAKGCKAAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JNHAKGCKAAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNHAKGCKAAE*))((::PBYTE)hIl2Cpp + JNHAKGCKAAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JNHAKGCKAAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNHAKGCKAAE*))((::PBYTE)hIl2Cpp + JNHAKGCKAAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

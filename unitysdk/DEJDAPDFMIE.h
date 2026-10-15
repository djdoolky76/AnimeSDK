#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DEJDAPDFMIE;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define DEJDAPDFMIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD12880)
#define DEJDAPDFMIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD12890)
#define DEJDAPDFMIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD12850)

inline static constexpr unsigned int DEJDAPDFMIE_TypeDefinitionIndex = 10191;

	class DEJDAPDFMIE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LCGICBCPMLO; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDAPDFMIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DEJDAPDFMIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DEJDAPDFMIE*))((::PBYTE)hIl2Cpp + DEJDAPDFMIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DEJDAPDFMIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DEJDAPDFMIE*))((::PBYTE)hIl2Cpp + DEJDAPDFMIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

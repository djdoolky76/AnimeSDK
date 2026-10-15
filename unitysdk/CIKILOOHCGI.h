#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKDAGBGKDKA.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CIKILOOHCGI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF857C0)
#define CIKILOOHCGI_NPNMEEJGCLB_OFFSET UNITYSDK_OFFSET(0xCF85850)

inline static constexpr unsigned int CIKILOOHCGI_TypeDefinitionIndex = 78873;

	class CIKILOOHCGI : public ::BKDAGBGKDKA
	{
	public:
		::System::Int32 OMBNKBLHNFG; // 0xD8
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CIKILOOHCGI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NPNMEEJGCLB(::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a1, ::Il2CppArray<::System::Action*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*))((::PBYTE)hIl2Cpp + CIKILOOHCGI_NPNMEEJGCLB_OFFSET))(this, a1, a2);
		}

	};

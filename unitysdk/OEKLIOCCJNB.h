#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define OEKLIOCCJNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBE31640)
#define OEKLIOCCJNB_CTOR_2_OFFSET UNITYSDK_OFFSET(0xBE316A0)
#define OEKLIOCCJNB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE315F0)
#define OEKLIOCCJNB_GET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0xBE31870)
#define OEKLIOCCJNB_SET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0xBE31880)
#define OEKLIOCCJNB_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0xBE31820)
#define OEKLIOCCJNB__RESOLVE_OFFSET UNITYSDK_OFFSET(0xBE316C0)

	class OEKLIOCCJNB
	{
	public:
		::Il2CppArray<::System::String*>* _Dependency_k__BackingField; // 0x28
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + OEKLIOCCJNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEKLIOCCJNB_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::TurnBasedModifierConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + OEKLIOCCJNB_CTOR_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedModifierConfig* _Resolve()
		{
			return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKLIOCCJNB__RESOLVE_OFFSET))(this);
		}

		::System::Void UnResolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKLIOCCJNB_UNRESOLVE_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Dependency()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKLIOCCJNB_GET_DEPENDENCY_OFFSET))(this);
		}

		::System::Void set_Dependency(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + OEKLIOCCJNB_SET_DEPENDENCY_OFFSET))(this, a1);
		}

	};

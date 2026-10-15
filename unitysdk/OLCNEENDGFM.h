#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace System { class String; }

#define OLCNEENDGFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBF00F30)
#define OLCNEENDGFM_CTOR_2_OFFSET UNITYSDK_OFFSET(0xBF00F90)
#define OLCNEENDGFM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF00EE0)
#define OLCNEENDGFM_IGOGDDNGCLN_OFFSET UNITYSDK_OFFSET(0xBF01150)
#define OLCNEENDGFM_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0xBF01100)
#define OLCNEENDGFM__RESOLVE_OFFSET UNITYSDK_OFFSET(0xBF00FB0)

inline static constexpr unsigned int OLCNEENDGFM_TypeDefinitionIndex = 56521;

	class OLCNEENDGFM
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + OLCNEENDGFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLCNEENDGFM_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::TurnBasedAbilityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + OLCNEENDGFM_CTOR_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedAbilityConfig* _Resolve()
		{
			return ((::RPG::GameCore::TurnBasedAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCNEENDGFM__RESOLVE_OFFSET))(this);
		}

		::System::Void UnResolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCNEENDGFM_UNRESOLVE_OFFSET))(this);
		}

		::System::String* IGOGDDNGCLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCNEENDGFM_IGOGDDNGCLN_OFFSET))(this);
		}

	};

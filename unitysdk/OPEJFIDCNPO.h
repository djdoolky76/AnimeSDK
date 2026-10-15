#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISubType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class AGOFDNJAOMA;
class OPEJFIDCNPO;
class PNNPEPDNFEA_PEAIKOGICOC;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPEJFIDCNPO_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFA7DA0)
#define OPEJFIDCNPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA7EA0)
#define OPEJFIDCNPO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xBFA7DF0)

	class OPEJFIDCNPO : public ::System::Object
	{
	public:
		::System::String* ALKLHOEJBBP; // 0x10
		::RPG::GameCore::GameEntity* EBGONEJCGFE; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::PNNPEPDNFEA_PEAIKOGICOC* BOIAANJCIMP; // 0x28
		::AGOFDNJAOMA* PPJKAGKAGLL; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MDFDDPNLEEA; // 0x38
		::System::Int32 GNPIMBBICED; // 0x40
		::System::Boolean COKALPNEEGN; // 0x44
		::System::Boolean BEFOILKMCCE; // 0x45
		::System::Boolean MDJBHMFHFIK; // 0x46
		::System::Boolean PJFJMCFEENM; // 0x47
		::RPG::GameCore::FixPoint NPMACGNINKA; // 0x48
		::RPG::GameCore::ComplexSkillAISubType EPFHBGNGBBK; // 0x50
		::System::Int32 NIFIJJPBABD; // 0x54
		::RPG::GameCore::FixPoint MMPDIJMEIPK; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEJFIDCNPO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEJFIDCNPO_CLEAR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::OPEJFIDCNPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + OPEJFIDCNPO_PPEGOIODAKI_OFFSET))(this, a1);
		}

	};

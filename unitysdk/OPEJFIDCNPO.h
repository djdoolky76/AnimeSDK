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

#define OPEJFIDCNPO_CLEAR_OFFSET UNITYSDK_OFFSET(0x18AB6DC0)
#define OPEJFIDCNPO_CTOR_OFFSET UNITYSDK_OFFSET(0x18AB6ED0)
#define OPEJFIDCNPO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x18AB6E10)

inline static constexpr unsigned int OPEJFIDCNPO_TypeDefinitionIndex = 55549;

	class OPEJFIDCNPO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MDFDDPNLEEA; // 0x18
		::PNNPEPDNFEA_PEAIKOGICOC* BOIAANJCIMP; // 0x20
		::AGOFDNJAOMA* PPJKAGKAGLL; // 0x28
		::System::String* ALKLHOEJBBP; // 0x30
		::RPG::GameCore::GameEntity* EBGONEJCGFE; // 0x38
		::System::Int32 GNPIMBBICED; // 0x40
		::RPG::GameCore::ComplexSkillAISubType EPFHBGNGBBK; // 0x44
		::RPG::GameCore::FixPoint NPMACGNINKA; // 0x48
		::RPG::GameCore::FixPoint MMPDIJMEIPK; // 0x50
		::System::Boolean PJFJMCFEENM; // 0x58
		::System::Boolean MDJBHMFHFIK; // 0x59
		::System::Boolean COKALPNEEGN; // 0x5A
		::System::Boolean BEFOILKMCCE; // 0x5B
		::System::Int32 NIFIJJPBABD; // 0x5C
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

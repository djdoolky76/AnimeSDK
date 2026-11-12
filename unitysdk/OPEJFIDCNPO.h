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

#define OPEJFIDCNPO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC8A9440)
#define OPEJFIDCNPO_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A9550)
#define OPEJFIDCNPO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xC8A9490)

inline static constexpr unsigned int OPEJFIDCNPO_TypeDefinitionIndex = 55549;

	class OPEJFIDCNPO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MDFDDPNLEEA; // 0x10
		::PNNPEPDNFEA_PEAIKOGICOC* BOIAANJCIMP; // 0x18
		::RPG::GameCore::GameEntity* EBGONEJCGFE; // 0x20
		::System::String* ALKLHOEJBBP; // 0x28
		::AGOFDNJAOMA* PPJKAGKAGLL; // 0x30
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x38
		::RPG::GameCore::ComplexSkillAISubType EPFHBGNGBBK; // 0x40
		::System::Boolean BEFOILKMCCE; // 0x44
		::System::Boolean MDJBHMFHFIK; // 0x45
		::System::Boolean COKALPNEEGN; // 0x46
		::System::Boolean PJFJMCFEENM; // 0x47
		::RPG::GameCore::FixPoint NPMACGNINKA; // 0x48
		::System::Int32 NIFIJJPBABD; // 0x50
		::System::Int32 GNPIMBBICED; // 0x54
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

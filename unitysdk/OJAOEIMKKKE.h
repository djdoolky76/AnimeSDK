#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define OJAOEIMKKKE_CTOR_OFFSET UNITYSDK_OFFSET(0x194A6320)
#define OJAOEIMKKKE_OLKJENDHKDF_OFFSET UNITYSDK_OFFSET(0x194A62C0)

inline static constexpr unsigned int OJAOEIMKKKE_TypeDefinitionIndex = 57435;

	class OJAOEIMKKKE : public ::System::Object
	{
	public:
		::RPG::GameCore::SkillCharacterComponent* DGFJFGGIACL; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* PCIDMHBGICL; // 0x18
		::System::Single HKNFNCGOING; // 0x20
		::System::Single FOMHLJBMINK; // 0x24
		::System::Boolean FPFAFHLNPED; // 0x28
		::System::Boolean BKPFBCADFCC; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJAOEIMKKKE_CTOR_OFFSET))(this);
		}

		::System::Boolean OLKJENDHKDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJAOEIMKKKE_OLKJENDHKDF_OFFSET))(this);
		}

	};

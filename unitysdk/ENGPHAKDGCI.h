#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace System { class String; }

#define ENGPHAKDGCI_CTOR_OFFSET UNITYSDK_OFFSET(0x155A41E0)

inline static constexpr unsigned int ENGPHAKDGCI_TypeDefinitionIndex = 55833;

	class ENGPHAKDGCI : public ::System::Object
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x10
		::RPG::GameCore::SkillCharacterComponent* MCLLALGABAB; // 0x18
		::RPG::Client::TextID DKLKGHFLMDO; // 0x20
		::RPG::GameCore::ControlSkillType GFNJJEFJKPD; // 0x30
		::RPG::GameCore::SkillType GMPGDEINODK; // 0x34
		::RPG::Client::TextID NDCFMJPEECP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGPHAKDGCI_CTOR_OFFSET))(this);
		}

	};

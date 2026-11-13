#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StanceMode.h"
#include "unitysdk/System/Object.h"
class IDDAAPNDMJC;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define OGMEKHGDGJF_CTOR_OFFSET UNITYSDK_OFFSET(0x18E00B70)

inline static constexpr unsigned int OGMEKHGDGJF_TypeDefinitionIndex = 58983;

	class OGMEKHGDGJF : public ::System::Object
	{
	public:
		::IDDAAPNDMJC* PGOOCHNOKBH; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* MIAJNJNECOG; // 0x18
		::RPG::GameCore::FixPoint JBDEGMONPNP; // 0x20
		::RPG::GameCore::FixPoint MBACHJJGMCI; // 0x28
		::RPG::GameCore::FixPoint MDAIMLBJFAD; // 0x30
		::System::Int32 PKICDFAEPKE; // 0x38
		::System::Int32 JEADKAFLEAH; // 0x3C
		::RPG::GameCore::StanceMode FCGFFAJIBKA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMEKHGDGJF_CTOR_OFFSET))(this);
		}

	};

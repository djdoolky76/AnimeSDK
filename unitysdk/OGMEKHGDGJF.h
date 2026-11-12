#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StanceMode.h"
#include "unitysdk/System/Object.h"
class IDDAAPNDMJC;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define OGMEKHGDGJF_CTOR_OFFSET UNITYSDK_OFFSET(0xC713F20)

inline static constexpr unsigned int OGMEKHGDGJF_TypeDefinitionIndex = 58983;

	class OGMEKHGDGJF : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* MIAJNJNECOG; // 0x10
		::IDDAAPNDMJC* PGOOCHNOKBH; // 0x18
		::System::Int32 JEADKAFLEAH; // 0x20
		::RPG::GameCore::StanceMode FCGFFAJIBKA; // 0x24
		::System::Int32 PKICDFAEPKE; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint JBDEGMONPNP; // 0x30
		::RPG::GameCore::FixPoint MBACHJJGMCI; // 0x38
		::RPG::GameCore::FixPoint MDAIMLBJFAD; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMEKHGDGJF_CTOR_OFFSET))(this);
		}

	};

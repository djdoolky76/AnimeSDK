#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"
class JACIBMLLOFE;
class OCKFDCAINLB;

#define LALNKCACGOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E07E0)
#define LALNKCACGOE_PGCLIMDKKBF_OFFSET UNITYSDK_OFFSET(0xB5E0600)
#define LALNKCACGOE_POMFIOCOCEG_OFFSET UNITYSDK_OFFSET(0xB5E06D0)

inline static constexpr unsigned int LALNKCACGOE_TypeDefinitionIndex = 80127;

	class LALNKCACGOE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALNKCACGOE_CTOR_OFFSET))(this);
		}

		::OCKFDCAINLB* PGCLIMDKKBF(::System::UInt32 a1, ::RPG::Client::MechCraft::MechCraftPartType a2)
		{
			return ((::OCKFDCAINLB*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + LALNKCACGOE_PGCLIMDKKBF_OFFSET))(this, a1, a2);
		}

		::JACIBMLLOFE* POMFIOCOCEG(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::UInt32 a2, ::RPG::Client::MechCraft::MechCraftPartType a3)
		{
			return ((::JACIBMLLOFE*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + LALNKCACGOE_POMFIOCOCEG_OFFSET))(this, a1, a2, a3);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightRole; }

#define BOIKIMJHDHK_CIGFHFOGKCE_OFFSET UNITYSDK_OFFSET(0xC191140)
#define BOIKIMJHDHK_CTOR_OFFSET UNITYSDK_OFFSET(0xC191240)
#define BOIKIMJHDHK_HCNEDLIFOOE_OFFSET UNITYSDK_OFFSET(0xC1911A0)
#define BOIKIMJHDHK_PEOGNBPHNEB_OFFSET UNITYSDK_OFFSET(0xC190DA0)

inline static constexpr unsigned int BOIKIMJHDHK_TypeDefinitionIndex = 64931;

	class BOIKIMJHDHK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIKIMJHDHK_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* PEOGNBPHNEB(::System::UInt32 a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + BOIKIMJHDHK_PEOGNBPHNEB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipTrack* CIGFHFOGKCE(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrackData* a2)
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + BOIKIMJHDHK_CIGFHFOGKCE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 HCNEDLIFOOE(::System::UInt32 a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + BOIKIMJHDHK_HCNEDLIFOOE_OFFSET))(this, a1, a2);
		}

	};

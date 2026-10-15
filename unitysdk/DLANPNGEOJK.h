#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace RPG::Client::PetMarble { class IPetMarbleData; }

#define DLANPNGEOJK_COMPARE_OFFSET UNITYSDK_OFFSET(0xF8908D0)
#define DLANPNGEOJK_CTOR_OFFSET UNITYSDK_OFFSET(0xF8908C0)

	class DLANPNGEOJK : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarbleTeamSelection* CLFIOJEHCHG; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityMarble::MarbleTeamSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleTeamSelection*))((::PBYTE)hIl2Cpp + DLANPNGEOJK_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::Client::PetMarble::IPetMarbleData* a1, ::RPG::Client::PetMarble::IPetMarbleData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PetMarble::IPetMarbleData*, ::RPG::Client::PetMarble::IPetMarbleData*))((::PBYTE)hIl2Cpp + DLANPNGEOJK_COMPARE_OFFSET))(this, a1, a2);
		}

	};

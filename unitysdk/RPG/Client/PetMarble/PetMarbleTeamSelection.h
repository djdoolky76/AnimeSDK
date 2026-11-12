#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleTeamSelection.h"
#include "unitysdk/DCHICFMEANN.h"
namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xE53CE70)
#define RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE5408A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_SETSELECTEDMARBLEAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xE53F080)
#define RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xE53F800)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleTeamSelection_TypeDefinitionIndex = 76883;

	class PetMarbleTeamSelection : public ::RPG::Client::ActivityMarble::MarbleTeamSelection
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateEmpty()
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_CREATEEMPTY_OFFSET))();
		}

		::System::Void Update(::System::Collections::Generic::IList_1<::DCHICFMEANN>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::DCHICFMEANN>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SetSelectedMarbleAppearance(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_SETSELECTEDMARBLEAPPEARANCE_OFFSET))(this, a1, a2);
		}

	};
}

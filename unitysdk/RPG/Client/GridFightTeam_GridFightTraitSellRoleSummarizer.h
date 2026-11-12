#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCAD260)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xDCACDB0)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xDCAD140)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xDCAD070)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xDCACE00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_GridFightTraitSellRoleSummarizer_TypeDefinitionIndex = 66854;

	class GridFightTeam_GridFightTraitSellRoleSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _RemoveRoles; // 0x10
		::System::Int32 AddCoin; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTTRAITSELLROLESUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
}

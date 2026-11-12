#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class FPHPFJLAJDK;

#define RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCAC390)
#define RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xDCAC1D0)
#define RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER_UPDATEPROJECTIONADD_OFFSET UNITYSDK_OFFSET(0xDCAC180)
#define RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER_UPDATEUNLOCKEDPROJECTIONID_OFFSET UNITYSDK_OFFSET(0xDCAC130)
#define RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER__RESET_OFFSET UNITYSDK_OFFSET(0xDCAC340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_AutoProjectionAddSummarizer_TypeDefinitionIndex = 66852;

	class GridFightTeam_AutoProjectionAddSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::FPHPFJLAJDK* _ProtoProj; // 0x10
		::System::UInt32 _UnlockedProjectionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateUnlockedProjectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER_UPDATEUNLOCKEDPROJECTIONID_OFFSET))(this, a1);
		}

		::System::Void UpdateProjectionAdd(::FPHPFJLAJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER_UPDATEPROJECTIONADD_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_AUTOPROJECTIONADDSUMMARIZER__RESET_OFFSET))(this);
		}

	};
}

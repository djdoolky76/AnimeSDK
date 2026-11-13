#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
namespace RPG::Client { class GridFightAdditionalTraitRoleChooseTraitEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPJLJCCPFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x191823A0)
#define CPJLJCCPFHD_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x19182160)
#define CPJLJCCPFHD_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x19181A80)

inline static constexpr unsigned int CPJLJCCPFHD_TypeDefinitionIndex = 67144;

	class CPJLJCCPFHD : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAdditionalTraitRoleChooseTraitEffect*>* CKKMEHBICLN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJLJCCPFHD_CTOR_OFFSET))(this);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJLJCCPFHD_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJLJCCPFHD_UPDATEDONE_OFFSET))(this);
		}

	};

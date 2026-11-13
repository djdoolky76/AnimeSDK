#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"

#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E1F40)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x1D4E1EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePosService_RoleRemoveSummerizer_TypeDefinitionIndex = 66407;

	class GridFightRolePosService_RoleRemoveSummerizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

	};
}

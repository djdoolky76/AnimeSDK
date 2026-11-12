#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"

#define RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCAD320)
#define RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER_UPDATEPROJECTIONREMOVE_OFFSET UNITYSDK_OFFSET(0xDCAD2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_ProjectionRemoveSummarizer_TypeDefinitionIndex = 66853;

	class GridFightTeam_ProjectionRemoveSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateProjectionRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_PROJECTIONREMOVESUMMARIZER_UPDATEPROJECTIONREMOVE_OFFSET))(this, a1);
		}

	};
}

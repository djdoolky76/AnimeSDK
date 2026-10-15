#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACOKICDKFCI.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0xD1E33E0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0xD1E3490)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xD1E3530)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE_GET_PRAYQUESTID_OFFSET UNITYSDK_OFFSET(0xD1E33F0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE__INNODERANGE_OFFSET UNITYSDK_OFFSET(0xD1E3650)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE__ISROUNDLEFT_OFFSET UNITYSDK_OFFSET(0xD1E3A80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestFinishType_TypeDefinitionIndex = 65037;

	class GridFightPrayQuestFinishType : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrayQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE_GET_PRAYQUESTID_OFFSET))(this);
		}

		::ACOKICDKFCI get_FinishType()
		{
			return ((::ACOKICDKFCI(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE_GET_FINISHTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean _InNodeRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE__INNODERANGE_OFFSET))(this);
		}

		::System::Boolean _IsRoundLeft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTFINISHTYPE__ISROUNDLEFT_OFFSET))(this);
		}

	};
}

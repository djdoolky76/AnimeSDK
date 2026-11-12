#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDE09620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS35_0__GETPLANDATA_B__0_OFFSET UNITYSDK_OFFSET(0xDE09DA0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPlanService___c__DisplayClass35_0_TypeDefinitionIndex = 83112;

	class LimaoNewsPlanService___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::UInt32 planID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPlanData_b__0(::RPG::Client::LimaoNews::LimaoNewsPlanData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS35_0__GETPLANDATA_B__0_OFFSET))(this, a1);
		}

	};
}

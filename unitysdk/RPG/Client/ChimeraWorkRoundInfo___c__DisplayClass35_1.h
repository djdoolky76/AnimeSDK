#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_1_CTOR_OFFSET UNITYSDK_OFFSET(0xCB6C010)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_1__TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_B__1_OFFSET UNITYSDK_OFFSET(0xCB6CC00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo___c__DisplayClass35_1_TypeDefinitionIndex = 63510;

	template <typename T>
	class ChimeraWorkRoundInfo___c__DisplayClass35_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_1_CTOR_OFFSET))(this);
		}

		::System::Void _TryGetCurrentRoundOptionMainMissionData_b__1(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__DISPLAYCLASS35_1__TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_B__1_OFFSET))(this, a1);
		}

	};
}

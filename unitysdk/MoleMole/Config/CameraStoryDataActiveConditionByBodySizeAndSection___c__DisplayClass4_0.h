#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/CameraStoryDataActiveConditionByBodySizeAndSection_Condition.h"

#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174F3250)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION___C__DISPLAYCLASS4_0__PASS_B__0_OFFSET UNITYSDK_OFFSET(0x174F3260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveConditionByBodySizeAndSection___c__DisplayClass4_0_TypeDefinitionIndex = 44937;

	class CameraStoryDataActiveConditionByBodySizeAndSection___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::EntityBodySize playerBodySize; // 0x10
		::MoleMole::Battle::EntityBodySize npcBodySize; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Pass_b__0(::MoleMole::Config::CameraStoryDataActiveConditionByBodySizeAndSection_Condition pair)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraStoryDataActiveConditionByBodySizeAndSection_Condition))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITIONBYBODYSIZEANDSECTION___C__DISPLAYCLASS4_0__PASS_B__0_OFFSET))(this, pair);
		}
	};
}

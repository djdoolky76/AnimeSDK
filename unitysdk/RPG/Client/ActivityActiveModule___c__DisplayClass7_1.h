#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKCDOOFJDKO;
namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC3B62E0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_1___SYNCACTIVEACTIVITYDATALIST_B__1_OFFSET UNITYSDK_OFFSET(0xC3B67B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule___c__DisplayClass7_1_TypeDefinitionIndex = 61384;

	template <typename T>
	class ActivityActiveModule___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::IKCDOOFJDKO* protoData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncActiveActivityDataList_b__1(::RPG::Client::ActiveActivityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS7_1___SYNCACTIVEACTIVITYDATALIST_B__1_OFFSET))(this, a1);
		}

	};
}

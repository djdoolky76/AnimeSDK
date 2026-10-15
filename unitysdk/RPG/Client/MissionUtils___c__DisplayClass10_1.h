#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD719450)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_1__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__0_OFFSET UNITYSDK_OFFSET(0xD71D8E0)

namespace RPG::Client
{
	template <typename T>
	class MissionUtils___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::UnityEngine::Vector3 targetPosition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_1_CTOR_OFFSET))(this);
		}

		::System::Void _TryAssistWayPointOneClickCompleteTransfer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_1__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__0_OFFSET))(this);
		}

	};
}

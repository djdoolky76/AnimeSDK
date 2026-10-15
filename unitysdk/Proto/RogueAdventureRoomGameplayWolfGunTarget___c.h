#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class RogueAdventureRoomGameplayWolfGunTarget; }
namespace System { class Object; }

#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE1C30)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE1C70)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1DFE1C80)

namespace Proto
{
	inline static constexpr unsigned int RogueAdventureRoomGameplayWolfGunTarget___c_TypeDefinitionIndex = 32934;

	class RogueAdventureRoomGameplayWolfGunTarget___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4E7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C_CTOR_OFFSET))(this);
		}

		::Proto::RogueAdventureRoomGameplayWolfGunTarget* __cctor_b__40_0()
		{
			return ((::Proto::RogueAdventureRoomGameplayWolfGunTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C___CCTOR_B__40_0_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSplineMovePoint; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPLINEMOVEPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DDFE0)
#define RPG_GAMECORE_FIVEDIMSPLINEMOVEPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DDE40)

namespace RPG::GameCore
{
	class FiveDimSplineMovePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PointName; // 0x10
		::System::Single WaitTime; // 0x18
		::System::Single MoveSpeed; // 0x1C
		::RPG::GameCore::LittleGameEvent* OnEnterPoint; // 0x20
		::RPG::GameCore::LittleGameEvent* OnExitPoint; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVEPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSplineMovePoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSplineMovePoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVEPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

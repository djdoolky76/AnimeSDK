#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtInsertActionPhase.h"
#include "unitysdk/System/Object.h"
class LHLJIHEKIOH;
namespace RPG::GameCore { class GameWorld; }

namespace RPG::GameCore
{
	template <typename T>
	class RtInsertAction_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* _GameWorld; // 0x0
		::LHLJIHEKIOH* _OwnerModule; // 0x0
		::RPG::GameCore::RtInsertActionPhase _Phase; // 0x0
		::System::Int32 _Priority; // 0x0
		T _InsertParam; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CEGJADNLKED;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

namespace RPG::GameCore
{
	template <typename T>
	class SO_Task_1 : public ::GELIALJDFBL
	{
	public:
		T _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x0
		::CEGJADNLKED* _SOComp; // 0x0
		::System::String* _Name; // 0x0
	};
}

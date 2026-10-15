#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IContext; }
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int LevelVariableService_1_TypeDefinitionIndex = 76504;

	template <typename T>
	class LevelVariableService_1 : public ::System::Object
	{
	public:
		::Entitas::IContext* _Context; // 0x0
		::System::Int32 _LevelVarEntityID; // 0x0
		::System::Action* _LogErrorAction; // 0x0
		::System::Action* _LogErrorActionCache; // 0x0
	};
}

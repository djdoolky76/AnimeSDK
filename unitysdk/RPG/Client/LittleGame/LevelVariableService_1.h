#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { template <typename T> class IContext_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int LevelVariableService_1_TypeDefinitionIndex = 76503;

	template <typename T>
	class LevelVariableService_1 : public ::System::Object
	{
	public:
		::Entitas::IContext_1<T>* _Context; // 0x0
		::System::Int32 _LevelVarEntityID; // 0x0
		::System::Action_1<::System::String*>* _LogErrorAction; // 0x0
		::System::Action_1<::System::String*>* _LogErrorActionCache; // 0x0
	};
}

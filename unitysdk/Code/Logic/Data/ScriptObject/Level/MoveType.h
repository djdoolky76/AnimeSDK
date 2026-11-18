#pragma once
#include "unitysdk/unitysdk.h"

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int MoveType_TypeDefinitionIndex = 81063;

	enum class MoveType : ::System::Int32
	{
		Once = 2,
		Loop = 1,
		None = 0,
	};
}

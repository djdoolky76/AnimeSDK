#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EAvatarCameraShotType_TypeDefinitionIndex = 75444;

	enum class EAvatarCameraShotType : ::System::Int32
	{
		SIMPLE_A = 1,
		Override_None = 99,
		SURROUND_B = 3,
		NONE = 0,
		NORMAL_C = 2,
	};
}

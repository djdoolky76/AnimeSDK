#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int VertexStretchDirectionType_TypeDefinitionIndex = 64246;

	enum class VertexStretchDirectionType : ::System::Byte
	{
		Center = 1,
		Local = 3,
		Point = 2,
		Uniform = 0,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERSEQUENCEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4C7A0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderSequenceBase_TypeDefinitionIndex = 85210;

	class RenderSequenceBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERSEQUENCEBASE__CTOR_OFFSET))(this);
		}
	};
}

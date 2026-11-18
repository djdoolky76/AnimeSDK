#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLoopable_2_TypeDefinitionIndex = 62816;

	template <typename T1, typename T2>
	class ESLoopable_2 : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		// static const ::System::String* BASE_VAL_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* WRAP_VAL_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* KEY_FRAME_HOR_GROUP_NAME; // 0x0
		// static const ::System::Int32 BASE_VAL_INPUT_FIELD_WIDTH = 0x3C; // 0x0
		T1 fadeInCurve; // 0x0
		T1 normalCurve; // 0x0
		T1 fadeOutCurve; // 0x0
		T1 completeCurve; // 0x0
	};
}

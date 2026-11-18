#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BindSendMsgType_TypeDefinitionIndex = 86799;

	enum class BindSendMsgType : ::System::Int32
	{
		OnPressDown = 1,
		OnComplete = 3,
		None = 0,
		OnTrigger = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int HDMIDCDNBCO_TypeDefinitionIndex = 84538;

enum class HDMIDCDNBCO : ::System::Int32
{
	OnHackerInteractCancel = 2,
	OnHackerInteractFocus = 3,
	OnHackerInteractLostFocus = 4,
	OnHackerInteractSuccess = 0,
	OnHackerInteractStart = 1,
};

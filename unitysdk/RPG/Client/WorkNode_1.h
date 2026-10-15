#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDKNLNLGODN.h"

namespace RPG::Client
{
	template <typename T>
	class WorkNode_1 : public ::JDKNLNLGODN
	{
	public:
		T _LoadParam; // 0x0
	};
}

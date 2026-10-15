#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"
class BDOHIOEMGCI;

#define OOMJGNGJNKG___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF87E40)
#define OOMJGNGJNKG___C__DISPLAYCLASS11_0___CREATEITEMIFNEED_B__0_OFFSET UNITYSDK_OFFSET(0xBF883B0)

inline static constexpr unsigned int OOMJGNGJNKG___c__DisplayClass11_0_TypeDefinitionIndex = 71553;

	class OOMJGNGJNKG___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FloatMessageType messageType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJGNGJNKG___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateItemIfNeed_b__0(::BDOHIOEMGCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDOHIOEMGCI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG___C__DISPLAYCLASS11_0___CREATEITEMIFNEED_B__0_OFFSET))(this, a1);
		}

	};

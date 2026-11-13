#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTFLYEFFECT___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D669A10)
#define RPG_CLIENT_GRIDFIGHTFLYEFFECT___C__DISPLAYCLASS8_0___PLAYFLYANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1D669AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlyEffect___c__DisplayClass8_0_TypeDefinitionIndex = 66013;

	class GridFightFlyEffect___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* onFinished; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayFlyAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLYEFFECT___C__DISPLAYCLASS8_0___PLAYFLYANIMATION_B__0_OFFSET))(this);
		}

	};
}

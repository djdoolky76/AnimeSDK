#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHPDLBPKCDK;
namespace RPG::Client { class BaseShaderPropertyTransition; }

#define LHPDLBPKCDK___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF59710)
#define LHPDLBPKCDK___C__DISPLAYCLASS15_0___BEGINFADEOUT_DITHERMODE_B__0_OFFSET UNITYSDK_OFFSET(0xBF59AB0)

inline static constexpr unsigned int LHPDLBPKCDK___c__DisplayClass15_0_TypeDefinitionIndex = 58585;

	class LHPDLBPKCDK___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::LHPDLBPKCDK* __4__this; // 0x10
		::RPG::Client::BaseShaderPropertyTransition* spt; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Void __BeginFadeOut_DitherMode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK___C__DISPLAYCLASS15_0___BEGINFADEOUT_DITHERMODE_B__0_OFFSET))(this);
		}

	};

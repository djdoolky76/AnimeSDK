#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }

#define HEOAAAKKHLC___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABF740)
#define HEOAAAKKHLC___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1CAC7460)

	class HEOAAAKKHLC___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 level; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::RPG::GameCore::Match3::MatchThree1v1AILevelConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, a1);
		}

	};

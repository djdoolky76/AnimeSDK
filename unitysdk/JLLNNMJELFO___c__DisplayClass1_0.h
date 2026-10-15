#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NONAIBLAJKA;
namespace RPG::GameCore { class TaskContext; }

#define JLLNNMJELFO___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB24FC60)
#define JLLNNMJELFO___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xB24FE30)

	class JLLNNMJELFO___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::NONAIBLAJKA* config; // 0x10
		::RPG::GameCore::TaskContext* context; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLNNMJELFO___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLNNMJELFO___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};

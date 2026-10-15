#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOAMIPNLIN;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICPIAGADBBO___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15E66700)
#define ICPIAGADBBO___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET UNITYSDK_OFFSET(0x15E66940)

	class ICPIAGADBBO___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* results; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPIAGADBBO___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _Evaluate_b__0(::HIOAMIPNLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + ICPIAGADBBO___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET))(this, a1);
		}

	};

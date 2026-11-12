#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC606E10)
#define NPPNOGNDFMJ___C__DISPLAYCLASS53_0___ACQUIREENTITYCOUNTER_B__0_OFFSET UNITYSDK_OFFSET(0xC60FB20)
#define NPPNOGNDFMJ___C__DISPLAYCLASS53_0___ACQUIREENTITYCOUNTER_B__1_OFFSET UNITYSDK_OFFSET(0xC60FC60)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass53_0_TypeDefinitionIndex = 61877;

	class NPPNOGNDFMJ___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>* counts; // 0x10
		::System::Action_1<::RPG::GameCore::GameEntity*>* firstAcquire; // 0x18
		::System::Action_1<::RPG::GameCore::GameEntity*>* lastRelease; // 0x20
		::RPG::GameCore::GameEntity* entity; // 0x28
		::System::Boolean acquired; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireEntityCounter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS53_0___ACQUIREENTITYCOUNTER_B__0_OFFSET))(this);
		}

		::System::Void __AcquireEntityCounter_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS53_0___ACQUIREENTITYCOUNTER_B__1_OFFSET))(this);
		}

	};

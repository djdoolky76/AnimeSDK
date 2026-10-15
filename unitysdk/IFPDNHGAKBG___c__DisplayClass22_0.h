#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFPDNHGAKBG;
namespace RPG::Client::Promises { class IPromise; }

#define IFPDNHGAKBG___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15F25F70)
#define IFPDNHGAKBG___C__DISPLAYCLASS22_0___PERFORMELITEANDBOSSSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0x15F26E30)

inline static constexpr unsigned int IFPDNHGAKBG___c__DisplayClass22_0_TypeDefinitionIndex = 75264;

	class IFPDNHGAKBG___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::IFPDNHGAKBG* __4__this; // 0x10
		::System::Boolean isFirstWin; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __PerformEliteAndBossStage_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPDNHGAKBG___C__DISPLAYCLASS22_0___PERFORMELITEANDBOSSSTAGE_B__0_OFFSET))(this);
		}

	};

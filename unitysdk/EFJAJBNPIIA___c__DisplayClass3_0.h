#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define EFJAJBNPIIA___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4E960)
#define EFJAJBNPIIA___C__DISPLAYCLASS3_0___SHOWROGUENOUSNEWSUBSTORYPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x13A4F450)

inline static constexpr unsigned int EFJAJBNPIIA___c__DisplayClass3_0_TypeDefinitionIndex = 67482;

	class EFJAJBNPIIA___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowRogueNousNewSubStoryPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJAJBNPIIA___C__DISPLAYCLASS3_0___SHOWROGUENOUSNEWSUBSTORYPAGE_B__0_OFFSET))(this);
		}

	};

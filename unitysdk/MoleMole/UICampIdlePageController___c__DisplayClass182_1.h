#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1738BDD0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_1__REFRESHCURRENTQA_B__0_OFFSET UNITYSDK_OFFSET(0x1738BDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass182_1_TypeDefinitionIndex = 38833;

	template <typename T>
	class UICampIdlePageController___c__DisplayClass182_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 index; // 0x18
		::System::Boolean isCorrect; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshCurrentQA_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_1__REFRESHCURRENTQA_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGKHEGKBKE;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }

#define IHGKHEGKBKE___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x173D2C90)
#define IHGKHEGKBKE___C__DISPLAYCLASS1_0__OPENENTRANCEWINDOWPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0x173D5450)
#define IHGKHEGKBKE___C__DISPLAYCLASS1_0__OPENENTRANCEWINDOWPROMISED_B__1_OFFSET UNITYSDK_OFFSET(0x173D54C0)

inline static constexpr unsigned int IHGKHEGKBKE___c__DisplayClass1_0_TypeDefinitionIndex = 84883;

	class IHGKHEGKBKE___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* promise; // 0x10
		::IHGKHEGKBKE* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGKHEGKBKE___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OpenEntranceWindowPromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGKHEGKBKE___C__DISPLAYCLASS1_0__OPENENTRANCEWINDOWPROMISED_B__0_OFFSET))(this);
		}

		::System::Void _OpenEntranceWindowPromised_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IHGKHEGKBKE___C__DISPLAYCLASS1_0__OPENENTRANCEWINDOWPROMISED_B__1_OFFSET))(this, a1);
		}

	};

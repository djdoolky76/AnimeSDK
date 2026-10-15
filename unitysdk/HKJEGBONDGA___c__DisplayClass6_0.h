#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
class HKJEGBONDGA;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HKJEGBONDGA___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15D49120)
#define HKJEGBONDGA___C__DISPLAYCLASS6_0__SUBSCRIBEISOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x15D49990)
#define HKJEGBONDGA___C__DISPLAYCLASS6_0__SUBSCRIBEISOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x15D499F0)

inline static constexpr unsigned int HKJEGBONDGA___c__DisplayClass6_0_TypeDefinitionIndex = 81508;

	class HKJEGBONDGA___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::CKCJOCJGHKC* tierce; // 0x10
		::HKJEGBONDGA* __4__this; // 0x18
		::System::Action_1<::System::UInt32>* observing; // 0x20
		::System::Action* callback; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEGBONDGA___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _SubscribeIsOpen_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKJEGBONDGA___C__DISPLAYCLASS6_0__SUBSCRIBEISOPEN_B__0_OFFSET))(this, a1);
		}

		::System::Void _SubscribeIsOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEGBONDGA___C__DISPLAYCLASS6_0__SUBSCRIBEISOPEN_B__1_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/R3/Unit.h"
class NBKNHOHKDJI;
namespace R3 { template <typename T> class Observer_1; }

#define NBKNHOHKDJI___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC87F10)
#define NBKNHOHKDJI___C__DISPLAYCLASS11_0__SUBSCRIBECORE_B__0_OFFSET UNITYSDK_OFFSET(0x1EC88120)

inline static constexpr unsigned int NBKNHOHKDJI___c__DisplayClass11_0_TypeDefinitionIndex = 44242;

	class NBKNHOHKDJI___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::NBKNHOHKDJI* __4__this; // 0x10
		::R3::Observer_1<::System::Boolean>* observer; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKNHOHKDJI___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _SubscribeCore_b__0(::R3::Unit a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + NBKNHOHKDJI___C__DISPLAYCLASS11_0__SUBSCRIBECORE_B__0_OFFSET))(this, a1);
		}

	};

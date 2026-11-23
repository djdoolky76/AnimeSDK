#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }

#define A418C49FA6A8C1F7_B953E1CAFEDA47B3_EA4F2BA76B220B76_OFFSET UNITYSDK_OFFSET(0x4247A70)
#define A418C49FA6A8C1F7_B953E1CAFEDA47B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int B953E1CAFEDA47B3_TypeDefinitionIndex = 13155;

	class B953E1CAFEDA47B3 : public ::System::Object
	{
	public:
		static ::System::Void EA4F2BA76B220B76(::System::IDisposable* A888A2214CB14D2B)
		{
			return ((::System::Void(*)(::System::IDisposable*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_B953E1CAFEDA47B3_EA4F2BA76B220B76_OFFSET))(A888A2214CB14D2B);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_B953E1CAFEDA47B3__CTOR_OFFSET))(this);
		}
	};
}

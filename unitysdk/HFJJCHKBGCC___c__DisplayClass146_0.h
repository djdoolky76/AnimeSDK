#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEBICGIOAB;
class HFJJCHKBGCC;
class ODGPPIHLOFF;

#define HFJJCHKBGCC___C__DISPLAYCLASS146_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C84070)
#define HFJJCHKBGCC___C__DISPLAYCLASS146_0__RELEASEPRIORITY_B__0_OFFSET UNITYSDK_OFFSET(0x15C87230)
#define HFJJCHKBGCC___C__DISPLAYCLASS146_0__RELEASEPRIORITY_B__1_OFFSET UNITYSDK_OFFSET(0x15C87250)

inline static constexpr unsigned int HFJJCHKBGCC___c__DisplayClass146_0_TypeDefinitionIndex = 49282;

	class HFJJCHKBGCC___c__DisplayClass146_0 : public ::System::Object
	{
	public:
		::HFJJCHKBGCC* __4__this; // 0x10
		::ODGPPIHLOFF* profileChangeAsyncHandle; // 0x18
		::CBEBICGIOAB* s; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS146_0_CTOR_OFFSET))(this);
		}

		::System::Void _ReleasePriority_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS146_0__RELEASEPRIORITY_B__0_OFFSET))(this);
		}

		::System::Void _ReleasePriority_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS146_0__RELEASEPRIORITY_B__1_OFFSET))(this, a1);
		}

	};

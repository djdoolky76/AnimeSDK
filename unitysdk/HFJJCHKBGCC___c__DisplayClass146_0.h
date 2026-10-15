#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEBICGIOAB;
class HFJJCHKBGCC;
class ODGPPIHLOFF;

#define HFJJCHKBGCC___C__DISPLAYCLASS146_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C776F0)
#define HFJJCHKBGCC___C__DISPLAYCLASS146_0__RELEASEPRIORITY_B__0_OFFSET UNITYSDK_OFFSET(0x15C7A8C0)
#define HFJJCHKBGCC___C__DISPLAYCLASS146_0__RELEASEPRIORITY_B__1_OFFSET UNITYSDK_OFFSET(0x15C7A8E0)

inline static constexpr unsigned int HFJJCHKBGCC___c__DisplayClass146_0_TypeDefinitionIndex = 49282;

	class HFJJCHKBGCC___c__DisplayClass146_0 : public ::System::Object
	{
	public:
		::ODGPPIHLOFF* profileChangeAsyncHandle; // 0x10
		::HFJJCHKBGCC* __4__this; // 0x18
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

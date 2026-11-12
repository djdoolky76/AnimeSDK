#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;
namespace System { class String; }

#define KBCOOJPNGDC___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBB789C0)
#define KBCOOJPNGDC___C__DISPLAYCLASS17_0___SETMAXFLAG_B__0_OFFSET UNITYSDK_OFFSET(0xBB79000)

inline static constexpr unsigned int KBCOOJPNGDC___c__DisplayClass17_0_TypeDefinitionIndex = 79898;

	class KBCOOJPNGDC___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::LPHINGPIEAJ* device; // 0x10
		::System::String* propertyName; // 0x18
		::System::Boolean original; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void __SetMaxFlag_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCOOJPNGDC___C__DISPLAYCLASS17_0___SETMAXFLAG_B__0_OFFSET))(this);
		}

	};

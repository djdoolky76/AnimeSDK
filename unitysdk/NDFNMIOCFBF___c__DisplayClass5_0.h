#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
class NDFNMIOCFBF;

#define NDFNMIOCFBF___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC3AC6C0)
#define NDFNMIOCFBF___C__DISPLAYCLASS5_0___INITDESTRUCTIBLEPROP_B__0_OFFSET UNITYSDK_OFFSET(0xC3AC810)
#define NDFNMIOCFBF___C__DISPLAYCLASS5_0___INITDESTRUCTIBLEPROP_B__1_OFFSET UNITYSDK_OFFSET(0xC3AC840)

inline static constexpr unsigned int NDFNMIOCFBF___c__DisplayClass5_0_TypeDefinitionIndex = 79085;

	class NDFNMIOCFBF___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::NDFNMIOCFBF* __4__this; // 0x10
		::INMMPMDELKE* entity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFNMIOCFBF___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __InitDestructibleProp_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + NDFNMIOCFBF___C__DISPLAYCLASS5_0___INITDESTRUCTIBLEPROP_B__0_OFFSET))(this, a1);
		}

		::System::Void __InitDestructibleProp_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + NDFNMIOCFBF___C__DISPLAYCLASS5_0___INITDESTRUCTIBLEPROP_B__1_OFFSET))(this, a1);
		}

	};

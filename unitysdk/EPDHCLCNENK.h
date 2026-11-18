#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EPDHCLCNENK_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x76CEB0)
#define EPDHCLCNENK_NMFCCBFLOLA_OFFSET UNITYSDK_OFFSET(0x359320)
#define EPDHCLCNENK__CCTOR_OFFSET UNITYSDK_OFFSET(0x158C5560)
#define EPDHCLCNENK__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int EPDHCLCNENK_TypeDefinitionIndex = 38976;

struct alignas(4) EPDHCLCNENK
{
	static ::EPDHCLCNENK* StaticGet_FDJHEBHLJLD()
	{
		return (::EPDHCLCNENK*)Il2CppClass::FromTypeDefinitionIndex(EPDHCLCNENK_TypeDefinitionIndex)->GetStaticField(0xA790);
	}
	::System::Int32 DOFOCGHPAGP; // 0x10

	::System::Void _ctor(::System::Int32 CEAGOJNOCPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPDHCLCNENK__CTOR_OFFSET))(this, CEAGOJNOCPG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPDHCLCNENK__CCTOR_OFFSET))();
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDHCLCNENK_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Int32 NMFCCBFLOLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDHCLCNENK_NMFCCBFLOLA_OFFSET))(this);
	}
};

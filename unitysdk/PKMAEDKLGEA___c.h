#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAFDBLJNDEG;
namespace System { template <typename T> class Comparison_1; }

#define PKMAEDKLGEA___C_PCJFJBEDBHB_OFFSET UNITYSDK_OFFSET(0x194B2A70)
#define PKMAEDKLGEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194B2A20)
#define PKMAEDKLGEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x194B2A60)

inline static constexpr unsigned int PKMAEDKLGEA___c_TypeDefinitionIndex = 51806;

class PKMAEDKLGEA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PKMAEDKLGEA___c_TypeDefinitionIndex)->GetStaticField(0x39E30);
	}
	static ::System::Comparison_1<::BAFDBLJNDEG*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::BAFDBLJNDEG*>**)Il2CppClass::FromTypeDefinitionIndex(PKMAEDKLGEA___c_TypeDefinitionIndex)->GetStaticField(0x39E38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKMAEDKLGEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMAEDKLGEA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PCJFJBEDBHB(::BAFDBLJNDEG* EJCBEJMGFAJ, ::BAFDBLJNDEG* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BAFDBLJNDEG*, ::BAFDBLJNDEG*))((::PBYTE)hIl2Cpp + PKMAEDKLGEA___C_PCJFJBEDBHB_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

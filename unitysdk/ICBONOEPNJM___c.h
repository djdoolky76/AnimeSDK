#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJLIFDCAPOH.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define ICBONOEPNJM___C_OACBNINJMIK_OFFSET UNITYSDK_OFFSET(0x16F58770)
#define ICBONOEPNJM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F58720)
#define ICBONOEPNJM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F58760)

inline static constexpr unsigned int ICBONOEPNJM___c_TypeDefinitionIndex = 54219;

class ICBONOEPNJM___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::JJLIFDCAPOH>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::JJLIFDCAPOH>**)Il2CppClass::FromTypeDefinitionIndex(ICBONOEPNJM___c_TypeDefinitionIndex)->GetStaticField(0x32330);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ICBONOEPNJM___c_TypeDefinitionIndex)->GetStaticField(0x32338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICBONOEPNJM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBONOEPNJM___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OACBNINJMIK(::JJLIFDCAPOH EJCBEJMGFAJ, ::JJLIFDCAPOH EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::JJLIFDCAPOH, ::JJLIFDCAPOH))((::PBYTE)hIl2Cpp + ICBONOEPNJM___C_OACBNINJMIK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

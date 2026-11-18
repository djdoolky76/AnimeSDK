#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define KIJBFNDJBEK___C_JCEKOBPOLGL_OFFSET UNITYSDK_OFFSET(0x16343DA0)
#define KIJBFNDJBEK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16343D50)
#define KIJBFNDJBEK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16343D90)

inline static constexpr unsigned int KIJBFNDJBEK___c_TypeDefinitionIndex = 83854;

class KIJBFNDJBEK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KIJBFNDJBEK___c_TypeDefinitionIndex)->GetStaticField(0x4D4D0);
	}
	static ::System::Action_1<::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KIJBFNDJBEK___c_TypeDefinitionIndex)->GetStaticField(0x4D4D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIJBFNDJBEK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJBFNDJBEK___C__CTOR_OFFSET))(this);
	}

	::System::Void JCEKOBPOLGL(::System::Int32 GNOHOICKMBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KIJBFNDJBEK___C_JCEKOBPOLGL_OFFSET))(this, GNOHOICKMBI);
	}
};

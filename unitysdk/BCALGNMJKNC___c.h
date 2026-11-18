#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCKNDGIKBFB;
namespace System { template <typename T> class Action_1; }

#define BCALGNMJKNC___C_BHINFPHFGMG_OFFSET UNITYSDK_OFFSET(0x12D18DB0)
#define BCALGNMJKNC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D18D60)
#define BCALGNMJKNC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D18DA0)

inline static constexpr unsigned int BCALGNMJKNC___c_TypeDefinitionIndex = 76804;

class BCALGNMJKNC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BCALGNMJKNC___c_TypeDefinitionIndex)->GetStaticField(0x3A3F0);
	}
	static ::System::Action_1<::OCKNDGIKBFB*>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::OCKNDGIKBFB*>**)Il2CppClass::FromTypeDefinitionIndex(BCALGNMJKNC___c_TypeDefinitionIndex)->GetStaticField(0x3A3F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCALGNMJKNC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCALGNMJKNC___C__CTOR_OFFSET))(this);
	}

	::System::Void BHINFPHFGMG(::OCKNDGIKBFB* JFGNLMIHCNG)
	{
		return ((::System::Void(*)(::PVOID, ::OCKNDGIKBFB*))((::PBYTE)hIl2Cpp + BCALGNMJKNC___C_BHINFPHFGMG_OFFSET))(this, JFGNLMIHCNG);
	}
};

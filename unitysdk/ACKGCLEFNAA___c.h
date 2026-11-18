#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define ACKGCLEFNAA___C_BPEHDHNOKBI_OFFSET UNITYSDK_OFFSET(0x17CB6CE0)
#define ACKGCLEFNAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CB6C90)
#define ACKGCLEFNAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB6CD0)

inline static constexpr unsigned int ACKGCLEFNAA___c_TypeDefinitionIndex = 53459;

class ACKGCLEFNAA___c : public ::System::Object
{
public:
	static ::System::Func_2<::PNJDGHBEMLK*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::PNJDGHBEMLK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ACKGCLEFNAA___c_TypeDefinitionIndex)->GetStaticField(0x36A40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ACKGCLEFNAA___c_TypeDefinitionIndex)->GetStaticField(0x36A48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACKGCLEFNAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKGCLEFNAA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BPEHDHNOKBI(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + ACKGCLEFNAA___C_BPEHDHNOKBI_OFFSET))(this, CDKCJAKODPN);
	}
};

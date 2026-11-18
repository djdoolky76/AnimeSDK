#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KKOCDIKKHAG;
class MFEEFEPGJIL;
namespace System { template <typename T1, typename T2> class Action_2; }

#define KIHBBAMHBGN___C_IKEHBGKEPAC_OFFSET UNITYSDK_OFFSET(0x15B8F6B0)
#define KIHBBAMHBGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B8F660)
#define KIHBBAMHBGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8F6A0)

inline static constexpr unsigned int KIHBBAMHBGN___c_TypeDefinitionIndex = 53640;

class KIHBBAMHBGN___c : public ::System::Object
{
public:
	static ::System::Action_2<::MFEEFEPGJIL*, ::KKOCDIKKHAG*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::MFEEFEPGJIL*, ::KKOCDIKKHAG*>**)Il2CppClass::FromTypeDefinitionIndex(KIHBBAMHBGN___c_TypeDefinitionIndex)->GetStaticField(0x3E510);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KIHBBAMHBGN___c_TypeDefinitionIndex)->GetStaticField(0x3E518);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIHBBAMHBGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHBBAMHBGN___C__CTOR_OFFSET))(this);
	}

	::System::Void IKEHBGKEPAC(::MFEEFEPGJIL* GBELIHABEDH, ::KKOCDIKKHAG* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::MFEEFEPGJIL*, ::KKOCDIKKHAG*))((::PBYTE)hIl2Cpp + KIHBBAMHBGN___C_IKEHBGKEPAC_OFFSET))(this, GBELIHABEDH, POBADKEDFOE);
	}
};

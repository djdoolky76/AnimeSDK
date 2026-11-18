#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGCOMLLFNJH;
class EBEAAFHPBJG;
namespace System { template <typename T1, typename T2> class Action_2; }

#define JMPPIBCCFPL___C_IKEHBGKEPAC_OFFSET UNITYSDK_OFFSET(0x1386ABB0)
#define JMPPIBCCFPL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1386AB60)
#define JMPPIBCCFPL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1386ABA0)

inline static constexpr unsigned int JMPPIBCCFPL___c_TypeDefinitionIndex = 59394;

class JMPPIBCCFPL___c : public ::System::Object
{
public:
	static ::System::Action_2<::AGCOMLLFNJH*, ::EBEAAFHPBJG*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::AGCOMLLFNJH*, ::EBEAAFHPBJG*>**)Il2CppClass::FromTypeDefinitionIndex(JMPPIBCCFPL___c_TypeDefinitionIndex)->GetStaticField(0x3E3D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JMPPIBCCFPL___c_TypeDefinitionIndex)->GetStaticField(0x3E3D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPPIBCCFPL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPPIBCCFPL___C__CTOR_OFFSET))(this);
	}

	::System::Void IKEHBGKEPAC(::AGCOMLLFNJH* ENAHHMFJKLH, ::EBEAAFHPBJG* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::AGCOMLLFNJH*, ::EBEAAFHPBJG*))((::PBYTE)hIl2Cpp + JMPPIBCCFPL___C_IKEHBGKEPAC_OFFSET))(this, ENAHHMFJKLH, POBADKEDFOE);
	}
};

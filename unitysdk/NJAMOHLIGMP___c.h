#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NKJLGFPNLBD;
namespace System { template <typename T> class Action_1; }

#define NJAMOHLIGMP___C_DCHGKCAKGAA_OFFSET UNITYSDK_OFFSET(0x1315A4B0)
#define NJAMOHLIGMP___C_MBDHKFPCHCA_OFFSET UNITYSDK_OFFSET(0x1315A4C0)
#define NJAMOHLIGMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1315A460)
#define NJAMOHLIGMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1315A4A0)

inline static constexpr unsigned int NJAMOHLIGMP___c_TypeDefinitionIndex = 41613;

class NJAMOHLIGMP___c : public ::System::Object
{
public:
	static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__1_5()
	{
		return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(NJAMOHLIGMP___c_TypeDefinitionIndex)->GetStaticField(0x42540);
	}
	static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__1_3()
	{
		return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(NJAMOHLIGMP___c_TypeDefinitionIndex)->GetStaticField(0x42548);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NJAMOHLIGMP___c_TypeDefinitionIndex)->GetStaticField(0x42550);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJAMOHLIGMP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAMOHLIGMP___C__CTOR_OFFSET))(this);
	}

	::System::Void DCHGKCAKGAA(::NKJLGFPNLBD* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + NJAMOHLIGMP___C_DCHGKCAKGAA_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void MBDHKFPCHCA(::NKJLGFPNLBD* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + NJAMOHLIGMP___C_MBDHKFPCHCA_OFFSET))(this, DJCNCELJPOM);
	}
};

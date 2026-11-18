#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System { template <typename T1, typename T2> class Func_2; }

#define NJINPLNCDCH___C_IHCABAANHLP_OFFSET UNITYSDK_OFFSET(0xE584300)
#define NJINPLNCDCH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE5842B0)
#define NJINPLNCDCH___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE5842F0)

inline static constexpr unsigned int NJINPLNCDCH___c_TypeDefinitionIndex = 49870;

class NJINPLNCDCH___c : public ::System::Object
{
public:
	static ::System::Func_2<::CJIEIHEDMME*, ::System::Boolean>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::CJIEIHEDMME*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NJINPLNCDCH___c_TypeDefinitionIndex)->GetStaticField(0x45550);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NJINPLNCDCH___c_TypeDefinitionIndex)->GetStaticField(0x45558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJINPLNCDCH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJINPLNCDCH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean IHCABAANHLP(::CJIEIHEDMME* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + NJINPLNCDCH___C_IHCABAANHLP_OFFSET))(this, EJCBEJMGFAJ);
	}
};

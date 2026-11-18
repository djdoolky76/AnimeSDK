#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace System { template <typename T> class Comparison_1; }

#define EFFPJCLPDOA___C_GNIFBDMILKF_OFFSET UNITYSDK_OFFSET(0x11A6EF70)
#define EFFPJCLPDOA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A6EF20)
#define EFFPJCLPDOA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6EF60)

inline static constexpr unsigned int EFFPJCLPDOA___c_TypeDefinitionIndex = 76884;

class EFFPJCLPDOA___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::CJIEIHEDMME*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::CJIEIHEDMME*>**)Il2CppClass::FromTypeDefinitionIndex(EFFPJCLPDOA___c_TypeDefinitionIndex)->GetStaticField(0x49A30);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EFFPJCLPDOA___c_TypeDefinitionIndex)->GetStaticField(0x49A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFFPJCLPDOA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFPJCLPDOA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GNIFBDMILKF(::CJIEIHEDMME* EJCBEJMGFAJ, ::CJIEIHEDMME* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CJIEIHEDMME*, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + EFFPJCLPDOA___C_GNIFBDMILKF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

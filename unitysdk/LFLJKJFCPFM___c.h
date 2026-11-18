#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FLMEKBECJPI;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define LFLJKJFCPFM___C_GAGCLBDFAOJ_OFFSET UNITYSDK_OFFSET(0x1A30A5F0)
#define LFLJKJFCPFM___C_IFBMOHAKGJL_OFFSET UNITYSDK_OFFSET(0x1A30A960)
#define LFLJKJFCPFM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A30A5A0)
#define LFLJKJFCPFM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30A5E0)

inline static constexpr unsigned int LFLJKJFCPFM___c_TypeDefinitionIndex = 45904;

class LFLJKJFCPFM___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::FLMEKBECJPI*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::FLMEKBECJPI*>**)Il2CppClass::FromTypeDefinitionIndex(LFLJKJFCPFM___c_TypeDefinitionIndex)->GetStaticField(0x4A1B0);
	}
	static ::System::Func_2<::FLMEKBECJPI*, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::FLMEKBECJPI*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LFLJKJFCPFM___c_TypeDefinitionIndex)->GetStaticField(0x4A1B8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LFLJKJFCPFM___c_TypeDefinitionIndex)->GetStaticField(0x4A1C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFLJKJFCPFM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJKJFCPFM___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GAGCLBDFAOJ(::FLMEKBECJPI* EJCBEJMGFAJ, ::FLMEKBECJPI* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::FLMEKBECJPI*, ::FLMEKBECJPI*))((::PBYTE)hIl2Cpp + LFLJKJFCPFM___C_GAGCLBDFAOJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Boolean IFBMOHAKGJL(::FLMEKBECJPI* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::FLMEKBECJPI*))((::PBYTE)hIl2Cpp + LFLJKJFCPFM___C_IFBMOHAKGJL_OFFSET))(this, HAAEBCOBKFF);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCMNGFGCIKO;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define HLIAOCOCOOK___C_HLGAFNOKCKJ_OFFSET UNITYSDK_OFFSET(0x17E55170)
#define HLIAOCOCOOK___C_IMMHFJNCIKF_OFFSET UNITYSDK_OFFSET(0x17E54ED0)
#define HLIAOCOCOOK___C_MKKHDAMAIEM_OFFSET UNITYSDK_OFFSET(0x17E55410)
#define HLIAOCOCOOK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E54E80)
#define HLIAOCOCOOK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E54EC0)

inline static constexpr unsigned int HLIAOCOCOOK___c_TypeDefinitionIndex = 57784;

class HLIAOCOCOOK___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Int32>** StaticGet___9__26_0()
	{
		return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HLIAOCOCOOK___c_TypeDefinitionIndex)->GetStaticField(0x464C0);
	}
	static ::System::Func_1<::System::Int32>** StaticGet___9__26_1()
	{
		return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HLIAOCOCOOK___c_TypeDefinitionIndex)->GetStaticField(0x464C8);
	}
	static ::System::Comparison_1<::BCMNGFGCIKO*>** StaticGet___9__30_0()
	{
		return (::System::Comparison_1<::BCMNGFGCIKO*>**)Il2CppClass::FromTypeDefinitionIndex(HLIAOCOCOOK___c_TypeDefinitionIndex)->GetStaticField(0x464D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLIAOCOCOOK___c_TypeDefinitionIndex)->GetStaticField(0x464D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLIAOCOCOOK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAOCOCOOK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IMMHFJNCIKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAOCOCOOK___C_IMMHFJNCIKF_OFFSET))(this);
	}

	::System::Int32 HLGAFNOKCKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIAOCOCOOK___C_HLGAFNOKCKJ_OFFSET))(this);
	}

	::System::Int32 MKKHDAMAIEM(::BCMNGFGCIKO* EJCBEJMGFAJ, ::BCMNGFGCIKO* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BCMNGFGCIKO*, ::BCMNGFGCIKO*))((::PBYTE)hIl2Cpp + HLIAOCOCOOK___C_MKKHDAMAIEM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

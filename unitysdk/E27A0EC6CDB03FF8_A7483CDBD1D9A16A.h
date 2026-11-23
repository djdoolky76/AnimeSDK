#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E27A0EC6CDB03FF8_EB46AAAD931310FD;
namespace System { template <typename T> class Func_1; }

#define E27A0EC6CDB03FF8_A7483CDBD1D9A16A_E7BBAF5E0510F5AE_OFFSET UNITYSDK_OFFSET(0x3CC6030)
#define E27A0EC6CDB03FF8_A7483CDBD1D9A16A__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CC6250)
#define E27A0EC6CDB03FF8_A7483CDBD1D9A16A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E27A0EC6CDB03FF8_A7483CDBD1D9A16A_TypeDefinitionIndex = 10434;

class E27A0EC6CDB03FF8_A7483CDBD1D9A16A : public ::System::Object
{
public:
	static ::E27A0EC6CDB03FF8_A7483CDBD1D9A16A** StaticGet_FB0A7EB463FA294A()
	{
		return (::E27A0EC6CDB03FF8_A7483CDBD1D9A16A**)Il2CppClass::FromTypeDefinitionIndex(E27A0EC6CDB03FF8_A7483CDBD1D9A16A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_1<::System::Object*>** StaticGet_B6BB2011F1548FB3()
	{
		return (::System::Func_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(E27A0EC6CDB03FF8_A7483CDBD1D9A16A_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E27A0EC6CDB03FF8_A7483CDBD1D9A16A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E27A0EC6CDB03FF8_A7483CDBD1D9A16A__CTOR_OFFSET))(this);
	}

	::E27A0EC6CDB03FF8_EB46AAAD931310FD* E7BBAF5E0510F5AE()
	{
		return ((::E27A0EC6CDB03FF8_EB46AAAD931310FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + E27A0EC6CDB03FF8_A7483CDBD1D9A16A_E7BBAF5E0510F5AE_OFFSET))(this);
	}
};

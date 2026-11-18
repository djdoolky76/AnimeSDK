#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEBMABOOAGC;
namespace System { template <typename T> class Func_1; }

#define NGOFNNDDEBO___C_EJJLKNKIPPK_OFFSET UNITYSDK_OFFSET(0x12FE69B0)
#define NGOFNNDDEBO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FE6960)
#define NGOFNNDDEBO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE69A0)

inline static constexpr unsigned int NGOFNNDDEBO___c_TypeDefinitionIndex = 71207;

class NGOFNNDDEBO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NGOFNNDDEBO___c_TypeDefinitionIndex)->GetStaticField(0x3C8E0);
	}
	static ::System::Func_1<::Il2CppArray<::OEBMABOOAGC*>*>** StaticGet___9__25_0()
	{
		return (::System::Func_1<::Il2CppArray<::OEBMABOOAGC*>*>**)Il2CppClass::FromTypeDefinitionIndex(NGOFNNDDEBO___c_TypeDefinitionIndex)->GetStaticField(0x3C8E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGOFNNDDEBO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::OEBMABOOAGC*>* EJJLKNKIPPK()
	{
		return ((::Il2CppArray<::OEBMABOOAGC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO___C_EJJLKNKIPPK_OFFSET))(this);
	}
};

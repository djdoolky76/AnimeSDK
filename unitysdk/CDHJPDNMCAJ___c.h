#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFJPGKAKIJN;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CDHJPDNMCAJ___C_DKEFKEHOCKB_OFFSET UNITYSDK_OFFSET(0x199F8410)
#define CDHJPDNMCAJ___C_GPADPPKIAPM_OFFSET UNITYSDK_OFFSET(0x199F8310)
#define CDHJPDNMCAJ___C_IPDAJPHFBJO_OFFSET UNITYSDK_OFFSET(0x199F8300)
#define CDHJPDNMCAJ___C_JGOHGKEFDKG_OFFSET UNITYSDK_OFFSET(0x199F8330)
#define CDHJPDNMCAJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199F82B0)
#define CDHJPDNMCAJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199F82F0)

inline static constexpr unsigned int CDHJPDNMCAJ___c_TypeDefinitionIndex = 43303;

class CDHJPDNMCAJ___c : public ::System::Object
{
public:
	static ::System::Func_2<::KFJPGKAKIJN*, ::System::Boolean>** StaticGet___9__22_1()
	{
		return (::System::Func_2<::KFJPGKAKIJN*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CDHJPDNMCAJ___c_TypeDefinitionIndex)->GetStaticField(0x37040);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__22_3()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CDHJPDNMCAJ___c_TypeDefinitionIndex)->GetStaticField(0x37048);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CDHJPDNMCAJ___c_TypeDefinitionIndex)->GetStaticField(0x37050);
	}
	static ::System::Func_2<::KFJPGKAKIJN*, ::System::Int32>** StaticGet___9__22_2()
	{
		return (::System::Func_2<::KFJPGKAKIJN*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CDHJPDNMCAJ___c_TypeDefinitionIndex)->GetStaticField(0x37058);
	}
	static ::System::Func_2<::System::Int32, ::KFJPGKAKIJN*>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::System::Int32, ::KFJPGKAKIJN*>**)Il2CppClass::FromTypeDefinitionIndex(CDHJPDNMCAJ___c_TypeDefinitionIndex)->GetStaticField(0x37060);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDHJPDNMCAJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ___C__CTOR_OFFSET))(this);
	}

	::System::Boolean IPDAJPHFBJO(::KFJPGKAKIJN* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFJPGKAKIJN*))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ___C_IPDAJPHFBJO_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Int32 GPADPPKIAPM(::KFJPGKAKIJN* CBLGCIFLMKL)
	{
		return ((::System::Int32(*)(::PVOID, ::KFJPGKAKIJN*))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ___C_GPADPPKIAPM_OFFSET))(this, CBLGCIFLMKL);
	}

	::KFJPGKAKIJN* JGOHGKEFDKG(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KFJPGKAKIJN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ___C_JGOHGKEFDKG_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Int32 DKEFKEHOCKB(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDHJPDNMCAJ___C_DKEFKEHOCKB_OFFSET))(this, HAAEBCOBKFF);
	}
};

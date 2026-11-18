#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFMAKOAGGCP_GIDHEJGHNLO.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BFMAKOAGGCP___C_OLPGGPBODAA_OFFSET UNITYSDK_OFFSET(0x128A5450)
#define BFMAKOAGGCP___C_PCNGIBLCGNJ_OFFSET UNITYSDK_OFFSET(0x128A5440)
#define BFMAKOAGGCP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128A53F0)
#define BFMAKOAGGCP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x128A5430)

inline static constexpr unsigned int BFMAKOAGGCP___c_TypeDefinitionIndex = 56148;

class BFMAKOAGGCP___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IBENDELLLAO*>, ::System::Boolean>** StaticGet___9__44_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IBENDELLLAO*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BFMAKOAGGCP___c_TypeDefinitionIndex)->GetStaticField(0x3D490);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BFMAKOAGGCP___c_TypeDefinitionIndex)->GetStaticField(0x3D498);
	}
	static ::System::Converter_2<::System::Int32, ::System::Object*>** StaticGet___9__45_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BFMAKOAGGCP___c_TypeDefinitionIndex)->GetStaticField(0x3D4A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFMAKOAGGCP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMAKOAGGCP___C__CTOR_OFFSET))(this);
	}

	::BFMAKOAGGCP_GIDHEJGHNLO PCNGIBLCGNJ(::System::Int32 HAAEBCOBKFF)
	{
		return ((::BFMAKOAGGCP_GIDHEJGHNLO(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFMAKOAGGCP___C_PCNGIBLCGNJ_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean OLPGGPBODAA(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IBENDELLLAO*> IPPHGJDBGPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::IBENDELLLAO*>))((::PBYTE)hIl2Cpp + BFMAKOAGGCP___C_OLPGGPBODAA_OFFSET))(this, IPPHGJDBGPK);
	}
};

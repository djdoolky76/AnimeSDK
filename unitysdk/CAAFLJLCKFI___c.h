#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CAAFLJLCKFI___C_BOCAENNEMPL_OFFSET UNITYSDK_OFFSET(0x19AC9090)
#define CAAFLJLCKFI___C_IPIBAEDBHEC_OFFSET UNITYSDK_OFFSET(0x19AC90A0)
#define CAAFLJLCKFI___C_OFBECGJEJID_OFFSET UNITYSDK_OFFSET(0x19AC9080)
#define CAAFLJLCKFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AC9030)
#define CAAFLJLCKFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9070)

inline static constexpr unsigned int CAAFLJLCKFI___c_TypeDefinitionIndex = 11365;

class CAAFLJLCKFI___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__3_2()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CAAFLJLCKFI___c_TypeDefinitionIndex)->GetStaticField(0x7880);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CAAFLJLCKFI___c_TypeDefinitionIndex)->GetStaticField(0x7888);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CAAFLJLCKFI___c_TypeDefinitionIndex)->GetStaticField(0x7890);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CAAFLJLCKFI___c_TypeDefinitionIndex)->GetStaticField(0x7898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAAFLJLCKFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAFLJLCKFI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OFBECGJEJID(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> DLBHJOGKNOC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CAAFLJLCKFI___C_OFBECGJEJID_OFFSET))(this, DLBHJOGKNOC);
	}

	::System::Int32 BOCAENNEMPL(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> DLBHJOGKNOC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CAAFLJLCKFI___C_BOCAENNEMPL_OFFSET))(this, DLBHJOGKNOC);
	}

	::System::Int32 IPIBAEDBHEC(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> DLBHJOGKNOC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CAAFLJLCKFI___C_IPIBAEDBHEC_OFFSET))(this, DLBHJOGKNOC);
	}
};

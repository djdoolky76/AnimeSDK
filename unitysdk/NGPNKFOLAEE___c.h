#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKOPEHLPKNG.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define NGPNKFOLAEE___C_BKHFOFNPMNP_OFFSET UNITYSDK_OFFSET(0x1DE5CB40)
#define NGPNKFOLAEE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5CAF0)
#define NGPNKFOLAEE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5CB30)

inline static constexpr unsigned int NGPNKFOLAEE___c_TypeDefinitionIndex = 94031;

class NGPNKFOLAEE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NGPNKFOLAEE___c_TypeDefinitionIndex)->GetStaticField(0x526A0);
	}
	static ::System::Func_2<::IKOPEHLPKNG, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::IKOPEHLPKNG, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NGPNKFOLAEE___c_TypeDefinitionIndex)->GetStaticField(0x526A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGPNKFOLAEE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNKFOLAEE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 BKHFOFNPMNP(::IKOPEHLPKNG HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::IKOPEHLPKNG))((::PBYTE)hIl2Cpp + NGPNKFOLAEE___C_BKHFOFNPMNP_OFFSET))(this, HAAEBCOBKFF);
	}
};

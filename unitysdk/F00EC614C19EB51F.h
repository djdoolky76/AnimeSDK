#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define F00EC614C19EB51F_A61DA13C46B59605_OFFSET UNITYSDK_OFFSET(0x1F039E0)
#define F00EC614C19EB51F_BF82B92B552F069A_OFFSET UNITYSDK_OFFSET(0x1F03EB0)
#define F00EC614C19EB51F_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x1F04240)
#define F00EC614C19EB51F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F04370)

inline static constexpr unsigned int F00EC614C19EB51F_TypeDefinitionIndex = 7491;

struct alignas(4) F00EC614C19EB51F
{
	static ::F00EC614C19EB51F* StaticGet_AE04A22CC80CDB9D()
	{
		return (::F00EC614C19EB51F*)Il2CppClass::FromTypeDefinitionIndex(F00EC614C19EB51F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::Vector3 FAF8C63C9A83F6FA; // 0x10
	::System::Single EE72D2594FF0B04E; // 0x1C
	::System::Single A63AF63B95A904F6; // 0x20
	::System::Single B9FA93FBDF4677F5; // 0x24
	::UnityEngine::Vector3 FE31A8618857416E; // 0x28
	::UnityEngine::Quaternion E6C44E7E962F6550; // 0x34

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F00EC614C19EB51F_EA28CF291EBB2931_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F00EC614C19EB51F__CCTOR_OFFSET))();
	}

	/*
	::AFF16A2C62306DD5 BF82B92B552F069A()
	{
		return ((::AFF16A2C62306DD5(*)(::PVOID))((::PBYTE)hIl2Cpp + F00EC614C19EB51F_BF82B92B552F069A_OFFSET))(this);
	}
	*/

	/*
	static ::F00EC614C19EB51F A61DA13C46B59605(::F00EC614C19EB51F B35BBBE7E39341A2, ::F00EC614C19EB51F AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927)
	{
		return ((::F00EC614C19EB51F(*)(::F00EC614C19EB51F, ::F00EC614C19EB51F, ::System::Single))((::PBYTE)hIl2Cpp + F00EC614C19EB51F_A61DA13C46B59605_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DynamicBoneConfigMap;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MEABEEOGNHJ___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x13D1F110)
#define MEABEEOGNHJ___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x13D1F1D0)
#define MEABEEOGNHJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D1F0C0)
#define MEABEEOGNHJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1F100)

inline static constexpr unsigned int MEABEEOGNHJ___c_TypeDefinitionIndex = 86874;

class MEABEEOGNHJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::DynamicBoneConfigMap*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::DynamicBoneConfigMap*>**)Il2CppClass::FromTypeDefinitionIndex(MEABEEOGNHJ___c_TypeDefinitionIndex)->GetStaticField(0x4A2E0);
	}
	static ::System::Action_1<::DynamicBoneConfigMap*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::DynamicBoneConfigMap*>**)Il2CppClass::FromTypeDefinitionIndex(MEABEEOGNHJ___c_TypeDefinitionIndex)->GetStaticField(0x4A2E8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MEABEEOGNHJ___c_TypeDefinitionIndex)->GetStaticField(0x4A2F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEABEEOGNHJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEABEEOGNHJ___C__CTOR_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::DynamicBoneConfigMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::DynamicBoneConfigMap*))((::PBYTE)hIl2Cpp + MEABEEOGNHJ___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}

	::DynamicBoneConfigMap* LPCHADDECLC()
	{
		return ((::DynamicBoneConfigMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEABEEOGNHJ___C_LPCHADDECLC_OFFSET))(this);
	}
};

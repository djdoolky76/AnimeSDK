#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define LINOIIKIINK___C_MEAKAHIACPM_OFFSET UNITYSDK_OFFSET(0x13CED260)
#define LINOIIKIINK___C_NGBFMOAEAFP_OFFSET UNITYSDK_OFFSET(0x13CED270)
#define LINOIIKIINK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CED210)
#define LINOIIKIINK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CED250)

inline static constexpr unsigned int LINOIIKIINK___c_TypeDefinitionIndex = 51768;

class LINOIIKIINK___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__36_23()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LINOIIKIINK___c_TypeDefinitionIndex)->GetStaticField(0x4A1F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LINOIIKIINK___c_TypeDefinitionIndex)->GetStaticField(0x4A1F8);
	}
	static ::System::Comparison_1<::System::Boolean>** StaticGet___9__54_0()
	{
		return (::System::Comparison_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LINOIIKIINK___c_TypeDefinitionIndex)->GetStaticField(0x4A200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LINOIIKIINK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINOIIKIINK___C__CTOR_OFFSET))(this);
	}

	::System::String* MEAKAHIACPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LINOIIKIINK___C_MEAKAHIACPM_OFFSET))(this);
	}

	::System::Int32 NGBFMOAEAFP(::System::Boolean EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LINOIIKIINK___C_NGBFMOAEAFP_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

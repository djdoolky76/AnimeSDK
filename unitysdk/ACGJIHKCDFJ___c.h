#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FIHCLCMNKNN;
namespace System { template <typename T> class Action_1; }

#define ACGJIHKCDFJ___C_NJKHJBAENEN_OFFSET UNITYSDK_OFFSET(0x1433CE60)
#define ACGJIHKCDFJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1433CE10)
#define ACGJIHKCDFJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1433CE50)

inline static constexpr unsigned int ACGJIHKCDFJ___c_TypeDefinitionIndex = 38514;

class ACGJIHKCDFJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ACGJIHKCDFJ___c_TypeDefinitionIndex)->GetStaticField(0x3D2C0);
	}
	static ::System::Action_1<::FIHCLCMNKNN*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::FIHCLCMNKNN*>**)Il2CppClass::FromTypeDefinitionIndex(ACGJIHKCDFJ___c_TypeDefinitionIndex)->GetStaticField(0x3D2C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGJIHKCDFJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJIHKCDFJ___C__CTOR_OFFSET))(this);
	}

	::System::Void NJKHJBAENEN(::FIHCLCMNKNN* PFOGIEGECLC)
	{
		return ((::System::Void(*)(::PVOID, ::FIHCLCMNKNN*))((::PBYTE)hIl2Cpp + ACGJIHKCDFJ___C_NJKHJBAENEN_OFFSET))(this, PFOGIEGECLC);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AEDCD6F998C0458F_F3F01849EA33A41C_OFFSET UNITYSDK_OFFSET(0x389AA50)
#define AEDCD6F998C0458F__CCTOR_OFFSET UNITYSDK_OFFSET(0x389AB80)

inline static constexpr unsigned int AEDCD6F998C0458F_TypeDefinitionIndex = 20944;

class AEDCD6F998C0458F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FBFAB9190957CD0E()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AEDCD6F998C0458F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_E35F5F657206A773()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(AEDCD6F998C0458F_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int16>** StaticGet_BE8F390EE694D949()
	{
		return (::Il2CppArray<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(AEDCD6F998C0458F_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_FF7724E60EDD38A3()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(AEDCD6F998C0458F_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::Il2CppArray<::System::Int16>** StaticGet_E78E36C676302811()
	{
		return (::Il2CppArray<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(AEDCD6F998C0458F_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_E851651E6B523823()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(AEDCD6F998C0458F_TypeDefinitionIndex)->GetStaticField(0x28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEDCD6F998C0458F__CCTOR_OFFSET))();
	}

	static ::System::Int16 F3F01849EA33A41C(::System::Int32 E241930CF925DBB3)
	{
		return ((::System::Int16(*)(::System::Int32))((::PBYTE)hIl2Cpp + AEDCD6F998C0458F_F3F01849EA33A41C_OFFSET))(E241930CF925DBB3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueTuple_2.h"

#define ALEHGJDBGMI___C_KEMBLDLEHMB_OFFSET UNITYSDK_OFFSET(0x143B32D0)
#define ALEHGJDBGMI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143B3280)
#define ALEHGJDBGMI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143B32C0)

inline static constexpr unsigned int ALEHGJDBGMI___c_TypeDefinitionIndex = 69250;

class ALEHGJDBGMI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ALEHGJDBGMI___c_TypeDefinitionIndex)->GetStaticField(0x3A2C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEHGJDBGMI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEHGJDBGMI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KEMBLDLEHMB(::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> EJCBEJMGFAJ, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>))((::PBYTE)hIl2Cpp + ALEHGJDBGMI___C_KEMBLDLEHMB_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueTuple_2.h"

#define AGDCKGLKNNB___C_KEMBLDLEHMB_OFFSET UNITYSDK_OFFSET(0x16D75FB0)
#define AGDCKGLKNNB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D75F60)
#define AGDCKGLKNNB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D75FA0)

inline static constexpr unsigned int AGDCKGLKNNB___c_TypeDefinitionIndex = 60984;

class AGDCKGLKNNB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AGDCKGLKNNB___c_TypeDefinitionIndex)->GetStaticField(0x4FF70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGDCKGLKNNB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCKGLKNNB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KEMBLDLEHMB(::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> EJCBEJMGFAJ, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>))((::PBYTE)hIl2Cpp + AGDCKGLKNNB___C_KEMBLDLEHMB_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

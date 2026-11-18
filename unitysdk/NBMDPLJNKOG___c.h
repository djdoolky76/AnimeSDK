#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define NBMDPLJNKOG___C_EBEGJDIFDPA_OFFSET UNITYSDK_OFFSET(0x18F99F40)
#define NBMDPLJNKOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F99EF0)
#define NBMDPLJNKOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F99F30)

inline static constexpr unsigned int NBMDPLJNKOG___c_TypeDefinitionIndex = 50130;

class NBMDPLJNKOG___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Foundation::Tuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Foundation::Tuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(NBMDPLJNKOG___c_TypeDefinitionIndex)->GetStaticField(0x48EB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NBMDPLJNKOG___c_TypeDefinitionIndex)->GetStaticField(0x48EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBMDPLJNKOG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMDPLJNKOG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EBEGJDIFDPA(::Foundation::Tuple_2<::System::Int32, ::System::Int32> EJCBEJMGFAJ, ::Foundation::Tuple_2<::System::Int32, ::System::Int32> EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::Tuple_2<::System::Int32, ::System::Int32>, ::Foundation::Tuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + NBMDPLJNKOG___C_EBEGJDIFDPA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

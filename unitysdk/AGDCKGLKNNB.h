#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class Comparer_1; }

#define AGDCKGLKNNB__CCTOR_OFFSET UNITYSDK_OFFSET(0x144D8C70)

inline static constexpr unsigned int AGDCKGLKNNB_TypeDefinitionIndex = 60982;

class AGDCKGLKNNB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>** StaticGet_PKJKOCFNBOD()
	{
		return (::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(AGDCKGLKNNB_TypeDefinitionIndex)->GetStaticField(0x36880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGDCKGLKNNB__CCTOR_OFFSET))();
	}
};

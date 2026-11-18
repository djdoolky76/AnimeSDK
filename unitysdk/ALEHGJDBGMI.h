#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class Comparer_1; }

#define ALEHGJDBGMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CDDA80)

inline static constexpr unsigned int ALEHGJDBGMI_TypeDefinitionIndex = 69249;

class ALEHGJDBGMI : public ::System::Object
{
public:
	static ::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>** StaticGet_PKJKOCFNBOD()
	{
		return (::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(ALEHGJDBGMI_TypeDefinitionIndex)->GetStaticField(0x3A2D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEHGJDBGMI__CCTOR_OFFSET))();
	}
};

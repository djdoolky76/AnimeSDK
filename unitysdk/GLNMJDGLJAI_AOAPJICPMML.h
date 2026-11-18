#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLNMJDGLJAI_AOAPJICPMML__CCTOR_OFFSET UNITYSDK_OFFSET(0x179FAC20)

inline static constexpr unsigned int GLNMJDGLJAI_AOAPJICPMML_TypeDefinitionIndex = 76798;

class GLNMJDGLJAI_AOAPJICPMML : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>** StaticGet_MJECPPJEDFC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_AOAPJICPMML_TypeDefinitionIndex)->GetStaticField(0x31CF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_AOAPJICPMML__CCTOR_OFFSET))();
	}
};

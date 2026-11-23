#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"

class B7AF30A430F47436;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int E16D0C00AC50F1D1_TypeDefinitionIndex = 7300;

template <typename T>
class E16D0C00AC50F1D1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::B7AF30A430F47436*>** StaticGet_A7BA0DF89B952F79()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::B7AF30A430F47436*>**)Il2CppClass::FromTypeDefinitionIndex(E16D0C00AC50F1D1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::B7AF30A430F47436*, ::System::Collections::Generic::List_1<T>*>* EA6180A3283C5D58; // 0x0
};

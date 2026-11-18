#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLLAEGMBGNN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class IFCLNEICFHK_2;
template <typename T> class LLCNJHHGNMH_1;

inline static constexpr unsigned int IFCLNEICFHK_2_TypeDefinitionIndex = 90086;

template <typename T1, typename T2>
class IFCLNEICFHK_2 : public ::System::Object
{
public:
	static ::IFCLNEICFHK_2<T1, T2>** StaticGet_GKKEJJFFMOO()
	{
		return (::IFCLNEICFHK_2<T1, T2>**)Il2CppClass::FromTypeDefinitionIndex(IFCLNEICFHK_2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::LLCNJHHGNMH_1<T2>*>* CMAPBCCAPJG; // 0x0
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::NLLAEGMBGNN, ::System::Boolean>>* JIJNIDGCPCA; // 0x0
};

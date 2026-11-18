#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int PADEHMNLJBL_BPFJLKLGGCP_1_TypeDefinitionIndex = 86758;

template <typename T>
class PADEHMNLJBL_BPFJLKLGGCP_1 : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<T>*>** StaticGet_OIBLIPIJIBA()
	{
		return (::Foundation::ObjectPool_1<::System::Collections::Generic::List_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(PADEHMNLJBL_BPFJLKLGGCP_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};

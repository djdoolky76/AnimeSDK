#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

inline static constexpr unsigned int KOAHCLINEGM_1_TypeDefinitionIndex = 93875;

template <typename T>
class KOAHCLINEGM_1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<T>** StaticGet_BKBFFBFGOID()
	{
		return (::System::Collections::Generic::Stack_1<T>**)Il2CppClass::FromTypeDefinitionIndex(KOAHCLINEGM_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 DHGMIEKAMPH = 0x80; // 0x0
};

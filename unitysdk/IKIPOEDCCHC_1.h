#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

inline static constexpr unsigned int IKIPOEDCCHC_1_TypeDefinitionIndex = 28964;

template <typename T>
class IKIPOEDCCHC_1 : public ::System::Object
{
public:
	static T* StaticGet_PMKINFHDLFD()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(IKIPOEDCCHC_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};

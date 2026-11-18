#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

inline static constexpr unsigned int GPHADFIMNJA_1_TypeDefinitionIndex = 42139;

template <typename T>
class GPHADFIMNJA_1 : public ::System::Object
{
public:
	static T* StaticGet_PMKINFHDLFD()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(GPHADFIMNJA_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FIBEDKPELJO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED45880)

inline static constexpr unsigned int FIBEDKPELJO_TypeDefinitionIndex = 94848;

class FIBEDKPELJO : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_JDOEACGOOFO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FIBEDKPELJO_TypeDefinitionIndex)->GetStaticField(0x13F80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIBEDKPELJO__CCTOR_OFFSET))();
	}
};

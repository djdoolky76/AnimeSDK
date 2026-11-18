#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MCDFFEGNCFH_ILOAIKJCGPM_OFFSET UNITYSDK_OFFSET(0xD444B00)
#define MCDFFEGNCFH__CCTOR_OFFSET UNITYSDK_OFFSET(0xD444AF0)

inline static constexpr unsigned int MCDFFEGNCFH_TypeDefinitionIndex = 64242;

class MCDFFEGNCFH : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_FMHEACJGIDO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MCDFFEGNCFH_TypeDefinitionIndex)->GetStaticField(0xAD90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCDFFEGNCFH__CCTOR_OFFSET))();
	}

	static ::System::Int32 ILOAIKJCGPM()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MCDFFEGNCFH_ILOAIKJCGPM_OFFSET))();
	}
};

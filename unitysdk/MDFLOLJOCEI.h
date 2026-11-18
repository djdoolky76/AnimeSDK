#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDFLOLJOCEI__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D53B20)

inline static constexpr unsigned int MDFLOLJOCEI_TypeDefinitionIndex = 85086;

class MDFLOLJOCEI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EGCOJHAJHBN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MDFLOLJOCEI_TypeDefinitionIndex)->GetStaticField(0x46A40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDFLOLJOCEI__CCTOR_OFFSET))();
	}
};

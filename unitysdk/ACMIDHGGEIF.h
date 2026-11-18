#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACMIDHGGEIF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B8E350)

inline static constexpr unsigned int ACMIDHGGEIF_TypeDefinitionIndex = 85344;

class ACMIDHGGEIF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FHDPCMEDDEA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ACMIDHGGEIF_TypeDefinitionIndex)->GetStaticField(0x3FF20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACMIDHGGEIF__CCTOR_OFFSET))();
	}
};

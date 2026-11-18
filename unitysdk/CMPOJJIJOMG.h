#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CMPOJJIJOMG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1457CC90)

inline static constexpr unsigned int CMPOJJIJOMG_TypeDefinitionIndex = 86319;

class CMPOJJIJOMG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MHMKBPKHJKB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CMPOJJIJOMG_TypeDefinitionIndex)->GetStaticField(0x50160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMPOJJIJOMG__CCTOR_OFFSET))();
	}
};

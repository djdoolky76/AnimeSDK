#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CEMJHMKBBHM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E32CA0)

inline static constexpr unsigned int CEMJHMKBBHM_TypeDefinitionIndex = 91647;

class CEMJHMKBBHM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KBNKABEAADE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CEMJHMKBBHM_TypeDefinitionIndex)->GetStaticField(0x4CCA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEMJHMKBBHM__CCTOR_OFFSET))();
	}
};

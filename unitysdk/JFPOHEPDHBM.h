#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFPOHEPDHBM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15262570)

inline static constexpr unsigned int JFPOHEPDHBM_TypeDefinitionIndex = 73612;

class JFPOHEPDHBM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MELIFAPJFDB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JFPOHEPDHBM_TypeDefinitionIndex)->GetStaticField(0x4E600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFPOHEPDHBM__CCTOR_OFFSET))();
	}
};

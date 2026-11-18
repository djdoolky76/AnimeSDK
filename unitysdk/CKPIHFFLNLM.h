#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CKPIHFFLNLM__CCTOR_OFFSET UNITYSDK_OFFSET(0x145D13E0)

inline static constexpr unsigned int CKPIHFFLNLM_TypeDefinitionIndex = 89081;

class CKPIHFFLNLM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DBOODBGLBJK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CKPIHFFLNLM_TypeDefinitionIndex)->GetStaticField(0x403B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPIHFFLNLM__CCTOR_OFFSET))();
	}
};

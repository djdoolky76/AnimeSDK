#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GJMLNICKJHN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CCA340)

inline static constexpr unsigned int GJMLNICKJHN_TypeDefinitionIndex = 65074;

class GJMLNICKJHN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PLMIPAEPMIJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GJMLNICKJHN_TypeDefinitionIndex)->GetStaticField(0x378D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJMLNICKJHN__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COCJAOKNEGA__CCTOR_OFFSET UNITYSDK_OFFSET(0x145DA360)

inline static constexpr unsigned int COCJAOKNEGA_TypeDefinitionIndex = 75630;

class COCJAOKNEGA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EJDBBDBOOHG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(COCJAOKNEGA_TypeDefinitionIndex)->GetStaticField(0x403E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COCJAOKNEGA__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OMEGJHOEBAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A0000)

inline static constexpr unsigned int OMEGJHOEBAL_TypeDefinitionIndex = 47321;

class OMEGJHOEBAL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KGKLIMBNLMN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OMEGJHOEBAL_TypeDefinitionIndex)->GetStaticField(0x3CE70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMEGJHOEBAL__CCTOR_OFFSET))();
	}
};

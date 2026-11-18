#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLIEEBBNIIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F59210)

inline static constexpr unsigned int MLIEEBBNIIP_TypeDefinitionIndex = 69547;

class MLIEEBBNIIP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JANGLOEPOIC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MLIEEBBNIIP_TypeDefinitionIndex)->GetStaticField(0x3E820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLIEEBBNIIP__CCTOR_OFFSET))();
	}
};

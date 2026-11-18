#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PJIHOEPAPIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D62B730)

inline static constexpr unsigned int PJIHOEPAPIN_TypeDefinitionIndex = 39999;

class PJIHOEPAPIN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OLBLEGPBLAJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PJIHOEPAPIN_TypeDefinitionIndex)->GetStaticField(0x4B280);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJIHOEPAPIN__CCTOR_OFFSET))();
	}
};

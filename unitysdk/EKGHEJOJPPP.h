#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EKGHEJOJPPP__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F3C3F0)

inline static constexpr unsigned int EKGHEJOJPPP_TypeDefinitionIndex = 63119;

class EKGHEJOJPPP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EMCPIJEBGDO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EKGHEJOJPPP_TypeDefinitionIndex)->GetStaticField(0x3DA80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKGHEJOJPPP__CCTOR_OFFSET))();
	}
};

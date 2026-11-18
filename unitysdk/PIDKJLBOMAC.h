#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIDKJLBOMAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B6BF70)

inline static constexpr unsigned int PIDKJLBOMAC_TypeDefinitionIndex = 84274;

class PIDKJLBOMAC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LOLNIMBJJFI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PIDKJLBOMAC_TypeDefinitionIndex)->GetStaticField(0x510C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIDKJLBOMAC__CCTOR_OFFSET))();
	}
};

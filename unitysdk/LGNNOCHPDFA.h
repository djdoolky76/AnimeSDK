#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LGNNOCHPDFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3104B0)

inline static constexpr unsigned int LGNNOCHPDFA_TypeDefinitionIndex = 76777;

class LGNNOCHPDFA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EIDKNMDLJBE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LGNNOCHPDFA_TypeDefinitionIndex)->GetStaticField(0x4A1E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGNNOCHPDFA__CCTOR_OFFSET))();
	}
};

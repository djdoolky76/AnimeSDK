#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NHDEGMEFLJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B72FC0)

inline static constexpr unsigned int NHDEGMEFLJM_TypeDefinitionIndex = 86823;

class NHDEGMEFLJM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EPPIALEAJOI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NHDEGMEFLJM_TypeDefinitionIndex)->GetStaticField(0x3C8F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHDEGMEFLJM__CCTOR_OFFSET))();
	}
};

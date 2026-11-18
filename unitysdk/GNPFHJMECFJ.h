#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GNPFHJMECFJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x149159A0)

inline static constexpr unsigned int GNPFHJMECFJ_TypeDefinitionIndex = 78030;

class GNPFHJMECFJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EIMOHPABMLM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GNPFHJMECFJ_TypeDefinitionIndex)->GetStaticField(0x441A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNPFHJMECFJ__CCTOR_OFFSET))();
	}
};

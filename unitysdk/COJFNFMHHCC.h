#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COJFNFMHHCC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A1FC20)

inline static constexpr unsigned int COJFNFMHHCC_TypeDefinitionIndex = 67992;

class COJFNFMHHCC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JIDAAEOODAE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(COJFNFMHHCC_TypeDefinitionIndex)->GetStaticField(0x4B670);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COJFNFMHHCC__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PEOMCIPDBFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FA51B0)

inline static constexpr unsigned int PEOMCIPDBFD_TypeDefinitionIndex = 46910;

class PEOMCIPDBFD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LMBADJHOCJK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PEOMCIPDBFD_TypeDefinitionIndex)->GetStaticField(0x4DE60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEOMCIPDBFD__CCTOR_OFFSET))();
	}
};

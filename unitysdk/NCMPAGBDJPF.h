#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NCMPAGBDJPF__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FDE430)

inline static constexpr unsigned int NCMPAGBDJPF_TypeDefinitionIndex = 78234;

class NCMPAGBDJPF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NAOJOFJLDND()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NCMPAGBDJPF_TypeDefinitionIndex)->GetStaticField(0x4FC10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCMPAGBDJPF__CCTOR_OFFSET))();
	}
};

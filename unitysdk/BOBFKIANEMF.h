#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BOBFKIANEMF__CCTOR_OFFSET UNITYSDK_OFFSET(0x14260570)

inline static constexpr unsigned int BOBFKIANEMF_TypeDefinitionIndex = 65847;

class BOBFKIANEMF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ICCGCIMHNKE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BOBFKIANEMF_TypeDefinitionIndex)->GetStaticField(0x47BC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOBFKIANEMF__CCTOR_OFFSET))();
	}
};

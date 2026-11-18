#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PGPKKCNMMCP__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B9D300)

inline static constexpr unsigned int PGPKKCNMMCP_TypeDefinitionIndex = 61195;

class PGPKKCNMMCP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KHOKCJGGNAG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PGPKKCNMMCP_TypeDefinitionIndex)->GetStaticField(0x3FBB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGPKKCNMMCP__CCTOR_OFFSET))();
	}
};

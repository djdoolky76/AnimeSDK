#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMPJKFJNEON_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0xE76A380)
#define NMPJKFJNEON__CCTOR_OFFSET UNITYSDK_OFFSET(0xE76A370)
#define NMPJKFJNEON__CTOR_OFFSET UNITYSDK_OFFSET(0xE76A360)

inline static constexpr unsigned int NMPJKFJNEON_TypeDefinitionIndex = 88197;

class NMPJKFJNEON : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_GEJDJLNLFGI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NMPJKFJNEON_TypeDefinitionIndex)->GetStaticField(0xEA80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPJKFJNEON__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMPJKFJNEON__CCTOR_OFFSET))();
	}

	static ::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMPJKFJNEON_NAMKJOJBAOA_OFFSET))();
	}
};

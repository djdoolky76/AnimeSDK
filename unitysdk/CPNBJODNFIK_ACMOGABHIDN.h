#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NAJMEIJPGKA;

#define CPNBJODNFIK_ACMOGABHIDN_NFEJOOBKNHI_OFFSET UNITYSDK_OFFSET(0x193EE9F0)
#define CPNBJODNFIK_ACMOGABHIDN__CTOR_OFFSET UNITYSDK_OFFSET(0x193EE9E0)

inline static constexpr unsigned int CPNBJODNFIK_ACMOGABHIDN_TypeDefinitionIndex = 49700;

class CPNBJODNFIK_ACMOGABHIDN : public ::System::Object
{
public:
	::System::Boolean MALKFKODEHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_ACMOGABHIDN__CTOR_OFFSET))(this);
	}

	::System::Boolean NFEJOOBKNHI(::NAJMEIJPGKA* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::NAJMEIJPGKA*))((::PBYTE)hIl2Cpp + CPNBJODNFIK_ACMOGABHIDN_NFEJOOBKNHI_OFFSET))(this, HAAEBCOBKFF);
	}
};

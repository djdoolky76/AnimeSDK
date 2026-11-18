#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFNGDFPMBLI;
namespace System { template <typename T> class Action_1; }

#define GFNGDFPMBLI_PCPBHJICOKA_IBAAFBNPAFE_OFFSET UNITYSDK_OFFSET(0x179E7FA0)
#define GFNGDFPMBLI_PCPBHJICOKA_NLLNLFKOMGP_OFFSET UNITYSDK_OFFSET(0x179E81E0)
#define GFNGDFPMBLI_PCPBHJICOKA_OPDAPBOMLEK_OFFSET UNITYSDK_OFFSET(0x179E80B0)
#define GFNGDFPMBLI_PCPBHJICOKA__CTOR_OFFSET UNITYSDK_OFFSET(0x179E7F90)

inline static constexpr unsigned int GFNGDFPMBLI_PCPBHJICOKA_TypeDefinitionIndex = 51508;

class GFNGDFPMBLI_PCPBHJICOKA : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* FFMGICPLKFB; // 0x10
	::GFNGDFPMBLI* KLHPEBKNIFB; // 0x18
	::System::Int32 PNPADCLNBJN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNGDFPMBLI_PCPBHJICOKA__CTOR_OFFSET))(this);
	}

	::System::Void IBAAFBNPAFE(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFNGDFPMBLI_PCPBHJICOKA_IBAAFBNPAFE_OFFSET))(this, EBFCACIEKBC);
	}

	::System::Void OPDAPBOMLEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNGDFPMBLI_PCPBHJICOKA_OPDAPBOMLEK_OFFSET))(this);
	}

	::System::Void NLLNLFKOMGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNGDFPMBLI_PCPBHJICOKA_NLLNLFKOMGP_OFFSET))(this);
	}
};

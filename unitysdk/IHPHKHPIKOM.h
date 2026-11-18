#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPFNGDNNODB;
class LJGLPJJKEBL;
namespace System { class Action; }

#define IHPHKHPIKOM_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x16A9D260)
#define IHPHKHPIKOM_EDOOCAKJBCP_OFFSET UNITYSDK_OFFSET(0x16A9D830)
#define IHPHKHPIKOM_LOAJCCKEHMD_OFFSET UNITYSDK_OFFSET(0x16A9D610)
#define IHPHKHPIKOM__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9D770)

inline static constexpr unsigned int IHPHKHPIKOM_TypeDefinitionIndex = 92494;

class IHPHKHPIKOM : public ::System::Object
{
public:
	::LJGLPJJKEBL* FEHFFBKFCAK; // 0x10
	::System::Boolean NBDIFEMOJOE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPHKHPIKOM__CTOR_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHPHKHPIKOM_DKDJDEJHABH_OFFSET))(this, PABLEDCGDGM);
	}

	::LJGLPJJKEBL* EDOOCAKJBCP()
	{
		return ((::LJGLPJJKEBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPHKHPIKOM_EDOOCAKJBCP_OFFSET))(this);
	}

	::System::Void LOAJCCKEHMD(::IPFNGDNNODB* BDAJIGIOAMM, ::LJGLPJJKEBL* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::IPFNGDNNODB*, ::LJGLPJJKEBL*))((::PBYTE)hIl2Cpp + IHPHKHPIKOM_LOAJCCKEHMD_OFFSET))(this, BDAJIGIOAMM, AAIJGGIEOGK);
	}
};

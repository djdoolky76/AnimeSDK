#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class INBCNFOEDGH;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OIPAFACEMMK_MLDMKJDHGNJ_IAAOOPJHFIN_OFFSET UNITYSDK_OFFSET(0x18447AF0)
#define OIPAFACEMMK_MLDMKJDHGNJ_NCJDFOJEJOA_OFFSET UNITYSDK_OFFSET(0x18447A80)
#define OIPAFACEMMK_MLDMKJDHGNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18447A70)

inline static constexpr unsigned int OIPAFACEMMK_MLDMKJDHGNJ_TypeDefinitionIndex = 40834;

class OIPAFACEMMK_MLDMKJDHGNJ : public ::System::Object
{
public:
	::System::Action_1<::INBCNFOEDGH*>* EMAMDEIDFMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_MLDMKJDHGNJ__CTOR_OFFSET))(this);
	}

	::System::Void NCJDFOJEJOA(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_MLDMKJDHGNJ_NCJDFOJEJOA_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void IAAOOPJHFIN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_MLDMKJDHGNJ_IAAOOPJHFIN_OFFSET))(this, GLAOEHCGCFO);
	}
};

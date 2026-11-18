#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OIPAFACEMMK_LKLHILDFBDI_LDJEKELMBIO_OFFSET UNITYSDK_OFFSET(0x16F7FE80)
#define OIPAFACEMMK_LKLHILDFBDI_PBIJGIJDNFH_OFFSET UNITYSDK_OFFSET(0x16F7FD90)
#define OIPAFACEMMK_LKLHILDFBDI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7FD80)

inline static constexpr unsigned int OIPAFACEMMK_LKLHILDFBDI_TypeDefinitionIndex = 40826;

class OIPAFACEMMK_LKLHILDFBDI : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EMAMDEIDFMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_LKLHILDFBDI__CTOR_OFFSET))(this);
	}

	::System::Void PBIJGIJDNFH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_LKLHILDFBDI_PBIJGIJDNFH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void LDJEKELMBIO(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_LKLHILDFBDI_LDJEKELMBIO_OFFSET))(this, JMFEPDAHBED);
	}
};

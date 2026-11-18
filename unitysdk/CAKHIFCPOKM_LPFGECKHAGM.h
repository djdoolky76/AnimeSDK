#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAKHIFCPOKM_LPFGECKHAGM_NKPDLLELDEH_OFFSET UNITYSDK_OFFSET(0x18DBE5F0)
#define CAKHIFCPOKM_LPFGECKHAGM_OHFNJIIHNDN_OFFSET UNITYSDK_OFFSET(0x18DBE8F0)
#define CAKHIFCPOKM_LPFGECKHAGM__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBE5E0)

inline static constexpr unsigned int CAKHIFCPOKM_LPFGECKHAGM_TypeDefinitionIndex = 79972;

class CAKHIFCPOKM_LPFGECKHAGM : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_LPFGECKHAGM__CTOR_OFFSET))(this);
	}

	::System::Void NKPDLLELDEH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_LPFGECKHAGM_NKPDLLELDEH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void OHFNJIIHNDN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_LPFGECKHAGM_OHFNJIIHNDN_OFFSET))(this, PIIPCLCCOIG);
	}
};

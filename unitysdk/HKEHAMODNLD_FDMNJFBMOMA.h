#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HONMEMGPJBC;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HKEHAMODNLD_FDMNJFBMOMA_DBOLJOCPKAG_OFFSET UNITYSDK_OFFSET(0x140BE5B0)
#define HKEHAMODNLD_FDMNJFBMOMA_MDNDHLKJBEG_OFFSET UNITYSDK_OFFSET(0x140BE540)
#define HKEHAMODNLD_FDMNJFBMOMA__CTOR_OFFSET UNITYSDK_OFFSET(0x140BE530)

inline static constexpr unsigned int HKEHAMODNLD_FDMNJFBMOMA_TypeDefinitionIndex = 51866;

class HKEHAMODNLD_FDMNJFBMOMA : public ::System::Object
{
public:
	::System::Action_1<::HONMEMGPJBC*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEHAMODNLD_FDMNJFBMOMA__CTOR_OFFSET))(this);
	}

	::System::Void MDNDHLKJBEG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HKEHAMODNLD_FDMNJFBMOMA_MDNDHLKJBEG_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DBOLJOCPKAG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HKEHAMODNLD_FDMNJFBMOMA_DBOLJOCPKAG_OFFSET))(this, PIIPCLCCOIG);
	}
};

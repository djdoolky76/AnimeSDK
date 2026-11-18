#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define BHBNLOPOGJG_IMCNNNNNDFI_EMMOGOMPPBN_OFFSET UNITYSDK_OFFSET(0x169F2590)
#define BHBNLOPOGJG_IMCNNNNNDFI_NCJEMFJOCHD_OFFSET UNITYSDK_OFFSET(0x169F2580)
#define BHBNLOPOGJG_IMCNNNNNDFI__CTOR_OFFSET UNITYSDK_OFFSET(0x169F2570)

inline static constexpr unsigned int BHBNLOPOGJG_IMCNNNNNDFI_TypeDefinitionIndex = 60226;

class BHBNLOPOGJG_IMCNNNNNDFI : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_IMCNNNNNDFI__CTOR_OFFSET))(this);
	}

	::System::Void NCJEMFJOCHD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_IMCNNNNNDFI_NCJEMFJOCHD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EMMOGOMPPBN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHBNLOPOGJG_IMCNNNNNDFI_EMMOGOMPPBN_OFFSET))(this, PIIPCLCCOIG);
	}
};

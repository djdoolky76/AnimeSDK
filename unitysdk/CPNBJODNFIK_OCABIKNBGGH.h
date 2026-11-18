#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PNPFJKPGEHF;
namespace System { class Action; }

#define CPNBJODNFIK_OCABIKNBGGH_HHPGKLHBIBM_OFFSET UNITYSDK_OFFSET(0x1327FA40)
#define CPNBJODNFIK_OCABIKNBGGH_MBLAFLOGION_OFFSET UNITYSDK_OFFSET(0x1327FA50)
#define CPNBJODNFIK_OCABIKNBGGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1327FA30)

inline static constexpr unsigned int CPNBJODNFIK_OCABIKNBGGH_TypeDefinitionIndex = 49711;

class CPNBJODNFIK_OCABIKNBGGH : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_OCABIKNBGGH__CTOR_OFFSET))(this);
	}

	::System::Void HHPGKLHBIBM(::PNPFJKPGEHF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + CPNBJODNFIK_OCABIKNBGGH_HHPGKLHBIBM_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MBLAFLOGION(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPNBJODNFIK_OCABIKNBGGH_MBLAFLOGION_OFFSET))(this, PIIPCLCCOIG);
	}
};

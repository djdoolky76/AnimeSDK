#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define BPCBGBDIFDE_JPIDADIBAFE_GFJKMBCIILI_OFFSET UNITYSDK_OFFSET(0x128BC780)
#define BPCBGBDIFDE_JPIDADIBAFE_IHKIJBHJCLN_OFFSET UNITYSDK_OFFSET(0x128BBFE0)
#define BPCBGBDIFDE_JPIDADIBAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x128BBFD0)

inline static constexpr unsigned int BPCBGBDIFDE_JPIDADIBAFE_TypeDefinitionIndex = 78645;

class BPCBGBDIFDE_JPIDADIBAFE : public ::System::Object
{
public:
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::Boolean OPFKDJHLMGM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JPIDADIBAFE__CTOR_OFFSET))(this);
	}

	::System::Void IHKIJBHJCLN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JPIDADIBAFE_IHKIJBHJCLN_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GFJKMBCIILI(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JPIDADIBAFE_GFJKMBCIILI_OFFSET))(this, NAPFALLANDL);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAFAMLHDLE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class GIGFDLPMNND;

#define FOCADJFODPK_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x14115530)
#define FOCADJFODPK_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x14115790)
#define FOCADJFODPK_DAPCBDMHKJA_OFFSET UNITYSDK_OFFSET(0x141155C0)
#define FOCADJFODPK_DIOOOLLLPPO_OFFSET UNITYSDK_OFFSET(0x14115740)
#define FOCADJFODPK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x141154D0)
#define FOCADJFODPK__CTOR_OFFSET UNITYSDK_OFFSET(0x141154C0)

inline static constexpr unsigned int FOCADJFODPK_TypeDefinitionIndex = 39665;

class FOCADJFODPK : public ::System::Object
{
public:
	::GIGFDLPMNND* NLNNFINONOI; // 0x10
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0x18
	::BMAFAMLHDLE MNGAGIIHNIJ; // 0x20
	::System::UInt32 BKLGNCBNEGM; // 0x24
	::UnityEngine::Vector3 KIKFCANBFGI; // 0x28
	::System::Single JDOGADFCAIC; // 0x34
	::System::Int32 GDCEOHBJPGO; // 0x38
	::UnityEngine::Vector3 JDDBEPJECKA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCADJFODPK__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCADJFODPK_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::FOCADJFODPK* BBPCBEEHALC()
	{
		return ((::FOCADJFODPK*(*)())((::PBYTE)hIl2Cpp + FOCADJFODPK_BBPCBEEHALC_OFFSET))();
	}

	static ::System::Void DAPCBDMHKJA(::FOCADJFODPK*& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::FOCADJFODPK*&))((::PBYTE)hIl2Cpp + FOCADJFODPK_DAPCBDMHKJA_OFFSET))(LJBPECKCCEA);
	}

	::System::Void DIOOOLLLPPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCADJFODPK_DIOOOLLLPPO_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCADJFODPK_BJANDJKKNCD_OFFSET))(this);
	}
};

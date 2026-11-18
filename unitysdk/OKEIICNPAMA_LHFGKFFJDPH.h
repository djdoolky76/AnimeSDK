#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAKLNMJEGOJ;
class OAEFGCLEHHO;
class OKEIICNPAMA;
namespace System { class Action; }

#define OKEIICNPAMA_LHFGKFFJDPH_GPKGGACFPKC_OFFSET UNITYSDK_OFFSET(0xFD8C970)
#define OKEIICNPAMA_LHFGKFFJDPH_PPFLLJKADHD_OFFSET UNITYSDK_OFFSET(0xFD8CB50)
#define OKEIICNPAMA_LHFGKFFJDPH__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8C960)

inline static constexpr unsigned int OKEIICNPAMA_LHFGKFFJDPH_TypeDefinitionIndex = 87987;

class OKEIICNPAMA_LHFGKFFJDPH : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::FAKLNMJEGOJ* ELBHPEPMGBP; // 0x18
	::System::Action* OLBAKFLBNIG; // 0x20
	::OKEIICNPAMA* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LHFGKFFJDPH__CTOR_OFFSET))(this);
	}

	::System::Void GPKGGACFPKC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LHFGKFFJDPH_GPKGGACFPKC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PPFLLJKADHD(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LHFGKFFJDPH_PPFLLJKADHD_OFFSET))(this, JBLGEGMELPE);
	}
};

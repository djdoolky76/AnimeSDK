#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJNANKCFML.h"
#include "unitysdk/System/Object.h"

class DPFMDEBJEMG;
class NBOPNEEINIB;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FDHOHGBCBHJ_FKKPDJHHJKO_OFFSET UNITYSDK_OFFSET(0x140EAB40)
#define FDHOHGBCBHJ_OINLMEJNOGH_OFFSET UNITYSDK_OFFSET(0x140EAE50)
#define FDHOHGBCBHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x140EAB10)

inline static constexpr unsigned int FDHOHGBCBHJ_TypeDefinitionIndex = 61235;

class FDHOHGBCBHJ : public ::System::Object
{
public:
	::System::Action* BIGLCDOGLGP; // 0x10
	::System::Action* EAPBGIJBMNB; // 0x18
	::System::String* DOEEOKEGPDO; // 0x20
	::Nap::NapECS::EcsEntity* DOIINLPFHEO; // 0x28
	::System::Action_1<::DPFMDEBJEMG*>* GKLGEBGNBFI; // 0x30
	::GGJNANKCFML OEJIOMPPHKC; // 0x38
	::System::Int32 DAHIAEFNBID; // 0x3C

	::System::Void _ctor(::System::Int32 OPCELBOCIDJ, ::Nap::NapECS::EcsEntity* PLCBINNKMAM, ::GGJNANKCFML OIHMEKKENJL, ::System::String* AHLGCADFGIF, ::System::Action* DINFPEDDMMP, ::System::Action* HNPEKKBECNN, ::System::Action_1<::DPFMDEBJEMG*>* EMJENCOGBNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::GGJNANKCFML, ::System::String*, ::System::Action*, ::System::Action*, ::System::Action_1<::DPFMDEBJEMG*>*))((::PBYTE)hIl2Cpp + FDHOHGBCBHJ__CTOR_OFFSET))(this, OPCELBOCIDJ, PLCBINNKMAM, OIHMEKKENJL, AHLGCADFGIF, DINFPEDDMMP, HNPEKKBECNN, EMJENCOGBNN);
	}

	::NBOPNEEINIB* FKKPDJHHJKO()
	{
		return ((::NBOPNEEINIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHOHGBCBHJ_FKKPDJHHJKO_OFFSET))(this);
	}

	::System::Int32 OINLMEJNOGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHOHGBCBHJ_OINLMEJNOGH_OFFSET))(this);
	}
};

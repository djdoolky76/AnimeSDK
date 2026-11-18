#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

class KLFOBDFJFJE;
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class Action; }

#define KLFOBDFJFJE_FACGBCDGKKA_BJGGLBJFCNK_OFFSET UNITYSDK_OFFSET(0x129A2970)
#define KLFOBDFJFJE_FACGBCDGKKA_BMCELCBBFGH_OFFSET UNITYSDK_OFFSET(0x129A29A0)
#define KLFOBDFJFJE_FACGBCDGKKA_NJPMKMIFJJM_OFFSET UNITYSDK_OFFSET(0x129A3040)
#define KLFOBDFJFJE_FACGBCDGKKA_OKKPJAFMNGF_OFFSET UNITYSDK_OFFSET(0x129A29B0)
#define KLFOBDFJFJE_FACGBCDGKKA__CTOR_OFFSET UNITYSDK_OFFSET(0x129A2960)

inline static constexpr unsigned int KLFOBDFJFJE_FACGBCDGKKA_TypeDefinitionIndex = 58477;

class KLFOBDFJFJE_FACGBCDGKKA : public ::System::Object
{
public:
	::KLFOBDFJFJE* KLHPEBKNIFB; // 0x10
	::MoleMole::Config::ConfigHollowCameraShake* DFMKILICPFB; // 0x18
	::System::Action* IHLBALNBGKM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FACGBCDGKKA__CTOR_OFFSET))(this);
	}

	::System::Void BJGGLBJFCNK(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FACGBCDGKKA_BJGGLBJFCNK_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void BMCELCBBFGH(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FACGBCDGKKA_BMCELCBBFGH_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void OKKPJAFMNGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FACGBCDGKKA_OKKPJAFMNGF_OFFSET))(this);
	}

	::System::Void NJPMKMIFJJM(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_FACGBCDGKKA_NJPMKMIFJJM_OFFSET))(this, DMIAICJPPDL);
	}
};

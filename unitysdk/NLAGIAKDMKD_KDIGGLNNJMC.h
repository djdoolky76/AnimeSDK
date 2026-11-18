#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAudioTrack; }
namespace MoleMole { class ConfigEffectSound; }
namespace MoleMole { class ConfigEnvironmentSound; }
namespace MoleMole { class ConfigLevelSound; }
namespace MoleMole { class ConfigLightbarPreset; }
namespace MoleMole { class ConfigRichtapSound; }
namespace MoleMole { class ConfigVideoAudioMapping; }
namespace MoleMole { class ConfigVoiceToEvent; }
namespace System { class Action; }

#define NLAGIAKDMKD_KDIGGLNNJMC_BPEEJEHIOAD_OFFSET UNITYSDK_OFFSET(0x10D80F60)
#define NLAGIAKDMKD_KDIGGLNNJMC_DAFFDGAMKLH_OFFSET UNITYSDK_OFFSET(0x10D811E0)
#define NLAGIAKDMKD_KDIGGLNNJMC_DAMAMFACPIH_OFFSET UNITYSDK_OFFSET(0x10D81150)
#define NLAGIAKDMKD_KDIGGLNNJMC_ECMODPFBDEA_OFFSET UNITYSDK_OFFSET(0x10D81120)
#define NLAGIAKDMKD_KDIGGLNNJMC_FKEJFEDKCME_OFFSET UNITYSDK_OFFSET(0x10D81240)
#define NLAGIAKDMKD_KDIGGLNNJMC_GAMIGLHFJPP_OFFSET UNITYSDK_OFFSET(0x10D811B0)
#define NLAGIAKDMKD_KDIGGLNNJMC_KHGKDFDNPCB_OFFSET UNITYSDK_OFFSET(0x10D81100)
#define NLAGIAKDMKD_KDIGGLNNJMC_LOCHDNLFEKE_OFFSET UNITYSDK_OFFSET(0x10D81180)
#define NLAGIAKDMKD_KDIGGLNNJMC_OHNICGAKCDA_OFFSET UNITYSDK_OFFSET(0x10D81210)
#define NLAGIAKDMKD_KDIGGLNNJMC__CTOR_OFFSET UNITYSDK_OFFSET(0x10D80F50)

inline static constexpr unsigned int NLAGIAKDMKD_KDIGGLNNJMC_TypeDefinitionIndex = 78359;

class NLAGIAKDMKD_KDIGGLNNJMC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 ILBEGDEJMCP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC__CTOR_OFFSET))(this);
	}

	::System::Void BPEEJEHIOAD(::MoleMole::ConfigVideoAudioMapping* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigVideoAudioMapping*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_BPEEJEHIOAD_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void ECMODPFBDEA(::MoleMole::ConfigLightbarPreset* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLightbarPreset*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_ECMODPFBDEA_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void DAMAMFACPIH(::MoleMole::ConfigAudioTrack* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAudioTrack*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_DAMAMFACPIH_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void LOCHDNLFEKE(::MoleMole::ConfigLevelSound* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLevelSound*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_LOCHDNLFEKE_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void GAMIGLHFJPP(::MoleMole::ConfigEffectSound* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEffectSound*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_GAMIGLHFJPP_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void KHGKDFDNPCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_KHGKDFDNPCB_OFFSET))(this);
	}

	::System::Void DAFFDGAMKLH(::MoleMole::ConfigVoiceToEvent* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigVoiceToEvent*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_DAFFDGAMKLH_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void OHNICGAKCDA(::MoleMole::ConfigRichtapSound* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapSound*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_OHNICGAKCDA_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void FKEJFEDKCME(::MoleMole::ConfigEnvironmentSound* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEnvironmentSound*))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_KDIGGLNNJMC_FKEJFEDKCME_OFFSET))(this, DFMKILICPFB);
	}
};

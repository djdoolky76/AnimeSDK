#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"
class DICKPDFNEHP;
class JBACCAGFHON;
class LAFPIMJLEGL;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DICKPDFNEHP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xEBEA790)
#define DICKPDFNEHP_CNBBDJBCKEI_OFFSET UNITYSDK_OFFSET(0xEBEAE80)
#define DICKPDFNEHP_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEA8C0)
#define DICKPDFNEHP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xEBEA960)
#define DICKPDFNEHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBEABC0)
#define DICKPDFNEHP_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xEBEAC40)
#define DICKPDFNEHP_MMFMHFDHHKK_OFFSET UNITYSDK_OFFSET(0xEBEAD20)
#define DICKPDFNEHP_OCGKMGIBKKF_OFFSET UNITYSDK_OFFSET(0xEBEAAB0)

inline static constexpr unsigned int DICKPDFNEHP_TypeDefinitionIndex = 78095;

	class DICKPDFNEHP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTriggerEventType, ::LAFPIMJLEGL*>* CKBPJMOBAHO; // 0x10
		::JBACCAGFHON* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + DICKPDFNEHP_CTOR_OFFSET))(this, a1);
		}

		static ::DICKPDFNEHP* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::DICKPDFNEHP*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + DICKPDFNEHP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICKPDFNEHP_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICKPDFNEHP_DISPOSE_OFFSET))(this);
		}

		::System::Void OCGKMGIBKKF(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + DICKPDFNEHP_OCGKMGIBKKF_OFFSET))(this, a1);
		}

		::System::Void ILEMLGEGLCC(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + DICKPDFNEHP_ILEMLGEGLCC_OFFSET))(this, a1, a2);
		}

		::LAFPIMJLEGL* MMFMHFDHHKK(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
		{
			return ((::LAFPIMJLEGL*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + DICKPDFNEHP_MMFMHFDHHKK_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::CakeRaceTriggerEventType CNBBDJBCKEI(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1)
		{
			return ((::RPG::GameCore::CakeRaceTriggerEventType(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType))((::PBYTE)hIl2Cpp + DICKPDFNEHP_CNBBDJBCKEI_OFFSET))(a1);
		}

	};

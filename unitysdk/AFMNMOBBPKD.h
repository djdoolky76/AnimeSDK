#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client::Prop { class RogueDLCCompass; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class RogueDLC1Dot3CompassProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define AFMNMOBBPKD_CTOR_OFFSET UNITYSDK_OFFSET(0x18DBFD30)
#define AFMNMOBBPKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DBFD40)
#define AFMNMOBBPKD_FGBPIAJOAFL_OFFSET UNITYSDK_OFFSET(0x18DC0260)
#define AFMNMOBBPKD_FHGJAPEPGPM_OFFSET UNITYSDK_OFFSET(0x18DC0090)
#define AFMNMOBBPKD_KJJNEMHCBMI_OFFSET UNITYSDK_OFFSET(0x18DC01B0)
#define AFMNMOBBPKD_MDHDGHAHJOF_OFFSET UNITYSDK_OFFSET(0x18DC0200)
#define AFMNMOBBPKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DBFEF0)
#define AFMNMOBBPKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18DC0040)
#define AFMNMOBBPKD_TICK_OFFSET UNITYSDK_OFFSET(0x18DBFE90)

inline static constexpr unsigned int AFMNMOBBPKD_TypeDefinitionIndex = 59709;

	class AFMNMOBBPKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RogueDLC1Dot3CompassProcess* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::CharacterModelComponent* EJCMBCFJGOE; // 0x28
		::RPG::Client::Prop::RogueDLCCompass* NKECLIPJLNP; // 0x30
		::System::Boolean DPMCNLIBHLG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3CompassProcess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3CompassProcess*))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void FHGJAPEPGPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_FHGJAPEPGPM_OFFSET))(this);
		}

		::System::Void KJJNEMHCBMI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_KJJNEMHCBMI_OFFSET))(this, a1);
		}

		::System::Void MDHDGHAHJOF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_MDHDGHAHJOF_OFFSET))(this, a1);
		}

		::System::Void FGBPIAJOAFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFMNMOBBPKD_FGBPIAJOAFL_OFFSET))(this, a1);
		}

	};

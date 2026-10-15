#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
class FKEFHACIBKJ;
class JBACCAGFHON;
namespace System { class Object; }

#define FKEFHACIBKJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x157EE840)
#define FKEFHACIBKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157EE9F0)
#define FKEFHACIBKJ_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x157EE970)
#define FKEFHACIBKJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x157EE8E0)

inline static constexpr unsigned int FKEFHACIBKJ_TypeDefinitionIndex = 78170;

	class FKEFHACIBKJ : public ::AJHHFMBOCEN
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x20
		::System::Object* EPJJGFNHKEM; // 0x28
		::RPG::Client::LittleGame::CakeRace::CakeRaceEventType GPIKLKPPMDG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFHACIBKJ_CTOR_OFFSET))(this);
		}

		static ::FKEFHACIBKJ* BPLPBPMEODA(::JBACCAGFHON* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a2, ::System::Object* a3)
		{
			return ((::FKEFHACIBKJ*(*)(::JBACCAGFHON*, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + FKEFHACIBKJ_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFHACIBKJ_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFHACIBKJ_ONCLEAR_OFFSET))(this);
		}

	};

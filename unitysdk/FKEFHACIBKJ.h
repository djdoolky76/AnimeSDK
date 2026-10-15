#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
class FKEFHACIBKJ;
class JBACCAGFHON;
namespace System { class Object; }

#define FKEFHACIBKJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x157E2BF0)
#define FKEFHACIBKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157E2DA0)
#define FKEFHACIBKJ_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x157E2D20)
#define FKEFHACIBKJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x157E2C90)

inline static constexpr unsigned int FKEFHACIBKJ_TypeDefinitionIndex = 78169;

	class FKEFHACIBKJ : public ::AJHHFMBOCEN
	{
	public:
		::System::Object* EPJJGFNHKEM; // 0x20
		::JBACCAGFHON* PDENFEFCAGN; // 0x28
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

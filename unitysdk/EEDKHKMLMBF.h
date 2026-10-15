#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EEDKHKMLMBF;
class ENLBMCKHJOG;
class GKLHLDECJOL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define EEDKHKMLMBF_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2A690)
#define EEDKHKMLMBF_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x13A2A640)
#define EEDKHKMLMBF_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x13A2A5F0)
#define EEDKHKMLMBF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13A2A530)

	class EEDKHKMLMBF : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* DOCLLEDKMNK; // 0x18
		::GKLHLDECJOL* MCDGBGOBFJN; // 0x20
		::ENLBMCKHJOG* MGOHJJNKGNJ; // 0x28
		::RPG::GameCore::GameEntity* CFOAICLAMHO; // 0x30
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x38
		::RPG::GameCore::FixPoint EMOHBJJJBDP; // 0x40
		::RPG::GameCore::FixPoint DHCDELLIONN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDKHKMLMBF_CTOR_OFFSET))(this);
		}

		::EEDKHKMLMBF* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::ENLBMCKHJOG* a4, ::GKLHLDECJOL* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7)
		{
			return ((::EEDKHKMLMBF*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::ENLBMCKHJOG*, ::GKLHLDECJOL*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EEDKHKMLMBF_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDKHKMLMBF_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDKHKMLMBF_GETEVENTTYPE_OFFSET))(this);
		}

	};

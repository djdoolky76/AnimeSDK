#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/GuardingState.h"
#include "unitysdk/RPG/MVector3.h"
class EFHJJIGLPDL;
class FOOIINCDBFA;
class GELIALJDFBL;
class HJCOLAEIJFM;
namespace RPG::GameCore { class AdvNPCGuarding; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define PDKBDFEOKNE_BIBHPMDDEBM_OFFSET UNITYSDK_OFFSET(0xC0129C0)
#define PDKBDFEOKNE_CTOR_OFFSET UNITYSDK_OFFSET(0xC011F40)
#define PDKBDFEOKNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0124B0)
#define PDKBDFEOKNE_GPJKFFNDIHH_OFFSET UNITYSDK_OFFSET(0xC013330)
#define PDKBDFEOKNE_HOBMPEMEAMA_OFFSET UNITYSDK_OFFSET(0xC012AA0)
#define PDKBDFEOKNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC012610)
#define PDKBDFEOKNE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0133F0)
#define PDKBDFEOKNE_TICK_OFFSET UNITYSDK_OFFSET(0xC012EF0)

inline static constexpr unsigned int PDKBDFEOKNE_TypeDefinitionIndex = 52426;

	class PDKBDFEOKNE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TransformComponent* DPPIHOCPIFH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::AdvNPCGuarding* IGHAHBNLIJA; // 0x28
		::EFHJJIGLPDL* LKNDEOKIEAK; // 0x30
		::GELIALJDFBL* FKGNOLNADND; // 0x38
		::GELIALJDFBL* NALKHCPNHHK; // 0x40
		::GELIALJDFBL* BFADBJGMBAH; // 0x48
		::GELIALJDFBL* HLBNHHGIKFJ; // 0x50
		::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x58
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x60
		::HJCOLAEIJFM* JABCHFIIFIC; // 0x68
		::FOOIINCDBFA* EIJAMKAKADD; // 0x70
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x78
		::RPG::MVector3 EHAMDCAIFHD; // 0x80
		::RPG::GameCore::GuardingState KNFFMBEJCAN; // 0x8C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCGuarding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCGuarding*))((::PBYTE)hIl2Cpp + PDKBDFEOKNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBDFEOKNE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBDFEOKNE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDKBDFEOKNE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBDFEOKNE_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean GPJKFFNDIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBDFEOKNE_GPJKFFNDIHH_OFFSET))(this);
		}

		::System::Void HOBMPEMEAMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBDFEOKNE_HOBMPEMEAMA_OFFSET))(this);
		}

		::System::Void BIBHPMDDEBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBDFEOKNE_BIBHPMDDEBM_OFFSET))(this);
		}

	};

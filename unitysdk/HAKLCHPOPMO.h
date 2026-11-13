#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client::Prop { class MonoPushDownObject; }
namespace RPG::GameCore { class AdvPlayerPushDownProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define HAKLCHPOPMO_CTOR_OFFSET UNITYSDK_OFFSET(0x17DE5AB0)
#define HAKLCHPOPMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DE5C50)
#define HAKLCHPOPMO_KNACEGNPDCP_OFFSET UNITYSDK_OFFSET(0x17DE6780)
#define HAKLCHPOPMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DE5F80)
#define HAKLCHPOPMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17DE5E30)
#define HAKLCHPOPMO_TICK_OFFSET UNITYSDK_OFFSET(0x17DE6690)

inline static constexpr unsigned int HAKLCHPOPMO_TypeDefinitionIndex = 53577;

	class HAKLCHPOPMO : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Prop::MonoPushDownObject* FJNPGFOCEIK; // 0x18
		::KFELGAIGHAP* CFOKAIEGBNK; // 0x20
		::RPG::GameCore::TaskContext* DMNHJGOOGLI; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::KFELGAIGHAP* HGJBJGOLLCM; // 0x38
		::RPG::GameCore::AdvPlayerPushDownProp* OFKGLJOAMLD; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerPushDownProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerPushDownProp*))((::PBYTE)hIl2Cpp + HAKLCHPOPMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKLCHPOPMO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKLCHPOPMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKLCHPOPMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAKLCHPOPMO_TICK_OFFSET))(this, a1);
		}

		::System::Void KNACEGNPDCP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAKLCHPOPMO_KNACEGNPDCP_OFFSET))(this, a1);
		}

	};

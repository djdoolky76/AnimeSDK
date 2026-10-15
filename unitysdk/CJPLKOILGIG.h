#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GHMGGIHEHJE;
class MFIMCKDKDKG;
namespace RPG::Client { class RoadRashGameAbility_FireProjectileCast; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CJPLKOILGIG_CTOR_OFFSET UNITYSDK_OFFSET(0xD7516E0)
#define CJPLKOILGIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD751B70)
#define CJPLKOILGIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD751C00)
#define CJPLKOILGIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7516F0)
#define CJPLKOILGIG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD751BB0)
#define CJPLKOILGIG_TICK_OFFSET UNITYSDK_OFFSET(0xD751950)

inline static constexpr unsigned int CJPLKOILGIG_TypeDefinitionIndex = 58404;

	class CJPLKOILGIG : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::RoadRashGameAbility_FireProjectileCast* OFKGLJOAMLD; // 0x18
		::GHMGGIHEHJE* CFKHNPGEAJA; // 0x20
		::MFIMCKDKDKG* LPCDHEMDNEL; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_FireProjectileCast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_FireProjectileCast*))((::PBYTE)hIl2Cpp + CJPLKOILGIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPLKOILGIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJPLKOILGIG_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPLKOILGIG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPLKOILGIG_ONTASKRESET_OFFSET))(this);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPLKOILGIG_GETCONFIG_OFFSET))(this);
		}

	};

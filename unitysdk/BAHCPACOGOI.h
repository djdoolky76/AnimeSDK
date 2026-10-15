#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransitEnvProfile; }

#define BAHCPACOGOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE1A90)
#define BAHCPACOGOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BE1AA0)
#define BAHCPACOGOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BE1AE0)
#define BAHCPACOGOI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BE2490)
#define BAHCPACOGOI_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x15BE2540)
#define BAHCPACOGOI_TICK_OFFSET UNITYSDK_OFFSET(0x15BE24E0)

inline static constexpr unsigned int BAHCPACOGOI_TypeDefinitionIndex = 58767;

	class BAHCPACOGOI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TransitEnvProfile* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TransitEnvProfile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TransitEnvProfile*))((::PBYTE)hIl2Cpp + BAHCPACOGOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHCPACOGOI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHCPACOGOI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHCPACOGOI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAHCPACOGOI_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::EnviromentControlPriority PLNCKLJOJME()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHCPACOGOI_PLNCKLJOJME_OFFSET))(this);
		}

	};

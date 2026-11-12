#pragma once
#include "unitysdk/unitysdk.h"
class DMHFEDAIKME;
namespace RPG::Client { class ST_Parkour_UseSprint; }
namespace RPG::GameCore { class TaskContext; }

#define NDJBJFHCGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xC3D3E20)
#define NDJBJFHCGIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3D3E50)
#define NDJBJFHCGIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3D3EA0)
#define NDJBJFHCGIN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC3D4160)
#define NDJBJFHCGIN_TICK_OFFSET UNITYSDK_OFFSET(0xC3D40A0)

inline static constexpr unsigned int NDJBJFHCGIN_TypeDefinitionIndex = 53242;

	class NDJBJFHCGIN
	{
	public:
		::DMHFEDAIKME* PFECGMGNMEN; // 0x28
		::System::Single DKOFFPPGEFI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_UseSprint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_UseSprint*))((::PBYTE)hIl2Cpp + NDJBJFHCGIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJBJFHCGIN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJBJFHCGIN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJBJFHCGIN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDJBJFHCGIN_TICK_OFFSET))(this, a1);
		}

	};

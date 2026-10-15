#pragma once
#include "unitysdk/unitysdk.h"
class HPHLMCKOHHO;
class OMODLCNDEBI;
namespace RPG::GameCore { class AdvDistrictSetupTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define MFPDEOPCKPF_CMMJFAELBKE_OFFSET UNITYSDK_OFFSET(0xB911030)
#define MFPDEOPCKPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB911000)
#define MFPDEOPCKPF_NHCEPAGNDFA_OFFSET UNITYSDK_OFFSET(0xB911810)
#define MFPDEOPCKPF_NIEKILGMBNI_OFFSET UNITYSDK_OFFSET(0xB9116E0)
#define MFPDEOPCKPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB911930)

	class MFPDEOPCKPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDistrictSetupTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDistrictSetupTrigger*))((::PBYTE)hIl2Cpp + MFPDEOPCKPF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CMMJFAELBKE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPDEOPCKPF_CMMJFAELBKE_OFFSET))(this);
		}

		::HPHLMCKOHHO* NIEKILGMBNI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::HPHLMCKOHHO*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MFPDEOPCKPF_NIEKILGMBNI_OFFSET))(this, a1);
		}

		::OMODLCNDEBI* NHCEPAGNDFA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::OMODLCNDEBI*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MFPDEOPCKPF_NHCEPAGNDFA_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPDEOPCKPF_ONTASKBEGIN_OFFSET))(this);
		}

	};

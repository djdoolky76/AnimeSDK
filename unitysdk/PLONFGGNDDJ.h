#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EFHJJIGLPDL;
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceInactive; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define PLONFGGNDDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC30D190)
#define PLONFGGNDDJ_DHLKBINJOCP_OFFSET UNITYSDK_OFFSET(0xC30D530)
#define PLONFGGNDDJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC30D3C0)
#define PLONFGGNDDJ_DMHBIIDCADC_OFFSET UNITYSDK_OFFSET(0xC30DE10)
#define PLONFGGNDDJ_JPCNFNMIONH_OFFSET UNITYSDK_OFFSET(0xC30DBB0)
#define PLONFGGNDDJ_KFIOHKGDOBJ_OFFSET UNITYSDK_OFFSET(0xC30D970)
#define PLONFGGNDDJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC30DA90)
#define PLONFGGNDDJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC30DCB0)
#define PLONFGGNDDJ_TICK_OFFSET UNITYSDK_OFFSET(0xC30D630)

inline static constexpr unsigned int PLONFGGNDDJ_TypeDefinitionIndex = 52448;

	class PLONFGGNDDJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::NPCComponent* KDJMBIPEAFM; // 0x20
		::GELIALJDFBL* MOPJBEJPKBO; // 0x28
		::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* IGHAHBNLIJA; // 0x30
		::EFHJJIGLPDL* IIPADCNLMCJ; // 0x38
		::GELIALJDFBL* HFGKBOHJHGA; // 0x40
		::System::UInt32 PEEFHNHDBMF; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JPCNFNMIONH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_JPCNFNMIONH_OFFSET))(this);
		}

		::System::Void DHLKBINJOCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_DHLKBINJOCP_OFFSET))(this);
		}

		::System::Void KFIOHKGDOBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_KFIOHKGDOBJ_OFFSET))(this);
		}

		::System::Void DMHBIIDCADC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PLONFGGNDDJ_DMHBIIDCADC_OFFSET))(this, a1);
		}

	};

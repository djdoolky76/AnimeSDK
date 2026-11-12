#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EFHJJIGLPDL;
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceActive; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define JIOBJPKGNBD_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0xBA21740)
#define JIOBJPKGNBD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA206C0)
#define JIOBJPKGNBD_DHLKBINJOCP_OFFSET UNITYSDK_OFFSET(0xBA20B50)
#define JIOBJPKGNBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA20950)
#define JIOBJPKGNBD_DMHBIIDCADC_OFFSET UNITYSDK_OFFSET(0xBA20FD0)
#define JIOBJPKGNBD_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0xBA212E0)
#define JIOBJPKGNBD_JPCNFNMIONH_OFFSET UNITYSDK_OFFSET(0xBA21430)
#define JIOBJPKGNBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA211D0)
#define JIOBJPKGNBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA21530)
#define JIOBJPKGNBD_TICK_OFFSET UNITYSDK_OFFSET(0xBA20C50)

inline static constexpr unsigned int JIOBJPKGNBD_TypeDefinitionIndex = 53555;

	class JIOBJPKGNBD : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* BGNOANEKMII; // 0x18
		::GELIALJDFBL* IKPCDHOGLHG; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::GameCore::AdvNpcGuardAlertDeviceActive* IGHAHBNLIJA; // 0x30
		::EFHJJIGLPDL* IIPADCNLMCJ; // 0x38
		::GELIALJDFBL* DDMNDKKKHJN; // 0x40
		::RPG::GameCore::NPCComponent* KDJMBIPEAFM; // 0x48
		::System::UInt32 PEEFHNHDBMF; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive*))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_TICK_OFFSET))(this, a1);
		}

		::System::Void DMHBIIDCADC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_DMHBIIDCADC_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BEPBDGBNNBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_BEPBDGBNNBC_OFFSET))(this);
		}

		::System::Void EOIBMFKIIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_EOIBMFKIIHL_OFFSET))(this);
		}

		::System::Void JPCNFNMIONH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_JPCNFNMIONH_OFFSET))(this);
		}

		::System::Void DHLKBINJOCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOBJPKGNBD_DHLKBINJOCP_OFFSET))(this);
		}

	};

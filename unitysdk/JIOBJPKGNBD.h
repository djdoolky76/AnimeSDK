#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EFHJJIGLPDL;
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceActive; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define JIOBJPKGNBD_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0xB1F9B10)
#define JIOBJPKGNBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB1F8950)
#define JIOBJPKGNBD_DHLKBINJOCP_OFFSET UNITYSDK_OFFSET(0xB1F8DE0)
#define JIOBJPKGNBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1F8BE0)
#define JIOBJPKGNBD_DMHBIIDCADC_OFFSET UNITYSDK_OFFSET(0xB1F9360)
#define JIOBJPKGNBD_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0xB1F9670)
#define JIOBJPKGNBD_JPCNFNMIONH_OFFSET UNITYSDK_OFFSET(0xB1F9800)
#define JIOBJPKGNBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1F9560)
#define JIOBJPKGNBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1F9900)
#define JIOBJPKGNBD_TICK_OFFSET UNITYSDK_OFFSET(0xB1F8EE0)

inline static constexpr unsigned int JIOBJPKGNBD_TypeDefinitionIndex = 52449;

	class JIOBJPKGNBD : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* IKPCDHOGLHG; // 0x18
		::GELIALJDFBL* BGNOANEKMII; // 0x20
		::EFHJJIGLPDL* IIPADCNLMCJ; // 0x28
		::GELIALJDFBL* DDMNDKKKHJN; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::RPG::GameCore::NPCComponent* KDJMBIPEAFM; // 0x40
		::RPG::GameCore::AdvNpcGuardAlertDeviceActive* IGHAHBNLIJA; // 0x48
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

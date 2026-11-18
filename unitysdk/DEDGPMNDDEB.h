#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/CombineTriggerListenParam.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class JCNAPCNHCGH;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace MoleMole::Config { class ConfigTriggerControlTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEDGPMNDDEB_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x197440E0)
#define DEDGPMNDDEB_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x197440D0)
#define DEDGPMNDDEB_DMCCHOMHGPB_OFFSET UNITYSDK_OFFSET(0x19743840)
#define DEDGPMNDDEB_DNBPGBBDHHO_OFFSET UNITYSDK_OFFSET(0x197441C0)
#define DEDGPMNDDEB_EHAFMMNKOIP_OFFSET UNITYSDK_OFFSET(0x19744560)
#define DEDGPMNDDEB_FCOIDEFEALB_OFFSET UNITYSDK_OFFSET(0x19744150)
#define DEDGPMNDDEB_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x19744140)
#define DEDGPMNDDEB_IOLPEIJACOI_OFFSET UNITYSDK_OFFSET(0x19744160)
#define DEDGPMNDDEB_MIELMJIDGNA_OFFSET UNITYSDK_OFFSET(0x19743090)
#define DEDGPMNDDEB_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19742C30)
#define DEDGPMNDDEB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x19742B10)
#define DEDGPMNDDEB_PDPHGOMGOOO_OFFSET UNITYSDK_OFFSET(0x19744130)
#define DEDGPMNDDEB__CTOR_OFFSET UNITYSDK_OFFSET(0x19742F70)

inline static constexpr unsigned int DEDGPMNDDEB_TypeDefinitionIndex = 85047;

class DEDGPMNDDEB
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::JCNAPCNHCGH*>* GFDMIEBCJND; // 0x28
	::MoleMole::Config::ConfigTriggerControlTrait* _LEKDBLDNLOO_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoTriggerEventDispatcher*>* FHFACCFPKOC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGPMNDDEB__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_ONDISABLE_OFFSET))(this);
	}

	::System::Boolean MIELMJIDGNA(::Foundation::ViewObject::CombineTriggerListenParam MKHINEPJGPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::CombineTriggerListenParam))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_MIELMJIDGNA_OFFSET))(this, MKHINEPJGPP);
	}

	::System::Void DMCCHOMHGPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_DMCCHOMHGPB_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::MoleMole::Config::ConfigTriggerControlTrait* DBNEELHBBKB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_AMEGHCHMIOD_OFFSET))(this, DBNEELHBBKB);
	}

	::MoleMole::Config::ConfigTriggerControlTrait* PDPHGOMGOOO()
	{
		return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_PDPHGOMGOOO_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void FCOIDEFEALB(::MoleMole::Config::ConfigTriggerControlTrait* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerControlTrait*))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_FCOIDEFEALB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IOLPEIJACOI(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_IOLPEIJACOI_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void DNBPGBBDHHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_DNBPGBBDHHO_OFFSET))(this);
	}

	::System::Void EHAFMMNKOIP(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEDGPMNDDEB_EHAFMMNKOIP_OFFSET))(this, HIAIKHDFCLN);
	}
};

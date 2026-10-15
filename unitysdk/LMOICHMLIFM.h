#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BFGHIAJEDIO;
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMOICHMLIFM_AEMBJKCJNEE_OFFSET UNITYSDK_OFFSET(0xB7D2EB0)
#define LMOICHMLIFM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7D3370)
#define LMOICHMLIFM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB7D34B0)
#define LMOICHMLIFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D35D0)
#define LMOICHMLIFM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB7D2720)
#define LMOICHMLIFM_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0xB7D2A30)
#define LMOICHMLIFM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB7D2660)
#define LMOICHMLIFM_EMBKLKNNHFB_OFFSET UNITYSDK_OFFSET(0xB7D27C0)
#define LMOICHMLIFM_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0xB7D31F0)
#define LMOICHMLIFM_JDKFKGGBLCF_OFFSET UNITYSDK_OFFSET(0xB7D32B0)
#define LMOICHMLIFM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xB7D2610)
#define LMOICHMLIFM_MNLFPHAOAGP_1_OFFSET UNITYSDK_OFFSET(0xB7D2C50)
#define LMOICHMLIFM_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0xB7D2810)
#define LMOICHMLIFM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB7D2540)
#define LMOICHMLIFM_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB7D26D0)
#define LMOICHMLIFM__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7D2500)

	class LMOICHMLIFM : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::System::Collections::Generic::List_1<::BFGHIAJEDIO*>* INBHBEAJJDD; // 0x68
		::System::Int32 DMIIPFEILFN; // 0x70
		::System::Int32 NIMJOKGLPEK; // 0x74
		// static const ::System::Object PANNAKIFACK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LMOICHMLIFM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LMOICHMLIFM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + LMOICHMLIFM_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP_1(::RPG::GameCore::AbilityMaxSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + LMOICHMLIFM_MNLFPHAOAGP_1_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LMOICHMLIFM_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void EMBKLKNNHFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM_EMBKLKNNHFB_OFFSET))(this);
		}

		::System::Void AEMBJKCJNEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM_AEMBJKCJNEE_OFFSET))(this);
		}

		::System::Void DICPMEJINGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM_DICPMEJINGC_OFFSET))(this);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMOICHMLIFM_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void JDKFKGGBLCF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMOICHMLIFM_JDKFKGGBLCF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

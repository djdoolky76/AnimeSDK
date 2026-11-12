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

#define LMOICHMLIFM_AEMBJKCJNEE_OFFSET UNITYSDK_OFFSET(0xC02F5B0)
#define LMOICHMLIFM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC02FA80)
#define LMOICHMLIFM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC02FBC0)
#define LMOICHMLIFM_CTOR_OFFSET UNITYSDK_OFFSET(0xC02FCE0)
#define LMOICHMLIFM_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0xC02F130)
#define LMOICHMLIFM_EMBKLKNNHFB_OFFSET UNITYSDK_OFFSET(0xC02EEC0)
#define LMOICHMLIFM_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0xC02F900)
#define LMOICHMLIFM_JDKFKGGBLCF_OFFSET UNITYSDK_OFFSET(0xC02F9C0)
#define LMOICHMLIFM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xC02ED10)
#define LMOICHMLIFM_MNLFPHAOAGP_1_OFFSET UNITYSDK_OFFSET(0xC02F350)
#define LMOICHMLIFM_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0xC02EF10)
#define LMOICHMLIFM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC02EC40)
#define LMOICHMLIFM_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC02EDD0)
#define LMOICHMLIFM__ONBIND_OFFSET UNITYSDK_OFFSET(0xC02EC00)
#define LMOICHMLIFM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC02EE20)
#define LMOICHMLIFM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC02ED60)

inline static constexpr unsigned int LMOICHMLIFM_TypeDefinitionIndex = 73373;

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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LMOICHMLIFM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOICHMLIFM__SETUPVIEW_OFFSET))(this);
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

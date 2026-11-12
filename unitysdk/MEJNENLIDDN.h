#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GNHEKDHMANH;
class HJCPBDECGML;
class IOLGDGNPEEO;
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace RPG::Client { class CustomSlider; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MEJNENLIDDN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC18E1C0)
#define MEJNENLIDDN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC18E2E0)
#define MEJNENLIDDN_BJHHKIPKDBO_OFFSET UNITYSDK_OFFSET(0xC18E040)
#define MEJNENLIDDN_CTOR_OFFSET UNITYSDK_OFFSET(0xC18E3D0)
#define MEJNENLIDDN_DOKPJDIMHGC_OFFSET UNITYSDK_OFFSET(0xC18DFA0)
#define MEJNENLIDDN_GBHCJKBPNHF_OFFSET UNITYSDK_OFFSET(0xC18D820)
#define MEJNENLIDDN_GMGHJKHMHMJ_OFFSET UNITYSDK_OFFSET(0xC18D7D0)
#define MEJNENLIDDN_IAPPKJBIGDD_OFFSET UNITYSDK_OFFSET(0xC18DB10)
#define MEJNENLIDDN_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC18D0D0)
#define MEJNENLIDDN_KEABDDNLFGD_OFFSET UNITYSDK_OFFSET(0xC18DA80)
#define MEJNENLIDDN_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xC18D660)
#define MEJNENLIDDN_LHDNMJEADDP_OFFSET UNITYSDK_OFFSET(0xC18DFF0)
#define MEJNENLIDDN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC18D740)
#define MEJNENLIDDN_OCIFGHLNHDH_OFFSET UNITYSDK_OFFSET(0xC18D300)
#define MEJNENLIDDN_PBAEGKLHOIM_OFFSET UNITYSDK_OFFSET(0xC18E100)
#define MEJNENLIDDN__ONBIND_OFFSET UNITYSDK_OFFSET(0xC18CC80)
#define MEJNENLIDDN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC18CFF0)
#define MEJNENLIDDN__ONTICK_OFFSET UNITYSDK_OFFSET(0xC18D4D0)
#define MEJNENLIDDN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC18D050)

inline static constexpr unsigned int MEJNENLIDDN_TypeDefinitionIndex = 73439;

	class MEJNENLIDDN : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::CustomSlider* BPPPCCICHJO; // 0x60
		::RPG::Client::BattleSilverWolf999CustomUIData* AHJEPNDLMJH; // 0x68
		::UnityEngine::RectTransform* MPDPLHLANMA; // 0x70
		::UnityEngine::RectTransform* FBKILIOPIKA; // 0x78
		::System::Collections::Generic::List_1<::GNHEKDHMANH*>* EBCEHALBJHM; // 0x80
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MEJNENLIDDN__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEJNENLIDDN__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void GBHCJKBPNHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_GBHCJKBPNHF_OFFSET))(this);
		}

		::System::Void LEEEAMMHPFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_LEEEAMMHPFM_OFFSET))(this);
		}

		::System::Single IAPPKJBIGDD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_IAPPKJBIGDD_OFFSET))(this);
		}

		::System::Void DOKPJDIMHGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_DOKPJDIMHGC_OFFSET))(this);
		}

		::System::Void LHDNMJEADDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_LHDNMJEADDP_OFFSET))(this);
		}

		::System::Boolean OCIFGHLNHDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_OCIFGHLNHDH_OFFSET))(this);
		}

		::HJCPBDECGML* GMGHJKHMHMJ()
		{
			return ((::HJCPBDECGML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_GMGHJKHMHMJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IOLGDGNPEEO*>* KEABDDNLFGD()
		{
			return ((::System::Collections::Generic::List_1<::IOLGDGNPEEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_KEABDDNLFGD_OFFSET))(this);
		}

		::System::Void BJHHKIPKDBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEJNENLIDDN_BJHHKIPKDBO_OFFSET))(this, a1);
		}

		::System::Void PBAEGKLHOIM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEJNENLIDDN_PBAEGKLHOIM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJNENLIDDN_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

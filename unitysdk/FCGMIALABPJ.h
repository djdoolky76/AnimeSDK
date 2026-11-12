#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBuffPresenter; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define FCGMIALABPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x165D6480)
#define FCGMIALABPJ_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0x165D6420)
#define FCGMIALABPJ_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x165D6010)
#define FCGMIALABPJ_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x165D6060)
#define FCGMIALABPJ_IOICLMIEEDK_OFFSET UNITYSDK_OFFSET(0x165D63D0)
#define FCGMIALABPJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x165D6260)
#define FCGMIALABPJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x165D5970)
#define FCGMIALABPJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x165D60A0)
#define FCGMIALABPJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x165D6130)
#define FCGMIALABPJ___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x165D64B0)
#define FCGMIALABPJ___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0x165D64D0)

inline static constexpr unsigned int FCGMIALABPJ_TypeDefinitionIndex = 73172;

	class FCGMIALABPJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::RPG::Client::ElationBuffPresenter* OCHMHGBBCJI; // 0x68
		::UnityEngine::UI::Button* LOJGMKCCADN; // 0x70
		::RPG::Client::ElationBuffPresenterUIParam* HCKLPPPGCIB; // 0x78
		::UnityEngine::UI::Button* IIEABLPHBKM; // 0x80
		::RPG::Client::ElationBattleBuffGroupViewData* AIJODBLPFHG; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ_GET_TRANS_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FCGMIALABPJ__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::ElationBattleBuffGroupViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + FCGMIALABPJ_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void IOICLMIEEDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ_IOICLMIEEDK_OFFSET))(this);
		}

		::UnityEngine::RectTransform* EBHNJMPEILL()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGMIALABPJ_EBHNJMPEILL_OFFSET))(this);
		}

		::System::Void __OnBind_b__0_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCGMIALABPJ___ONBIND_B__0_0_OFFSET))(this, a1);
		}

		::System::Void __OnBind_b__0_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCGMIALABPJ___ONBIND_B__0_1_OFFSET))(this, a1);
		}

	};

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

#define FCGMIALABPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C017500)
#define FCGMIALABPJ_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0x1C0174A0)
#define FCGMIALABPJ_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C017090)
#define FCGMIALABPJ_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1C0170E0)
#define FCGMIALABPJ_IOICLMIEEDK_OFFSET UNITYSDK_OFFSET(0x1C017450)
#define FCGMIALABPJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1C0172E0)
#define FCGMIALABPJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1C016A00)
#define FCGMIALABPJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1C017120)
#define FCGMIALABPJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1C0171B0)
#define FCGMIALABPJ___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C017530)
#define FCGMIALABPJ___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0x1C017550)

inline static constexpr unsigned int FCGMIALABPJ_TypeDefinitionIndex = 73171;

	class FCGMIALABPJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* IIEABLPHBKM; // 0x60
		::UnityEngine::UI::Button* LOJGMKCCADN; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::RPG::Client::ElationBuffPresenter* OCHMHGBBCJI; // 0x78
		::RPG::Client::ElationBuffPresenterUIParam* HCKLPPPGCIB; // 0x80
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateParamTransition_Duration.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0xEBDC8F0)
#define RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xEBDC430)
#define RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_LPPIHKNHFGF_OFFSET UNITYSDK_OFFSET(0xEBDC820)
#define RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xEBDC560)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParamTransition_Float_TypeDefinitionIndex = 70790;

	class StateParamTransition_Float : public ::RPG::Client::StateParamTransition_Duration
	{
	public:
		::System::Single value; // 0x20
		::System::Single _time; // 0x24
		::System::Single _startValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void LPPIHKNHFGF(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_FLOAT_LPPIHKNHFGF_OFFSET))(this, a1);
		}

	};
}

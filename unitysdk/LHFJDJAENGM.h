#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LHFJDJAENGM;
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace System { class Action; }
namespace System { class Object; }

#define LHFJDJAENGM_AAABFGNHANJ_OFFSET UNITYSDK_OFFSET(0x1BCC27F0)
#define LHFJDJAENGM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1BCC2480)
#define LHFJDJAENGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC2850)
#define LHFJDJAENGM_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x1BCC2710)
#define LHFJDJAENGM_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1BCC2750)
#define LHFJDJAENGM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BCC25D0)

inline static constexpr unsigned int LHFJDJAENGM_TypeDefinitionIndex = 83628;

	class LHFJDJAENGM : public ::MLKDDLHNNHH
	{
	public:
		::System::Object* CFKHNPGEAJA; // 0x20
		::System::Action* BBNDNGACCFL; // 0x28
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* CPIIOIPAAKK; // 0x30
		::UnityEngine::Vector3 IEBJLLHDMAG; // 0x38
		::UnityEngine::Vector3 IMFHNDBKHLI; // 0x44
		::UnityEngine::Vector3 IPBOCIPNDMG; // 0x50
		::System::Boolean BEMMCKLJICI; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFJDJAENGM_CTOR_OFFSET))(this);
		}

		static ::LHFJDJAENGM* BPLPBPMEODA(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Action* a6)
		{
			return ((::LHFJDJAENGM*(*)(::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + LHFJDJAENGM_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFJDJAENGM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFJDJAENGM_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFJDJAENGM_ONCLEAR_OFFSET))(this);
		}

		::System::Void AAABFGNHANJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFJDJAENGM_AAABFGNHANJ_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLAGHDCPOPJ;
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace System { class Object; }

#define DLAGHDCPOPJ_AAABFGNHANJ_OFFSET UNITYSDK_OFFSET(0xFFF6290)
#define DLAGHDCPOPJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xFFF5F00)
#define DLAGHDCPOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x105FFB50)
#define DLAGHDCPOPJ_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xFFF61C0)
#define DLAGHDCPOPJ_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xFFF6200)
#define DLAGHDCPOPJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xFFF6020)

inline static constexpr unsigned int DLAGHDCPOPJ_TypeDefinitionIndex = 83631;

	class DLAGHDCPOPJ : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* CPIIOIPAAKK; // 0x20
		::System::Object* CFKHNPGEAJA; // 0x28
		::UnityEngine::Vector3 IMFHNDBKHLI; // 0x30
		::UnityEngine::Vector3 IPBOCIPNDMG; // 0x3C
		::System::Boolean BEMMCKLJICI; // 0x48
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 IEBJLLHDMAG; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAGHDCPOPJ_CTOR_OFFSET))(this);
		}

		static ::DLAGHDCPOPJ* BPLPBPMEODA(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::DLAGHDCPOPJ*(*)(::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLAGHDCPOPJ_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAGHDCPOPJ_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAGHDCPOPJ_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAGHDCPOPJ_ONCLEAR_OFFSET))(this);
		}

		::System::Void AAABFGNHANJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAGHDCPOPJ_AAABFGNHANJ_OFFSET))(this);
		}

	};

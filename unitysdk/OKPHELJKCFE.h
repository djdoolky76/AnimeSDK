#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LookAtIK; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define OKPHELJKCFE_AMDNLDPGIAJ_OFFSET UNITYSDK_OFFSET(0xBEF4F90)
#define OKPHELJKCFE_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF5610)
#define OKPHELJKCFE_DAFHOJJKMED_OFFSET UNITYSDK_OFFSET(0xBEF5240)
#define OKPHELJKCFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEF4D40)
#define OKPHELJKCFE_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xBEF4DA0)
#define OKPHELJKCFE_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEF4DB0)
#define OKPHELJKCFE_HDKKAKPBOIG_OFFSET UNITYSDK_OFFSET(0xBEF54A0)
#define OKPHELJKCFE_LHIDBNMFFHG_OFFSET UNITYSDK_OFFSET(0xBEF50B0)
#define OKPHELJKCFE_LKPHDEGLFPN_OFFSET UNITYSDK_OFFSET(0xBEF55B0)
#define OKPHELJKCFE_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBEF4E80)
#define OKPHELJKCFE_OMBNDGOINPP_OFFSET UNITYSDK_OFFSET(0xBEF5600)
#define OKPHELJKCFE_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xBEF4DC0)

inline static constexpr unsigned int OKPHELJKCFE_TypeDefinitionIndex = 57152;

	class OKPHELJKCFE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::LookAtIK* FJLAEGFIMCK; // 0x18
		::System::Boolean NNGLMENLECH; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::Client::EAssemblyNPC DKHKDBJPNJA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPHELJKCFE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPHELJKCFE_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPHELJKCFE_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPHELJKCFE_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + OKPHELJKCFE_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void LMCEDCHJKFF(::RPG::Client::EAssemblyNPC a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + OKPHELJKCFE_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void AMDNLDPGIAJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKPHELJKCFE_AMDNLDPGIAJ_OFFSET))(this, a1);
		}

		::System::Void LHIDBNMFFHG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKPHELJKCFE_LHIDBNMFFHG_OFFSET))(this, a1);
		}

		::System::Void DAFHOJJKMED(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKPHELJKCFE_DAFHOJJKMED_OFFSET))(this, a1);
		}

		::System::Void HDKKAKPBOIG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OKPHELJKCFE_HDKKAKPBOIG_OFFSET))(this, a1);
		}

		::System::Void LKPHDEGLFPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPHELJKCFE_LKPHDEGLFPN_OFFSET))(this);
		}

		::RPG::Client::LookAtIK* OMBNDGOINPP()
		{
			return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPHELJKCFE_OMBNDGOINPP_OFFSET))(this);
		}

	};

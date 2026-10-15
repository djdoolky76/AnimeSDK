#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class MonoEffectPluginSDFText; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define IBFIOLEFPBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E247D0)
#define IBFIOLEFPBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E247C0)
#define IBFIOLEFPBL_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15E24470)
#define IBFIOLEFPBL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15E24110)
#define IBFIOLEFPBL_MBBELFLFCIC_OFFSET UNITYSDK_OFFSET(0x15E24640)
#define IBFIOLEFPBL_ONJFJFJHOOF_OFFSET UNITYSDK_OFFSET(0x15E244E0)

inline static constexpr unsigned int IBFIOLEFPBL_TypeDefinitionIndex = 69898;

	class IBFIOLEFPBL : public ::RPG::Client::BehaviorBase
	{
	public:
		static ::System::String** StaticGet_KMBKIHHGIJP()
		{
			return (::System::String**)UnitySDK::FromName("", "IBFIOLEFPBL")->GetStaticField(0x3B650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIOLEFPBL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFIOLEFPBL_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + IBFIOLEFPBL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ONJFJFJHOOF(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + IBFIOLEFPBL_ONJFJFJHOOF_OFFSET))(this, a1);
		}

		::System::String* MBBELFLFCIC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIOLEFPBL_MBBELFLFCIC_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginSDFText* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginSDFText*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIOLEFPBL_HPNDIIPEFLJ_OFFSET))(this);
		}

	};

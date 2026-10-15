#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/CyreneSPPointState.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define KHGEHIJJFDA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB409210)
#define KHGEHIJJFDA_CHJAHLDFBKH_OFFSET UNITYSDK_OFFSET(0xB409040)
#define KHGEHIJJFDA_CTOR_OFFSET UNITYSDK_OFFSET(0xB4091E0)
#define KHGEHIJJFDA_GAAMEEKFMAO_OFFSET UNITYSDK_OFFSET(0xB409100)
#define KHGEHIJJFDA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB408CD0)
#define KHGEHIJJFDA_PPJJJGMPBNM_OFFSET UNITYSDK_OFFSET(0xB408F30)
#define KHGEHIJJFDA__ONBIND_OFFSET UNITYSDK_OFFSET(0xB409180)

	class KHGEHIJJFDA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::RPG::Client::CyreneSPPointState DLNIGFGLPLJ; // 0x68
		static ::System::Int32* StaticGet_KGJMKFNLNJH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHGEHIJJFDA")->GetStaticField(0x129E0);
		}

		static ::System::Int32* StaticGet_NNEDNCCBFGJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHGEHIJJFDA")->GetStaticField(0x129E4);
		}

		static ::System::Int32* StaticGet_MDFDDIKBIDN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHGEHIJJFDA")->GetStaticField(0x129E8);
		}

		static ::System::Int32* StaticGet_DNOPAFEDOEI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHGEHIJJFDA")->GetStaticField(0x129EC);
		}

		static ::System::Int32* StaticGet_BLKKJGAPANB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHGEHIJJFDA")->GetStaticField(0x129F0);
		}

		static ::System::Int32* StaticGet_DBPKOEBFFPN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHGEHIJJFDA")->GetStaticField(0x129F4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGEHIJJFDA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGEHIJJFDA_CCTOR_OFFSET))();
		}

		::System::Void NKPPGDENJAE(::RPG::Client::CyreneSPPointState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CyreneSPPointState))((::PBYTE)hIl2Cpp + KHGEHIJJFDA_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Boolean GAAMEEKFMAO(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KHGEHIJJFDA_GAAMEEKFMAO_OFFSET))(this, a1);
		}

		::System::Void PPJJJGMPBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGEHIJJFDA_PPJJJGMPBNM_OFFSET))(this);
		}

		::System::Void CHJAHLDFBKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGEHIJJFDA_CHJAHLDFBKH_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGEHIJJFDA__ONBIND_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }

#define PJPODLALPCG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2A0E30)
#define PJPODLALPCG_CTOR_OFFSET UNITYSDK_OFFSET(0xC2A0D40)
#define PJPODLALPCG_DFILIDFJGGB_OFFSET UNITYSDK_OFFSET(0xC2A0C80)
#define PJPODLALPCG_EADMJJNGDKG_OFFSET UNITYSDK_OFFSET(0xC2A0B90)
#define PJPODLALPCG_GMLKMFDNNFP_OFFSET UNITYSDK_OFFSET(0xC2A0490)
#define PJPODLALPCG_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xC2A03A0)

	class PJPODLALPCG : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* PGPEMCHEHKD; // 0x10
		::Il2CppArray<::System::String*>* JGDHIBFCACK; // 0x18
		::RPG::Client::TriggerEffectParamsRef PDPHINAPMKK; // 0x20
		static ::System::String** StaticGet_PFIJGEHPIAJ()
		{
			return (::System::String**)UnitySDK::FromName("", "PJPODLALPCG")->GetStaticField(0x6FB50);
		}

		static ::System::String** StaticGet_FIFCEJBOKPJ()
		{
			return (::System::String**)UnitySDK::FromName("", "PJPODLALPCG")->GetStaticField(0x6FB58);
		}

		static ::System::String** StaticGet_KCLDOCJPEPO()
		{
			return (::System::String**)UnitySDK::FromName("", "PJPODLALPCG")->GetStaticField(0x6FB60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPODLALPCG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJPODLALPCG_CCTOR_OFFSET))();
		}

		::System::Void JDAGFHEPMHF(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PJPODLALPCG_JDAGFHEPMHF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMLKMFDNNFP(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PJPODLALPCG_GMLKMFDNNFP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* DFILIDFJGGB(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJPODLALPCG_DFILIDFJGGB_OFFSET))(this, a1);
		}

		::System::String* EADMJJNGDKG(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJPODLALPCG_EADMJJNGDKG_OFFSET))(this, a1);
		}

	};

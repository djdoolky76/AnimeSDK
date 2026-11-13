#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffectPluginCharaOverlayMatBase; }
namespace RPG::CustomRP { class CRPVirtualCameraCmd; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define LIGCHAMPNAE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x172DDF10)
#define LIGCHAMPNAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x172DF350)
#define LIGCHAMPNAE_CIADCJJLNJF_OFFSET UNITYSDK_OFFSET(0x172DEAC0)
#define LIGCHAMPNAE_EKHHHAFPNGO_OFFSET UNITYSDK_OFFSET(0x172DE080)
#define LIGCHAMPNAE_GEMKFCFDNDO_OFFSET UNITYSDK_OFFSET(0x172DE900)
#define LIGCHAMPNAE_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x172DE830)
#define LIGCHAMPNAE_HGBMBIBDEKG_OFFSET UNITYSDK_OFFSET(0x172DEDC0)
#define LIGCHAMPNAE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x172DE960)
#define LIGCHAMPNAE_LCKCGFBGBMN_OFFSET UNITYSDK_OFFSET(0x172DF2D0)
#define LIGCHAMPNAE_LGMPAOPFPBN_OFFSET UNITYSDK_OFFSET(0x172DEBA0)

inline static constexpr unsigned int LIGCHAMPNAE_TypeDefinitionIndex = 71908;

	class LIGCHAMPNAE : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::CRPVirtualCameraVolumn** StaticGet_LDLFEPIIBGF()
		{
			return (::RPG::CustomRP::CRPVirtualCameraVolumn**)UnitySDK::FromName("", "LIGCHAMPNAE")->GetStaticField(0x67CF0);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaOverlayMatBase*>** StaticGet_HHFBPNMBAEG()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaOverlayMatBase*>**)UnitySDK::FromName("", "LIGCHAMPNAE")->GetStaticField(0x67CF8);
		}

		static ::Il2CppArray<::RPG::CustomRP::CRPVirtualCameraCmd*>** StaticGet_AJJEHJMICMH()
		{
			return (::Il2CppArray<::RPG::CustomRP::CRPVirtualCameraCmd*>**)UnitySDK::FromName("", "LIGCHAMPNAE")->GetStaticField(0x67D00);
		}

		static ::Il2CppArray<::RPG::CustomRP::CRPVirtualCameraCmd*>** StaticGet_IKGKMKOEPCI()
		{
			return (::Il2CppArray<::RPG::CustomRP::CRPVirtualCameraCmd*>**)UnitySDK::FromName("", "LIGCHAMPNAE")->GetStaticField(0x67D08);
		}

		static ::System::Int32* StaticGet_AFEKCAHCIAH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LIGCHAMPNAE")->GetStaticField(0x147C0);
		}

		static ::System::Boolean* StaticGet_HKHLKOMBAMN()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIGCHAMPNAE")->GetStaticField(0x147C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGCHAMPNAE_CCTOR_OFFSET))();
		}

		static ::System::Void BKJGMFOKKKN(::RPG::Client::MonoEffectPluginCharaOverlayMatBase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffectPluginCharaOverlayMatBase*))((::PBYTE)hIl2Cpp + LIGCHAMPNAE_BKJGMFOKKKN_OFFSET))(a1);
		}

		static ::System::Void GNCJAGHKEPO(::RPG::Client::MonoEffectPluginCharaOverlayMatBase* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffectPluginCharaOverlayMatBase*))((::PBYTE)hIl2Cpp + LIGCHAMPNAE_GNCJAGHKEPO_OFFSET))(a1);
		}

		static ::System::Void GEMKFCFDNDO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGCHAMPNAE_GEMKFCFDNDO_OFFSET))();
		}

		static ::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGCHAMPNAE_JLANKNHFKCN_OFFSET))();
		}

		static ::System::String* LGMPAOPFPBN(::RPG::Client::MonoEffectPluginCharaOverlayMatBase* a1)
		{
			return ((::System::String*(*)(::RPG::Client::MonoEffectPluginCharaOverlayMatBase*))((::PBYTE)hIl2Cpp + LIGCHAMPNAE_LGMPAOPFPBN_OFFSET))(a1);
		}

		static ::RPG::CustomRP::CRPVirtualCameraVolumn* CIADCJJLNJF()
		{
			return ((::RPG::CustomRP::CRPVirtualCameraVolumn*(*)())((::PBYTE)hIl2Cpp + LIGCHAMPNAE_CIADCJJLNJF_OFFSET))();
		}

		static ::System::Void EKHHHAFPNGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGCHAMPNAE_EKHHHAFPNGO_OFFSET))();
		}

		static ::System::Void HGBMBIBDEKG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGCHAMPNAE_HGBMBIBDEKG_OFFSET))();
		}

		static ::System::Void LCKCGFBGBMN(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LIGCHAMPNAE_LCKCGFBGBMN_OFFSET))(a1);
		}

	};

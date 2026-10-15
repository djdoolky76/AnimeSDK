#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IBNAFGFFJLJ;
class KHOJFFEPLEO;
class MGOKKPMFACL_FNNMONCNBAB;
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace System { class Tuple; }
namespace UnityEngine { class Transform; }

#define MGOKKPMFACL_AHGLOBMOBCP_OFFSET UNITYSDK_OFFSET(0xB92A8A0)
#define MGOKKPMFACL_CJNDHGJBMHI_OFFSET UNITYSDK_OFFSET(0xB92A540)
#define MGOKKPMFACL_EDAMFBHFEGE_OFFSET UNITYSDK_OFFSET(0xB92AAE0)
#define MGOKKPMFACL_FGGPBOJDFOE_OFFSET UNITYSDK_OFFSET(0xB92B070)
#define MGOKKPMFACL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB92A7D0)
#define MGOKKPMFACL_JCLNBGMJGPB_OFFSET UNITYSDK_OFFSET(0xB92A980)
#define MGOKKPMFACL_JKAOGFNAIMP_OFFSET UNITYSDK_OFFSET(0xB92AAA0)
#define MGOKKPMFACL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB92A700)
#define MGOKKPMFACL_LJFIHGFIODI_OFFSET UNITYSDK_OFFSET(0xB92ABE0)
#define MGOKKPMFACL_OPGGOMKJIOM_OFFSET UNITYSDK_OFFSET(0xB92A820)

inline static constexpr unsigned int MGOKKPMFACL_TypeDefinitionIndex = 74116;

	class MGOKKPMFACL : public ::System::Object
	{
	public:
		static ::KHOJFFEPLEO** StaticGet_NPMFLJPODJF()
		{
			return (::KHOJFFEPLEO**)UnitySDK::FromName("", "MGOKKPMFACL")->GetStaticField(0x117B0);
		}

		static ::UnityEngine::Transform** StaticGet_HFHEHFBMIIK()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "MGOKKPMFACL")->GetStaticField(0x117B8);
		}

		static ::System::Int32* StaticGet_MLMMJMGLLML()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MGOKKPMFACL")->GetStaticField(0x3A40);
		}

		static ::System::Single* StaticGet_FCEBGJJBDJF()
		{
			return (::System::Single*)UnitySDK::FromName("", "MGOKKPMFACL")->GetStaticField(0x3A44);
		}

		static ::System::Single* StaticGet_ONFEMIIEBAP()
		{
			return (::System::Single*)UnitySDK::FromName("", "MGOKKPMFACL")->GetStaticField(0x3A48);
		}

		static ::System::Single* StaticGet_MKJFANJHICG()
		{
			return (::System::Single*)UnitySDK::FromName("", "MGOKKPMFACL")->GetStaticField(0x3A4C);
		}

		static ::System::Int32* StaticGet_ONDEDGKEEOK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MGOKKPMFACL")->GetStaticField(0x3A50);
		}

		static ::System::Int32* StaticGet_LKKOLFBJDGC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MGOKKPMFACL")->GetStaticField(0x3A54);
		}

		static ::System::Tuple* CJNDHGJBMHI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Tuple*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MGOKKPMFACL_CJNDHGJBMHI_OFFSET))(a1);
		}

		static ::System::Void KPJGDHLENIP(::KHOJFFEPLEO* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::KHOJFFEPLEO*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MGOKKPMFACL_KPJGDHLENIP_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGOKKPMFACL_HADOHLNHHGB_OFFSET))();
		}

		static ::IBNAFGFFJLJ* OPGGOMKJIOM(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::AlleyPackAnchorType a4)
		{
			return ((::IBNAFGFFJLJ*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + MGOKKPMFACL_OPGGOMKJIOM_OFFSET))(a1, a2, a3, a4);
		}

		static ::IBNAFGFFJLJ* AHGLOBMOBCP(::UnityEngine::Vector3 a1, ::RPG::GameCore::AlleyPackAnchorType a2)
		{
			return ((::IBNAFGFFJLJ*(*)(::UnityEngine::Vector3, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + MGOKKPMFACL_AHGLOBMOBCP_OFFSET))(a1, a2);
		}

		static ::System::Void JCLNBGMJGPB(::IBNAFGFFJLJ* a1)
		{
			return ((::System::Void(*)(::IBNAFGFFJLJ*))((::PBYTE)hIl2Cpp + MGOKKPMFACL_JCLNBGMJGPB_OFFSET))(a1);
		}

		static ::System::Void EDAMFBHFEGE(::IBNAFGFFJLJ* a1)
		{
			return ((::System::Void(*)(::IBNAFGFFJLJ*))((::PBYTE)hIl2Cpp + MGOKKPMFACL_EDAMFBHFEGE_OFFSET))(a1);
		}

		static ::System::Void JKAOGFNAIMP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGOKKPMFACL_JKAOGFNAIMP_OFFSET))();
		}

		static ::MGOKKPMFACL_FNNMONCNBAB* LJFIHGFIODI(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
		{
			return ((::MGOKKPMFACL_FNNMONCNBAB*(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + MGOKKPMFACL_LJFIHGFIODI_OFFSET))(a1);
		}

		static ::System::Boolean FGGPBOJDFOE(::IBNAFGFFJLJ* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::IBNAFGFFJLJ*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MGOKKPMFACL_FGGPBOJDFOE_OFFSET))(a1, a2, a3);
		}

	};

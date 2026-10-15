#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEffectRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAOBOKELEAN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1EA3D0)
#define NAOBOKELEAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1EA950)
#define NAOBOKELEAN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1EA540)
#define NAOBOKELEAN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E9EC0)
#define NAOBOKELEAN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1EA150)
#define NAOBOKELEAN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1EA5E0)
#define NAOBOKELEAN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1EA630)
#define NAOBOKELEAN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1EA410)
#define NAOBOKELEAN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1EA0F0)
#define NAOBOKELEAN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1EA280)
#define NAOBOKELEAN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1EA4A0)
#define NAOBOKELEAN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E9E40)

	class NAOBOKELEAN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NAOBOKELEAN")->GetStaticField(0x2C410);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelEffectRow*>**)UnitySDK::FromName("", "NAOBOKELEAN")->GetStaticField(0x2C418);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NAOBOKELEAN")->GetStaticField(0x2C420);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NAOBOKELEAN")->GetStaticField(0x8BB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NAOBOKELEAN")->GetStaticField(0x8BB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAOBOKELEAN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelEffectRow*>*(*)())((::PBYTE)hIl2Cpp + NAOBOKELEAN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAOBOKELEAN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelEffectRow*>(*)())((::PBYTE)hIl2Cpp + NAOBOKELEAN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NAOBOKELEAN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAOBOKELEAN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAOBOKELEAN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAOBOKELEAN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NAOBOKELEAN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAOBOKELEAN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NAOBOKELEAN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelEffectRow*))((::PBYTE)hIl2Cpp + NAOBOKELEAN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

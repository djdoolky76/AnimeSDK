#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionMaterialWhiteRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACCBCGFHGAA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCA1F80)
#define ACCBCGFHGAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA2B60)
#define ACCBCGFHGAA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCA2320)
#define ACCBCGFHGAA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCA1FC0)
#define ACCBCGFHGAA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCA2860)
#define ACCBCGFHGAA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCA23C0)
#define ACCBCGFHGAA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCA2410)
#define ACCBCGFHGAA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCA21F0)
#define ACCBCGFHGAA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCA2800)
#define ACCBCGFHGAA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCA29D0)
#define ACCBCGFHGAA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCA2280)
#define ACCBCGFHGAA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCA2780)

	class ACCBCGFHGAA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0x36520);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>**)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0x36528);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0x36530);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0xB740);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0xB741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInvasionMaterialWhiteRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionMaterialWhiteRow*))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>*(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionMaterialWhiteRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionMaterialWhiteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

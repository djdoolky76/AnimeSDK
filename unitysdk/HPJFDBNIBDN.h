#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelTalkRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPJFDBNIBDN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CED3A70)
#define HPJFDBNIBDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED3FF0)
#define HPJFDBNIBDN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CED3BE0)
#define HPJFDBNIBDN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CED3560)
#define HPJFDBNIBDN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CED37F0)
#define HPJFDBNIBDN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CED3C80)
#define HPJFDBNIBDN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CED3CD0)
#define HPJFDBNIBDN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CED3AB0)
#define HPJFDBNIBDN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CED3790)
#define HPJFDBNIBDN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CED3920)
#define HPJFDBNIBDN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CED3B40)
#define HPJFDBNIBDN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CED34E0)

	class HPJFDBNIBDN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTalkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTalkRow*>**)UnitySDK::FromName("", "HPJFDBNIBDN")->GetStaticField(0x20440);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HPJFDBNIBDN")->GetStaticField(0x20448);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HPJFDBNIBDN")->GetStaticField(0x20450);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HPJFDBNIBDN")->GetStaticField(0x75F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HPJFDBNIBDN")->GetStaticField(0x75F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJFDBNIBDN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTalkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTalkRow*>*(*)())((::PBYTE)hIl2Cpp + HPJFDBNIBDN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPJFDBNIBDN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTalkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTalkRow*>(*)())((::PBYTE)hIl2Cpp + HPJFDBNIBDN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelTalkRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HPJFDBNIBDN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPJFDBNIBDN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJFDBNIBDN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJFDBNIBDN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HPJFDBNIBDN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPJFDBNIBDN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HPJFDBNIBDN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelTalkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelTalkRow*))((::PBYTE)hIl2Cpp + HPJFDBNIBDN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

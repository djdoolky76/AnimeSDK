#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCardConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NINOJCMECJK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D213D00)
#define NINOJCMECJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2148E0)
#define NINOJCMECJK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2140A0)
#define NINOJCMECJK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D213D40)
#define NINOJCMECJK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2145E0)
#define NINOJCMECJK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D214140)
#define NINOJCMECJK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D214190)
#define NINOJCMECJK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D213F70)
#define NINOJCMECJK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D214580)
#define NINOJCMECJK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D214750)
#define NINOJCMECJK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D214000)
#define NINOJCMECJK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D214500)

	class NINOJCMECJK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardConfigRow*>**)UnitySDK::FromName("", "NINOJCMECJK")->GetStaticField(0x2ECC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NINOJCMECJK")->GetStaticField(0x2ECC8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NINOJCMECJK")->GetStaticField(0x2ECD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NINOJCMECJK")->GetStaticField(0x9B30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NINOJCMECJK")->GetStaticField(0x9B31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINOJCMECJK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NINOJCMECJK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINOJCMECJK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINOJCMECJK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NINOJCMECJK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NINOJCMECJK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NINOJCMECJK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyCardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyCardConfigRow*))((::PBYTE)hIl2Cpp + NINOJCMECJK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NINOJCMECJK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NINOJCMECJK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyCardConfigRow*>(*)())((::PBYTE)hIl2Cpp + NINOJCMECJK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyCardConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyCardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NINOJCMECJK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

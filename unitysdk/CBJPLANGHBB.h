#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkVerificationDistanceRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBJPLANGHBB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA037B0)
#define CBJPLANGHBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA04390)
#define CBJPLANGHBB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA03B50)
#define CBJPLANGHBB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA037F0)
#define CBJPLANGHBB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA04090)
#define CBJPLANGHBB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA03BF0)
#define CBJPLANGHBB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA03C40)
#define CBJPLANGHBB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA03A20)
#define CBJPLANGHBB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA04030)
#define CBJPLANGHBB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA04200)
#define CBJPLANGHBB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA03AB0)
#define CBJPLANGHBB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA03FB0)

	class CBJPLANGHBB : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CBJPLANGHBB")->GetStaticField(0x3B330);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkVerificationDistanceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkVerificationDistanceRow*>**)UnitySDK::FromName("", "CBJPLANGHBB")->GetStaticField(0x3B338);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBJPLANGHBB")->GetStaticField(0x3B340);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CBJPLANGHBB")->GetStaticField(0xC940);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CBJPLANGHBB")->GetStaticField(0xC941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBJPLANGHBB_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBJPLANGHBB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBJPLANGHBB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBJPLANGHBB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CBJPLANGHBB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CBJPLANGHBB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CBJPLANGHBB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TalkVerificationDistanceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkVerificationDistanceRow*))((::PBYTE)hIl2Cpp + CBJPLANGHBB_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkVerificationDistanceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkVerificationDistanceRow*>*(*)())((::PBYTE)hIl2Cpp + CBJPLANGHBB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBJPLANGHBB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkVerificationDistanceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkVerificationDistanceRow*>(*)())((::PBYTE)hIl2Cpp + CBJPLANGHBB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TalkVerificationDistanceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TalkVerificationDistanceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CBJPLANGHBB_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

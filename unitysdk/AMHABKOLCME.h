#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkCardActionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMHABKOLCME_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCDE100)
#define AMHABKOLCME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCDE6D0)
#define AMHABKOLCME_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCDE270)
#define AMHABKOLCME_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCDDB70)
#define AMHABKOLCME_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCDDE00)
#define AMHABKOLCME_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCDE310)
#define AMHABKOLCME_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCDE360)
#define AMHABKOLCME_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCDE140)
#define AMHABKOLCME_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCDDDA0)
#define AMHABKOLCME_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCDDF70)
#define AMHABKOLCME_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCDE1D0)
#define AMHABKOLCME_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCDDAF0)

	class AMHABKOLCME : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AMHABKOLCME")->GetStaticField(0x3B9E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardActionRow*>**)UnitySDK::FromName("", "AMHABKOLCME")->GetStaticField(0x3B9E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AMHABKOLCME")->GetStaticField(0x3B9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AMHABKOLCME")->GetStaticField(0xCAF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AMHABKOLCME")->GetStaticField(0xCAF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHABKOLCME_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardActionRow*>*(*)())((::PBYTE)hIl2Cpp + AMHABKOLCME_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMHABKOLCME_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardActionRow*>(*)())((::PBYTE)hIl2Cpp + AMHABKOLCME_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkCardActionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkCardActionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AMHABKOLCME_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMHABKOLCME_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHABKOLCME_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHABKOLCME_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AMHABKOLCME_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AMHABKOLCME_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AMHABKOLCME_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ClockParkCardActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkCardActionRow*))((::PBYTE)hIl2Cpp + AMHABKOLCME_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

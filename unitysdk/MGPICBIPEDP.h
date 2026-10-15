#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityAvatarDeliverRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGPICBIPEDP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D169470)
#define MGPICBIPEDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D169A40)
#define MGPICBIPEDP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1695E0)
#define MGPICBIPEDP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D168EE0)
#define MGPICBIPEDP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D169170)
#define MGPICBIPEDP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D169680)
#define MGPICBIPEDP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1696D0)
#define MGPICBIPEDP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1694B0)
#define MGPICBIPEDP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D169110)
#define MGPICBIPEDP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1692E0)
#define MGPICBIPEDP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D169540)
#define MGPICBIPEDP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D168E60)

	class MGPICBIPEDP : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x4AFB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>**)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x4AFB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x4AFC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x116B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGPICBIPEDP")->GetStaticField(0x116B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>*(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDeliverRow*>(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityAvatarDeliverRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityAvatarDeliverRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MGPICBIPEDP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPICBIPEDP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MGPICBIPEDP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGPICBIPEDP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MGPICBIPEDP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityAvatarDeliverRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityAvatarDeliverRow*))((::PBYTE)hIl2Cpp + MGPICBIPEDP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

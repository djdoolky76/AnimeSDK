#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class Anniversary2NDTabConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKFDPEEBPCL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCD3D00)
#define AKFDPEEBPCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD4550)
#define AKFDPEEBPCL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCD40F0)
#define AKFDPEEBPCL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCD3820)
#define AKFDPEEBPCL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCD3A00)
#define AKFDPEEBPCL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCD4190)
#define AKFDPEEBPCL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCD41E0)
#define AKFDPEEBPCL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCD3D40)
#define AKFDPEEBPCL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCD39A0)
#define AKFDPEEBPCL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCD3B70)
#define AKFDPEEBPCL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCD4050)
#define AKFDPEEBPCL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCD37A0)

	class AKFDPEEBPCL : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AKFDPEEBPCL")->GetStaticField(0x39E40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDTabConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDTabConfigRow*>**)UnitySDK::FromName("", "AKFDPEEBPCL")->GetStaticField(0x39E48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AKFDPEEBPCL")->GetStaticField(0x39E50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AKFDPEEBPCL")->GetStaticField(0xC580);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AKFDPEEBPCL")->GetStaticField(0xC581);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFDPEEBPCL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDTabConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDTabConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AKFDPEEBPCL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKFDPEEBPCL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDTabConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::Anniversary2NDTabConfigRow*>(*)())((::PBYTE)hIl2Cpp + AKFDPEEBPCL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::Anniversary2NDTabConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::Anniversary2NDTabConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKFDPEEBPCL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKFDPEEBPCL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFDPEEBPCL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFDPEEBPCL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKFDPEEBPCL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFDPEEBPCL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AKFDPEEBPCL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::Anniversary2NDTabConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::Anniversary2NDTabConfigRow*))((::PBYTE)hIl2Cpp + AKFDPEEBPCL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

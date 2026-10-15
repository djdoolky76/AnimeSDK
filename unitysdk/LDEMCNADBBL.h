#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkBuffTypeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDEMCNADBBL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0DE920)
#define LDEMCNADBBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0DEEF0)
#define LDEMCNADBBL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0DEA90)
#define LDEMCNADBBL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0DE390)
#define LDEMCNADBBL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0DE620)
#define LDEMCNADBBL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0DEB30)
#define LDEMCNADBBL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0DEB80)
#define LDEMCNADBBL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0DE960)
#define LDEMCNADBBL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0DE5C0)
#define LDEMCNADBBL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0DE790)
#define LDEMCNADBBL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0DE9F0)
#define LDEMCNADBBL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0DE310)

	class LDEMCNADBBL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>**)UnitySDK::FromName("", "LDEMCNADBBL")->GetStaticField(0x3C3B0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LDEMCNADBBL")->GetStaticField(0x3C3B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LDEMCNADBBL")->GetStaticField(0x3C3C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LDEMCNADBBL")->GetStaticField(0xCE10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LDEMCNADBBL")->GetStaticField(0xCE11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDEMCNADBBL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>*(*)())((::PBYTE)hIl2Cpp + LDEMCNADBBL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDEMCNADBBL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + LDEMCNADBBL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkBuffTypeRow* LMBKNCAIDLC(::RPG::GameCore::ClockParkBuffType a1)
		{
			return ((::RPG::GameCore::ClockParkBuffTypeRow*(*)(::RPG::GameCore::ClockParkBuffType))((::PBYTE)hIl2Cpp + LDEMCNADBBL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDEMCNADBBL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDEMCNADBBL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDEMCNADBBL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LDEMCNADBBL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDEMCNADBBL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LDEMCNADBBL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ClockParkBuffTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkBuffTypeRow*))((::PBYTE)hIl2Cpp + LDEMCNADBBL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

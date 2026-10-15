#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachPoolRewardConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPDNEAAEBGN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF2CF00)
#define IPDNEAAEBGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF2D480)
#define IPDNEAAEBGN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF2D070)
#define IPDNEAAEBGN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF2C9B0)
#define IPDNEAAEBGN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF2CC40)
#define IPDNEAAEBGN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF2D110)
#define IPDNEAAEBGN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF2D160)
#define IPDNEAAEBGN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF2CF40)
#define IPDNEAAEBGN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF2CBE0)
#define IPDNEAAEBGN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF2CD70)
#define IPDNEAAEBGN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF2CFD0)
#define IPDNEAAEBGN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF2C930)

	class IPDNEAAEBGN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachPoolRewardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachPoolRewardConfigRow*>**)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x24C60);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x24C68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x24C70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x80A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x80A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPDNEAAEBGN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachPoolRewardConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachPoolRewardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IPDNEAAEBGN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPDNEAAEBGN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachPoolRewardConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachPoolRewardConfigRow*>(*)())((::PBYTE)hIl2Cpp + IPDNEAAEBGN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GachPoolRewardConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GachPoolRewardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPDNEAAEBGN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPDNEAAEBGN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPDNEAAEBGN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPDNEAAEBGN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPDNEAAEBGN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPDNEAAEBGN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPDNEAAEBGN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GachPoolRewardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GachPoolRewardConfigRow*))((::PBYTE)hIl2Cpp + IPDNEAAEBGN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

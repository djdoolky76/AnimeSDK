#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class KDPOOOHJMHM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGOCAPCBHBB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF0650)
#define FGOCAPCBHBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF0C20)
#define FGOCAPCBHBB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF07C0)
#define FGOCAPCBHBB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF00C0)
#define FGOCAPCBHBB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF0350)
#define FGOCAPCBHBB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF0860)
#define FGOCAPCBHBB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF08B0)
#define FGOCAPCBHBB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF0690)
#define FGOCAPCBHBB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF02F0)
#define FGOCAPCBHBB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF04C0)
#define FGOCAPCBHBB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF0720)
#define FGOCAPCBHBB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF0040)

	class FGOCAPCBHBB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FGOCAPCBHBB")->GetStaticField(0x13470);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KDPOOOHJMHM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KDPOOOHJMHM*>**)UnitySDK::FromName("", "FGOCAPCBHBB")->GetStaticField(0x13478);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FGOCAPCBHBB")->GetStaticField(0x13480);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FGOCAPCBHBB")->GetStaticField(0x43E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FGOCAPCBHBB")->GetStaticField(0x43E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGOCAPCBHBB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KDPOOOHJMHM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KDPOOOHJMHM*>*(*)())((::PBYTE)hIl2Cpp + FGOCAPCBHBB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGOCAPCBHBB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KDPOOOHJMHM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KDPOOOHJMHM*>(*)())((::PBYTE)hIl2Cpp + FGOCAPCBHBB_FPHGMAMDFHE_OFFSET))();
		}

		static ::KDPOOOHJMHM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KDPOOOHJMHM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FGOCAPCBHBB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGOCAPCBHBB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGOCAPCBHBB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGOCAPCBHBB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FGOCAPCBHBB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGOCAPCBHBB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FGOCAPCBHBB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KDPOOOHJMHM* a1)
		{
			return ((::System::Void(*)(::KDPOOOHJMHM*))((::PBYTE)hIl2Cpp + FGOCAPCBHBB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

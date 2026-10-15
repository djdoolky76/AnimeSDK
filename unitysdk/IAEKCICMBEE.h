#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingStatRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAEKCICMBEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CED97B0)
#define IAEKCICMBEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED9D80)
#define IAEKCICMBEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CED9920)
#define IAEKCICMBEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CED9220)
#define IAEKCICMBEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CED94B0)
#define IAEKCICMBEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CED99C0)
#define IAEKCICMBEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CED9A10)
#define IAEKCICMBEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CED97F0)
#define IAEKCICMBEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CED9450)
#define IAEKCICMBEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CED9620)
#define IAEKCICMBEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CED9880)
#define IAEKCICMBEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CED91A0)

	class IAEKCICMBEE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x20840);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>**)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x20848);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x20850);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x7660);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x7661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>*(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingStatRow* LMBKNCAIDLC(::RPG::GameCore::B51RacingStatType a1)
		{
			return ((::RPG::GameCore::B51RacingStatRow*(*)(::RPG::GameCore::B51RacingStatType))((::PBYTE)hIl2Cpp + IAEKCICMBEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IAEKCICMBEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAEKCICMBEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IAEKCICMBEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingStatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingStatRow*))((::PBYTE)hIl2Cpp + IAEKCICMBEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

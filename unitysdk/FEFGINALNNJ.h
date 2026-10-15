#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StrongChallengeBossDetailRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEFGINALNNJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDE1790)
#define FEFGINALNNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE1D10)
#define FEFGINALNNJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDE1900)
#define FEFGINALNNJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDE1280)
#define FEFGINALNNJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDE1510)
#define FEFGINALNNJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDE19A0)
#define FEFGINALNNJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDE19F0)
#define FEFGINALNNJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDE17D0)
#define FEFGINALNNJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDE14B0)
#define FEFGINALNNJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDE1640)
#define FEFGINALNNJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDE1860)
#define FEFGINALNNJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDE1200)

	class FEFGINALNNJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FEFGINALNNJ")->GetStaticField(0x10D70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeBossDetailRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeBossDetailRow*>**)UnitySDK::FromName("", "FEFGINALNNJ")->GetStaticField(0x10D78);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FEFGINALNNJ")->GetStaticField(0x10D80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FEFGINALNNJ")->GetStaticField(0x38D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FEFGINALNNJ")->GetStaticField(0x38D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEFGINALNNJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeBossDetailRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeBossDetailRow*>*(*)())((::PBYTE)hIl2Cpp + FEFGINALNNJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEFGINALNNJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeBossDetailRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeBossDetailRow*>(*)())((::PBYTE)hIl2Cpp + FEFGINALNNJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StrongChallengeBossDetailRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StrongChallengeBossDetailRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FEFGINALNNJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEFGINALNNJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEFGINALNNJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEFGINALNNJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEFGINALNNJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEFGINALNNJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FEFGINALNNJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StrongChallengeBossDetailRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StrongChallengeBossDetailRow*))((::PBYTE)hIl2Cpp + FEFGINALNNJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

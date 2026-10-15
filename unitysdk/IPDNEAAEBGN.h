#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachPoolRewardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPDNEAAEBGN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEFEF00)
#define IPDNEAAEBGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFF480)
#define IPDNEAAEBGN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEFF070)
#define IPDNEAAEBGN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEFE9B0)
#define IPDNEAAEBGN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEFEC40)
#define IPDNEAAEBGN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEFF110)
#define IPDNEAAEBGN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEFF160)
#define IPDNEAAEBGN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEFEF40)
#define IPDNEAAEBGN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEFEBE0)
#define IPDNEAAEBGN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEFED70)
#define IPDNEAAEBGN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEFEFD0)
#define IPDNEAAEBGN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEFE930)

inline static constexpr unsigned int IPDNEAAEBGN_TypeDefinitionIndex = 14627;

	class IPDNEAAEBGN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x240B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachPoolRewardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachPoolRewardConfigRow*>**)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x240B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x240C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x7CB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPDNEAAEBGN")->GetStaticField(0x7CB1);
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

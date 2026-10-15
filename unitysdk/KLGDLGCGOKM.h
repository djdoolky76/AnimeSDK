#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnRecommendConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLGDLGCGOKM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0A64D0)
#define KLGDLGCGOKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A6A50)
#define KLGDLGCGOKM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0A6640)
#define KLGDLGCGOKM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0A5FC0)
#define KLGDLGCGOKM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0A6250)
#define KLGDLGCGOKM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0A66E0)
#define KLGDLGCGOKM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0A6730)
#define KLGDLGCGOKM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0A6510)
#define KLGDLGCGOKM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0A61F0)
#define KLGDLGCGOKM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0A6380)
#define KLGDLGCGOKM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0A65A0)
#define KLGDLGCGOKM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0A5F40)

	class KLGDLGCGOKM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>**)UnitySDK::FromName("", "KLGDLGCGOKM")->GetStaticField(0x37670);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLGDLGCGOKM")->GetStaticField(0x37678);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KLGDLGCGOKM")->GetStaticField(0x37680);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLGDLGCGOKM")->GetStaticField(0xBC50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLGDLGCGOKM")->GetStaticField(0xBC51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLGDLGCGOKM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KLGDLGCGOKM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLGDLGCGOKM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>(*)())((::PBYTE)hIl2Cpp + KLGDLGCGOKM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnRecommendConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnRecommendConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLGDLGCGOKM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLGDLGCGOKM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLGDLGCGOKM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLGDLGCGOKM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLGDLGCGOKM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLGDLGCGOKM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLGDLGCGOKM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerReturnRecommendConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnRecommendConfigRow*))((::PBYTE)hIl2Cpp + KLGDLGCGOKM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

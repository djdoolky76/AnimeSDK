#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyProgressRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAIMLDJDHHK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D21C410)
#define OAIMLDJDHHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D21CF60)
#define OAIMLDJDHHK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D21C7B0)
#define OAIMLDJDHHK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D21C450)
#define OAIMLDJDHHK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D21CCA0)
#define OAIMLDJDHHK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D21C850)
#define OAIMLDJDHHK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D21C8A0)
#define OAIMLDJDHHK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D21C680)
#define OAIMLDJDHHK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D21CC40)
#define OAIMLDJDHHK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D21CE10)
#define OAIMLDJDHHK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D21C710)
#define OAIMLDJDHHK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D21CBC0)

inline static constexpr unsigned int OAIMLDJDHHK_TypeDefinitionIndex = 15336;

	class OAIMLDJDHHK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OAIMLDJDHHK")->GetStaticField(0x43030);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>**)UnitySDK::FromName("", "OAIMLDJDHHK")->GetStaticField(0x43038);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OAIMLDJDHHK")->GetStaticField(0x43040);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OAIMLDJDHHK")->GetStaticField(0xFE90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OAIMLDJDHHK")->GetStaticField(0xFE91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAIMLDJDHHK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAIMLDJDHHK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAIMLDJDHHK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAIMLDJDHHK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OAIMLDJDHHK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAIMLDJDHHK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OAIMLDJDHHK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyProgressRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyProgressRow*))((::PBYTE)hIl2Cpp + OAIMLDJDHHK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>*(*)())((::PBYTE)hIl2Cpp + OAIMLDJDHHK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAIMLDJDHHK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyProgressRow*>(*)())((::PBYTE)hIl2Cpp + OAIMLDJDHHK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyProgressRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyProgressRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OAIMLDJDHHK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

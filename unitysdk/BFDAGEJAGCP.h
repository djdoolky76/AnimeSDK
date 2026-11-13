#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitSPBattleAreaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFDAGEJAGCP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F182650)
#define BFDAGEJAGCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F182C50)
#define BFDAGEJAGCP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F1827C0)
#define BFDAGEJAGCP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F182080)
#define BFDAGEJAGCP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F182310)
#define BFDAGEJAGCP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F182860)
#define BFDAGEJAGCP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F1828B0)
#define BFDAGEJAGCP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F182690)
#define BFDAGEJAGCP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F1822B0)
#define BFDAGEJAGCP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F182480)
#define BFDAGEJAGCP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F182720)
#define BFDAGEJAGCP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F182000)

inline static constexpr unsigned int BFDAGEJAGCP_TypeDefinitionIndex = 13810;

	class BFDAGEJAGCP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BFDAGEJAGCP")->GetStaticField(0x47560);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BFDAGEJAGCP")->GetStaticField(0x47568);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>**)UnitySDK::FromName("", "BFDAGEJAGCP")->GetStaticField(0x47570);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BFDAGEJAGCP")->GetStaticField(0xDE10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BFDAGEJAGCP")->GetStaticField(0xDE11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDAGEJAGCP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>*(*)())((::PBYTE)hIl2Cpp + BFDAGEJAGCP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFDAGEJAGCP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>(*)())((::PBYTE)hIl2Cpp + BFDAGEJAGCP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitSPBattleAreaRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightTraitSPBattleAreaRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BFDAGEJAGCP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFDAGEJAGCP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDAGEJAGCP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDAGEJAGCP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BFDAGEJAGCP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFDAGEJAGCP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BFDAGEJAGCP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitSPBattleAreaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitSPBattleAreaRow*))((::PBYTE)hIl2Cpp + BFDAGEJAGCP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

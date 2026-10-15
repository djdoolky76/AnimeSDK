#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidNpcMonsterOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCAJNBNNACE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA08D00)
#define CCAJNBNNACE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA09300)
#define CCAJNBNNACE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA08E70)
#define CCAJNBNNACE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA08730)
#define CCAJNBNNACE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA089C0)
#define CCAJNBNNACE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA08F10)
#define CCAJNBNNACE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA08F60)
#define CCAJNBNNACE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA08D40)
#define CCAJNBNNACE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA08960)
#define CCAJNBNNACE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA08B30)
#define CCAJNBNNACE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA08DD0)
#define CCAJNBNNACE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA086B0)

inline static constexpr unsigned int CCAJNBNNACE_TypeDefinitionIndex = 14604;

	class CCAJNBNNACE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CCAJNBNNACE")->GetStaticField(0x3B760);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CCAJNBNNACE")->GetStaticField(0x3B768);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>**)UnitySDK::FromName("", "CCAJNBNNACE")->GetStaticField(0x3B770);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CCAJNBNNACE")->GetStaticField(0xCA70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CCAJNBNNACE")->GetStaticField(0xCA71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCAJNBNNACE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + CCAJNBNNACE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCAJNBNNACE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidNpcMonsterOverrideRow*>(*)())((::PBYTE)hIl2Cpp + CCAJNBNNACE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RaidNpcMonsterOverrideRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RaidNpcMonsterOverrideRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CCAJNBNNACE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCAJNBNNACE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCAJNBNNACE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCAJNBNNACE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CCAJNBNNACE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCAJNBNNACE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CCAJNBNNACE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RaidNpcMonsterOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RaidNpcMonsterOverrideRow*))((::PBYTE)hIl2Cpp + CCAJNBNNACE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

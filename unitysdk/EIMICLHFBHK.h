#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameRewardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIMICLHFBHK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD8B8F0)
#define EIMICLHFBHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD8BEC0)
#define EIMICLHFBHK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD8BA60)
#define EIMICLHFBHK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD8B360)
#define EIMICLHFBHK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD8B5F0)
#define EIMICLHFBHK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD8BB00)
#define EIMICLHFBHK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD8BB50)
#define EIMICLHFBHK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD8B930)
#define EIMICLHFBHK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD8B590)
#define EIMICLHFBHK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD8B760)
#define EIMICLHFBHK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD8B9C0)
#define EIMICLHFBHK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD8B2E0)

	class EIMICLHFBHK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>**)UnitySDK::FromName("", "EIMICLHFBHK")->GetStaticField(0x54230);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EIMICLHFBHK")->GetStaticField(0x54238);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EIMICLHFBHK")->GetStaticField(0x54240);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EIMICLHFBHK")->GetStaticField(0x12AD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EIMICLHFBHK")->GetStaticField(0x12AD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMICLHFBHK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>*(*)())((::PBYTE)hIl2Cpp + EIMICLHFBHK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIMICLHFBHK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>(*)())((::PBYTE)hIl2Cpp + EIMICLHFBHK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesGameRewardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesGameRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EIMICLHFBHK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIMICLHFBHK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMICLHFBHK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMICLHFBHK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EIMICLHFBHK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMICLHFBHK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EIMICLHFBHK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesGameRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesGameRewardRow*))((::PBYTE)hIl2Cpp + EIMICLHFBHK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

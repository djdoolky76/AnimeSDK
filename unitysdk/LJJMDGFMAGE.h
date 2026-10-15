#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameRewardPoolRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJJMDGFMAGE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D69F0)
#define LJJMDGFMAGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D6FB0)
#define LJJMDGFMAGE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D6B60)
#define LJJMDGFMAGE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D6460)
#define LJJMDGFMAGE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D66F0)
#define LJJMDGFMAGE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D6C00)
#define LJJMDGFMAGE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D6C50)
#define LJJMDGFMAGE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D6A30)
#define LJJMDGFMAGE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D6690)
#define LJJMDGFMAGE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D6820)
#define LJJMDGFMAGE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D6AC0)
#define LJJMDGFMAGE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D63E0)

inline static constexpr unsigned int LJJMDGFMAGE_TypeDefinitionIndex = 12245;

	class LJJMDGFMAGE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LJJMDGFMAGE")->GetStaticField(0x3CCD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJJMDGFMAGE")->GetStaticField(0x3CCD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>**)UnitySDK::FromName("", "LJJMDGFMAGE")->GetStaticField(0x3CCE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJJMDGFMAGE")->GetStaticField(0xC210);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJJMDGFMAGE")->GetStaticField(0xC211);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJMDGFMAGE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>*(*)())((::PBYTE)hIl2Cpp + LJJMDGFMAGE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJJMDGFMAGE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>(*)())((::PBYTE)hIl2Cpp + LJJMDGFMAGE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesGameRewardPoolRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PlanetFesGameRewardPoolRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LJJMDGFMAGE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJJMDGFMAGE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJMDGFMAGE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJMDGFMAGE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LJJMDGFMAGE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJJMDGFMAGE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LJJMDGFMAGE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesGameRewardPoolRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesGameRewardPoolRow*))((::PBYTE)hIl2Cpp + LJJMDGFMAGE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

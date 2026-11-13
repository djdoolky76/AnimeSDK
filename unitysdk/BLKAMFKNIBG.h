#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEquipEffectConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLKAMFKNIBG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EAED8D0)
#define BLKAMFKNIBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEDEA0)
#define BLKAMFKNIBG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EAEDA40)
#define BLKAMFKNIBG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EAED340)
#define BLKAMFKNIBG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EAED5D0)
#define BLKAMFKNIBG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EAEDAE0)
#define BLKAMFKNIBG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EAEDB30)
#define BLKAMFKNIBG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EAED910)
#define BLKAMFKNIBG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EAED570)
#define BLKAMFKNIBG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EAED740)
#define BLKAMFKNIBG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EAED9A0)
#define BLKAMFKNIBG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EAED2C0)

inline static constexpr unsigned int BLKAMFKNIBG_TypeDefinitionIndex = 13844;

	class BLKAMFKNIBG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipEffectConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipEffectConfigRow*>**)UnitySDK::FromName("", "BLKAMFKNIBG")->GetStaticField(0x4C490);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BLKAMFKNIBG")->GetStaticField(0x4C498);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BLKAMFKNIBG")->GetStaticField(0x4C4A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLKAMFKNIBG")->GetStaticField(0xE8C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BLKAMFKNIBG")->GetStaticField(0xE8C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLKAMFKNIBG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipEffectConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipEffectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BLKAMFKNIBG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLKAMFKNIBG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipEffectConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipEffectConfigRow*>(*)())((::PBYTE)hIl2Cpp + BLKAMFKNIBG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitEquipEffectConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitEquipEffectConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BLKAMFKNIBG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLKAMFKNIBG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLKAMFKNIBG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLKAMFKNIBG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BLKAMFKNIBG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLKAMFKNIBG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BLKAMFKNIBG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitEquipEffectConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitEquipEffectConfigRow*))((::PBYTE)hIl2Cpp + BLKAMFKNIBG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

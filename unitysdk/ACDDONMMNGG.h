#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedSeasonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACDDONMMNGG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC750B0)
#define ACDDONMMNGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC75AC0)
#define ACDDONMMNGG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC75220)
#define ACDDONMMNGG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC74B20)
#define ACDDONMMNGG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC74DB0)
#define ACDDONMMNGG_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1CC75A80)
#define ACDDONMMNGG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC752C0)
#define ACDDONMMNGG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC75310)
#define ACDDONMMNGG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC750F0)
#define ACDDONMMNGG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC74D50)
#define ACDDONMMNGG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC74F20)
#define ACDDONMMNGG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC75180)
#define ACDDONMMNGG_PMCANNHCOCK_OFFSET UNITYSDK_OFFSET(0x1CC75680)
#define ACDDONMMNGG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC74AA0)

inline static constexpr unsigned int ACDDONMMNGG_TypeDefinitionIndex = 12794;

	class ACDDONMMNGG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarEnhancedSeasonRow*>** StaticGet_ELDLAEBHHPP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarEnhancedSeasonRow*>**)UnitySDK::FromName("", "ACDDONMMNGG")->GetStaticField(0x3D890);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSeasonRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSeasonRow*>**)UnitySDK::FromName("", "ACDDONMMNGG")->GetStaticField(0x3D898);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ACDDONMMNGG")->GetStaticField(0x3D8A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ACDDONMMNGG")->GetStaticField(0x3D8A8);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ACDDONMMNGG")->GetStaticField(0xE790);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ACDDONMMNGG")->GetStaticField(0xE791);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACDDONMMNGG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSeasonRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSeasonRow*>*(*)())((::PBYTE)hIl2Cpp + ACDDONMMNGG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACDDONMMNGG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSeasonRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSeasonRow*>(*)())((::PBYTE)hIl2Cpp + ACDDONMMNGG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarEnhancedSeasonRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarEnhancedSeasonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ACDDONMMNGG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACDDONMMNGG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACDDONMMNGG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACDDONMMNGG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ACDDONMMNGG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACDDONMMNGG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ACDDONMMNGG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarEnhancedSeasonRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedSeasonRow*))((::PBYTE)hIl2Cpp + ACDDONMMNGG_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarEnhancedSeasonRow* PMCANNHCOCK(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarEnhancedSeasonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ACDDONMMNGG_PMCANNHCOCK_OFFSET))(a1);
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACDDONMMNGG_HFBAFEEPOLN_OFFSET))();
		}

	};

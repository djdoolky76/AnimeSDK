#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonAugmentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EINDOIIAMOB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD5E620)
#define EINDOIIAMOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5EC20)
#define EINDOIIAMOB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD5E790)
#define EINDOIIAMOB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5E050)
#define EINDOIIAMOB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5E2E0)
#define EINDOIIAMOB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD5E830)
#define EINDOIIAMOB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD5E880)
#define EINDOIIAMOB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD5E660)
#define EINDOIIAMOB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5E280)
#define EINDOIIAMOB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5E450)
#define EINDOIIAMOB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD5E6F0)
#define EINDOIIAMOB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5DFD0)

inline static constexpr unsigned int EINDOIIAMOB_TypeDefinitionIndex = 13406;

	class EINDOIIAMOB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EINDOIIAMOB")->GetStaticField(0x4DEC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EINDOIIAMOB")->GetStaticField(0x4DEC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*>**)UnitySDK::FromName("", "EINDOIIAMOB")->GetStaticField(0x4DED0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EINDOIIAMOB")->GetStaticField(0x11D00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EINDOIIAMOB")->GetStaticField(0x11D01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EINDOIIAMOB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EINDOIIAMOB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EINDOIIAMOB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*>(*)())((::PBYTE)hIl2Cpp + EINDOIIAMOB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonAugmentConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSeasonAugmentConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EINDOIIAMOB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EINDOIIAMOB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EINDOIIAMOB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EINDOIIAMOB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EINDOIIAMOB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EINDOIIAMOB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EINDOIIAMOB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonAugmentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonAugmentConfigRow*))((::PBYTE)hIl2Cpp + EINDOIIAMOB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

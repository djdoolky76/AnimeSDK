#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class QuestKeyPointRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PADDGMDLNDD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D290EB0)
#define PADDGMDLNDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D291480)
#define PADDGMDLNDD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D291020)
#define PADDGMDLNDD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D290920)
#define PADDGMDLNDD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D290BB0)
#define PADDGMDLNDD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2910C0)
#define PADDGMDLNDD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D291110)
#define PADDGMDLNDD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D290EF0)
#define PADDGMDLNDD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D290B50)
#define PADDGMDLNDD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D290D20)
#define PADDGMDLNDD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D290F80)
#define PADDGMDLNDD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2908A0)

inline static constexpr unsigned int PADDGMDLNDD_TypeDefinitionIndex = 14532;

	class PADDGMDLNDD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PADDGMDLNDD")->GetStaticField(0x4C860);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PADDGMDLNDD")->GetStaticField(0x4C868);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>**)UnitySDK::FromName("", "PADDGMDLNDD")->GetStaticField(0x4C870);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PADDGMDLNDD")->GetStaticField(0x117F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PADDGMDLNDD")->GetStaticField(0x117F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PADDGMDLNDD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>*(*)())((::PBYTE)hIl2Cpp + PADDGMDLNDD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PADDGMDLNDD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestKeyPointRewardRow*>(*)())((::PBYTE)hIl2Cpp + PADDGMDLNDD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::QuestKeyPointRewardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::QuestKeyPointRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PADDGMDLNDD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PADDGMDLNDD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PADDGMDLNDD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PADDGMDLNDD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PADDGMDLNDD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PADDGMDLNDD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PADDGMDLNDD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::QuestKeyPointRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::QuestKeyPointRewardRow*))((::PBYTE)hIl2Cpp + PADDGMDLNDD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

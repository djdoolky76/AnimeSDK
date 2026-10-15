#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivitySummonLevelRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOCOAHDEJGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CECE760)
#define HOCOAHDEJGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CECED20)
#define HOCOAHDEJGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CECE8D0)
#define HOCOAHDEJGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CECE1C0)
#define HOCOAHDEJGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CECE450)
#define HOCOAHDEJGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CECE970)
#define HOCOAHDEJGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CECE9C0)
#define HOCOAHDEJGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CECE7A0)
#define HOCOAHDEJGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CECE3F0)
#define HOCOAHDEJGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CECE5C0)
#define HOCOAHDEJGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CECE830)
#define HOCOAHDEJGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CECE140)

inline static constexpr unsigned int HOCOAHDEJGM_TypeDefinitionIndex = 12409;

	class HOCOAHDEJGM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HOCOAHDEJGM")->GetStaticField(0x20140);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>**)UnitySDK::FromName("", "HOCOAHDEJGM")->GetStaticField(0x20148);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HOCOAHDEJGM")->GetStaticField(0x20150);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HOCOAHDEJGM")->GetStaticField(0x7510);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HOCOAHDEJGM")->GetStaticField(0x7511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOCOAHDEJGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>*(*)())((::PBYTE)hIl2Cpp + HOCOAHDEJGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOCOAHDEJGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>(*)())((::PBYTE)hIl2Cpp + HOCOAHDEJGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivitySummonLevelRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2)
		{
			return ((::RPG::GameCore::ActivitySummonLevelRow*(*)(::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + HOCOAHDEJGM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOCOAHDEJGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOCOAHDEJGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOCOAHDEJGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOCOAHDEJGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOCOAHDEJGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HOCOAHDEJGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivitySummonLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivitySummonLevelRow*))((::PBYTE)hIl2Cpp + HOCOAHDEJGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

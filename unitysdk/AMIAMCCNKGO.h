#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicDifficultyDropRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMIAMCCNKGO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCDEE70)
#define AMIAMCCNKGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCDF470)
#define AMIAMCCNKGO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCDEFE0)
#define AMIAMCCNKGO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCDE8A0)
#define AMIAMCCNKGO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCDEB30)
#define AMIAMCCNKGO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCDF080)
#define AMIAMCCNKGO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCDF0D0)
#define AMIAMCCNKGO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCDEEB0)
#define AMIAMCCNKGO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCDEAD0)
#define AMIAMCCNKGO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCDECA0)
#define AMIAMCCNKGO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCDEF40)
#define AMIAMCCNKGO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCDE820)

	class AMIAMCCNKGO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AMIAMCCNKGO")->GetStaticField(0x3BA60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AMIAMCCNKGO")->GetStaticField(0x3BA68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyDropRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyDropRow*>**)UnitySDK::FromName("", "AMIAMCCNKGO")->GetStaticField(0x3BA70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AMIAMCCNKGO")->GetStaticField(0xCB40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AMIAMCCNKGO")->GetStaticField(0xCB41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIAMCCNKGO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyDropRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyDropRow*>*(*)())((::PBYTE)hIl2Cpp + AMIAMCCNKGO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMIAMCCNKGO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyDropRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicDifficultyDropRow*>(*)())((::PBYTE)hIl2Cpp + AMIAMCCNKGO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicDifficultyDropRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueMagicDifficultyDropRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMIAMCCNKGO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMIAMCCNKGO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIAMCCNKGO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIAMCCNKGO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AMIAMCCNKGO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AMIAMCCNKGO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AMIAMCCNKGO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicDifficultyDropRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicDifficultyDropRow*))((::PBYTE)hIl2Cpp + AMIAMCCNKGO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

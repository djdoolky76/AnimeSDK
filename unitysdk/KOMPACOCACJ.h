#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterGuidePhaseConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOMPACOCACJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C52D0)
#define KOMPACOCACJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C5850)
#define KOMPACOCACJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C5440)
#define KOMPACOCACJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C4D80)
#define KOMPACOCACJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C5010)
#define KOMPACOCACJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C54E0)
#define KOMPACOCACJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C5530)
#define KOMPACOCACJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C5310)
#define KOMPACOCACJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C4FB0)
#define KOMPACOCACJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C5180)
#define KOMPACOCACJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C53A0)
#define KOMPACOCACJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C4D00)

inline static constexpr unsigned int KOMPACOCACJ_TypeDefinitionIndex = 14202;

	class KOMPACOCACJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>**)UnitySDK::FromName("", "KOMPACOCACJ")->GetStaticField(0x39C80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KOMPACOCACJ")->GetStaticField(0x39C88);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KOMPACOCACJ")->GetStaticField(0x39C90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KOMPACOCACJ")->GetStaticField(0xC4F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KOMPACOCACJ")->GetStaticField(0xC4F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOMPACOCACJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KOMPACOCACJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOMPACOCACJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>(*)())((::PBYTE)hIl2Cpp + KOMPACOCACJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonsterGuidePhaseConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterGuidePhaseConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KOMPACOCACJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOMPACOCACJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOMPACOCACJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOMPACOCACJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KOMPACOCACJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOMPACOCACJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KOMPACOCACJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonsterGuidePhaseConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterGuidePhaseConfigRow*))((::PBYTE)hIl2Cpp + KOMPACOCACJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

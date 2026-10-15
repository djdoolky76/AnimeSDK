#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingStoryLineBonusRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFFFPHNJJLO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBDD0D0)
#define CFFFPHNJJLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBDD650)
#define CFFFPHNJJLO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBDD240)
#define CFFFPHNJJLO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBDCB80)
#define CFFFPHNJJLO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBDCE10)
#define CFFFPHNJJLO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBDD2E0)
#define CFFFPHNJJLO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBDD330)
#define CFFFPHNJJLO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBDD110)
#define CFFFPHNJJLO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBDCDB0)
#define CFFFPHNJJLO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBDCF40)
#define CFFFPHNJJLO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBDD1A0)
#define CFFFPHNJJLO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBDCB00)

inline static constexpr unsigned int CFFFPHNJJLO_TypeDefinitionIndex = 12457;

	class CFFFPHNJJLO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>**)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0x3C900);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0x3C908);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0x3C910);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0xC160);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0xC161);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFFFPHNJJLO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>*(*)())((::PBYTE)hIl2Cpp + CFFFPHNJJLO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CFFFPHNJJLO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>(*)())((::PBYTE)hIl2Cpp + CFFFPHNJJLO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingStoryLineBonusRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingStoryLineBonusRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CFFFPHNJJLO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CFFFPHNJJLO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFFFPHNJJLO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFFFPHNJJLO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CFFFPHNJJLO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFFFPHNJJLO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CFFFPHNJJLO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingStoryLineBonusRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingStoryLineBonusRow*))((::PBYTE)hIl2Cpp + CFFFPHNJJLO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

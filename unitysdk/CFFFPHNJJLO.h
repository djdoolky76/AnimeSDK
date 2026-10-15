#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingStoryLineBonusRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFFFPHNJJLO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC0A980)
#define CFFFPHNJJLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC0AF00)
#define CFFFPHNJJLO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC0AAF0)
#define CFFFPHNJJLO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC0A430)
#define CFFFPHNJJLO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC0A6C0)
#define CFFFPHNJJLO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC0AB90)
#define CFFFPHNJJLO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC0ABE0)
#define CFFFPHNJJLO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC0A9C0)
#define CFFFPHNJJLO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC0A660)
#define CFFFPHNJJLO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC0A7F0)
#define CFFFPHNJJLO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC0AA50)
#define CFFFPHNJJLO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC0A3B0)

inline static constexpr unsigned int CFFFPHNJJLO_TypeDefinitionIndex = 12457;

	class CFFFPHNJJLO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*>**)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0x42C50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0x42C58);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0x42C60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0x100E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CFFFPHNJJLO")->GetStaticField(0x100E1);
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

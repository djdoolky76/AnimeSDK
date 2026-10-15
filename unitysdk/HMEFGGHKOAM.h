#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SilverWolfQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMEFGGHKOAM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEC3400)
#define HMEFGGHKOAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEC39D0)
#define HMEFGGHKOAM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEC3570)
#define HMEFGGHKOAM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEC2E70)
#define HMEFGGHKOAM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEC3100)
#define HMEFGGHKOAM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEC3610)
#define HMEFGGHKOAM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEC3660)
#define HMEFGGHKOAM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEC3440)
#define HMEFGGHKOAM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEC30A0)
#define HMEFGGHKOAM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEC3270)
#define HMEFGGHKOAM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEC34D0)
#define HMEFGGHKOAM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEC2DF0)

inline static constexpr unsigned int HMEFGGHKOAM_TypeDefinitionIndex = 12354;

	class HMEFGGHKOAM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HMEFGGHKOAM")->GetStaticField(0x1F2D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfQuestConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfQuestConfigRow*>**)UnitySDK::FromName("", "HMEFGGHKOAM")->GetStaticField(0x1F2D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HMEFGGHKOAM")->GetStaticField(0x1F2E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMEFGGHKOAM")->GetStaticField(0x71D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HMEFGGHKOAM")->GetStaticField(0x71D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMEFGGHKOAM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfQuestConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HMEFGGHKOAM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMEFGGHKOAM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfQuestConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + HMEFGGHKOAM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SilverWolfQuestConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SilverWolfQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HMEFGGHKOAM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMEFGGHKOAM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMEFGGHKOAM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMEFGGHKOAM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HMEFGGHKOAM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMEFGGHKOAM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HMEFGGHKOAM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SilverWolfQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SilverWolfQuestConfigRow*))((::PBYTE)hIl2Cpp + HMEFGGHKOAM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

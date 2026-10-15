#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeDialogueRuleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPDHGBEBNJN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEFE210)
#define IPDHGBEBNJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFE7E0)
#define IPDHGBEBNJN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEFE380)
#define IPDHGBEBNJN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEFDC80)
#define IPDHGBEBNJN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEFDF10)
#define IPDHGBEBNJN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEFE420)
#define IPDHGBEBNJN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEFE470)
#define IPDHGBEBNJN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEFE250)
#define IPDHGBEBNJN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEFDEB0)
#define IPDHGBEBNJN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEFE080)
#define IPDHGBEBNJN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEFE2E0)
#define IPDHGBEBNJN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEFDC00)

inline static constexpr unsigned int IPDHGBEBNJN_TypeDefinitionIndex = 12938;

	class IPDHGBEBNJN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>**)UnitySDK::FromName("", "IPDHGBEBNJN")->GetStaticField(0x24010);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPDHGBEBNJN")->GetStaticField(0x24018);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPDHGBEBNJN")->GetStaticField(0x24020);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPDHGBEBNJN")->GetStaticField(0x7CA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPDHGBEBNJN")->GetStaticField(0x7CA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPDHGBEBNJN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>*(*)())((::PBYTE)hIl2Cpp + IPDHGBEBNJN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPDHGBEBNJN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeDialogueRuleRow*>(*)())((::PBYTE)hIl2Cpp + IPDHGBEBNJN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeDialogueRuleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeDialogueRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPDHGBEBNJN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPDHGBEBNJN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPDHGBEBNJN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPDHGBEBNJN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPDHGBEBNJN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPDHGBEBNJN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPDHGBEBNJN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeDialogueRuleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeDialogueRuleRow*))((::PBYTE)hIl2Cpp + IPDHGBEBNJN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

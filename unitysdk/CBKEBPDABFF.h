#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBKEBPDABFF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9D7200)
#define CBKEBPDABFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9D77D0)
#define CBKEBPDABFF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9D7370)
#define CBKEBPDABFF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9D6C70)
#define CBKEBPDABFF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9D6F00)
#define CBKEBPDABFF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9D7410)
#define CBKEBPDABFF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9D7460)
#define CBKEBPDABFF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9D7240)
#define CBKEBPDABFF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9D6EA0)
#define CBKEBPDABFF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9D7070)
#define CBKEBPDABFF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9D72D0)
#define CBKEBPDABFF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9D6BF0)

inline static constexpr unsigned int CBKEBPDABFF_TypeDefinitionIndex = 12788;

	class CBKEBPDABFF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0x38E50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0x38E58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>**)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0x38E60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0xB7D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0xB7D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBKEBPDABFF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>*(*)())((::PBYTE)hIl2Cpp + CBKEBPDABFF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBKEBPDABFF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>(*)())((::PBYTE)hIl2Cpp + CBKEBPDABFF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarEnhancedSkillRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarEnhancedSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CBKEBPDABFF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBKEBPDABFF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBKEBPDABFF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBKEBPDABFF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CBKEBPDABFF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CBKEBPDABFF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CBKEBPDABFF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarEnhancedSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedSkillRow*))((::PBYTE)hIl2Cpp + CBKEBPDABFF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedSkillRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBKEBPDABFF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA04AE0)
#define CBKEBPDABFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA050B0)
#define CBKEBPDABFF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA04C50)
#define CBKEBPDABFF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA04550)
#define CBKEBPDABFF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA047E0)
#define CBKEBPDABFF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA04CF0)
#define CBKEBPDABFF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA04D40)
#define CBKEBPDABFF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA04B20)
#define CBKEBPDABFF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA04780)
#define CBKEBPDABFF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA04950)
#define CBKEBPDABFF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA04BB0)
#define CBKEBPDABFF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA044D0)

inline static constexpr unsigned int CBKEBPDABFF_TypeDefinitionIndex = 12788;

	class CBKEBPDABFF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillRow*>**)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0x3B3C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0x3B3C8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0x3B3D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0xC970);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CBKEBPDABFF")->GetStaticField(0xC971);
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

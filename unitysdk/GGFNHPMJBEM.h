#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSkillLinkRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGFNHPMJBEM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE3FB00)
#define GGFNHPMJBEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE400D0)
#define GGFNHPMJBEM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE3FC70)
#define GGFNHPMJBEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE3F570)
#define GGFNHPMJBEM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE3F800)
#define GGFNHPMJBEM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE3FD10)
#define GGFNHPMJBEM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE3FD60)
#define GGFNHPMJBEM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE3FB40)
#define GGFNHPMJBEM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE3F7A0)
#define GGFNHPMJBEM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE3F970)
#define GGFNHPMJBEM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE3FBD0)
#define GGFNHPMJBEM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE3F4F0)

inline static constexpr unsigned int GGFNHPMJBEM_TypeDefinitionIndex = 12772;

	class GGFNHPMJBEM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>**)UnitySDK::FromName("", "GGFNHPMJBEM")->GetStaticField(0x173E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGFNHPMJBEM")->GetStaticField(0x173E8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GGFNHPMJBEM")->GetStaticField(0x173F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGFNHPMJBEM")->GetStaticField(0x5740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGFNHPMJBEM")->GetStaticField(0x5741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGFNHPMJBEM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>*(*)())((::PBYTE)hIl2Cpp + GGFNHPMJBEM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGFNHPMJBEM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillLinkRow*>(*)())((::PBYTE)hIl2Cpp + GGFNHPMJBEM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSkillLinkRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarSkillLinkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGFNHPMJBEM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGFNHPMJBEM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGFNHPMJBEM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGFNHPMJBEM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GGFNHPMJBEM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGFNHPMJBEM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GGFNHPMJBEM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarSkillLinkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkillLinkRow*))((::PBYTE)hIl2Cpp + GGFNHPMJBEM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

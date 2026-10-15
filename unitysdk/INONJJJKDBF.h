#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedSkillTreeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INONJJJKDBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEFA630)
#define INONJJJKDBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFAC00)
#define INONJJJKDBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEFA7A0)
#define INONJJJKDBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEFA0A0)
#define INONJJJKDBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEFA330)
#define INONJJJKDBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEFA840)
#define INONJJJKDBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEFA890)
#define INONJJJKDBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEFA670)
#define INONJJJKDBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEFA2D0)
#define INONJJJKDBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEFA4A0)
#define INONJJJKDBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEFA700)
#define INONJJJKDBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEFA020)

inline static constexpr unsigned int INONJJJKDBF_TypeDefinitionIndex = 12790;

	class INONJJJKDBF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "INONJJJKDBF")->GetStaticField(0x23CF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>**)UnitySDK::FromName("", "INONJJJKDBF")->GetStaticField(0x23CF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "INONJJJKDBF")->GetStaticField(0x23D00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "INONJJJKDBF")->GetStaticField(0x7BC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "INONJJJKDBF")->GetStaticField(0x7BC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INONJJJKDBF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>*(*)())((::PBYTE)hIl2Cpp + INONJJJKDBF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INONJJJKDBF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>(*)())((::PBYTE)hIl2Cpp + INONJJJKDBF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarEnhancedSkillTreeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarEnhancedSkillTreeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INONJJJKDBF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INONJJJKDBF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INONJJJKDBF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INONJJJKDBF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INONJJJKDBF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + INONJJJKDBF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + INONJJJKDBF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarEnhancedSkillTreeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedSkillTreeRow*))((::PBYTE)hIl2Cpp + INONJJJKDBF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

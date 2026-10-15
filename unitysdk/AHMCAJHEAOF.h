#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleSkillDisplayConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHMCAJHEAOF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCC73C0)
#define AHMCAJHEAOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC79C0)
#define AHMCAJHEAOF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCC7530)
#define AHMCAJHEAOF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCC6DE0)
#define AHMCAJHEAOF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCC7070)
#define AHMCAJHEAOF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCC75D0)
#define AHMCAJHEAOF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCC7620)
#define AHMCAJHEAOF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCC7400)
#define AHMCAJHEAOF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCC7010)
#define AHMCAJHEAOF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCC71E0)
#define AHMCAJHEAOF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCC7490)
#define AHMCAJHEAOF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCC6D60)

inline static constexpr unsigned int AHMCAJHEAOF_TypeDefinitionIndex = 13524;

	class AHMCAJHEAOF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AHMCAJHEAOF")->GetStaticField(0x38CF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AHMCAJHEAOF")->GetStaticField(0x38CF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>**)UnitySDK::FromName("", "AHMCAJHEAOF")->GetStaticField(0x38D00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AHMCAJHEAOF")->GetStaticField(0xC1D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AHMCAJHEAOF")->GetStaticField(0xC1D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHMCAJHEAOF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AHMCAJHEAOF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHMCAJHEAOF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + AHMCAJHEAOF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GridFightPreset a2)
		{
			return ((::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + AHMCAJHEAOF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHMCAJHEAOF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHMCAJHEAOF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHMCAJHEAOF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AHMCAJHEAOF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AHMCAJHEAOF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AHMCAJHEAOF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleSkillDisplayConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*))((::PBYTE)hIl2Cpp + AHMCAJHEAOF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

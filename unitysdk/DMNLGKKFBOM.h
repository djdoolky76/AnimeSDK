#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterGuideSkillConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMNLGKKFBOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD1A5C0)
#define DMNLGKKFBOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD1AB40)
#define DMNLGKKFBOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD1A730)
#define DMNLGKKFBOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD1A070)
#define DMNLGKKFBOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD1A300)
#define DMNLGKKFBOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD1A7D0)
#define DMNLGKKFBOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD1A820)
#define DMNLGKKFBOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD1A600)
#define DMNLGKKFBOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD1A2A0)
#define DMNLGKKFBOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD1A470)
#define DMNLGKKFBOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD1A690)
#define DMNLGKKFBOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD19FF0)

inline static constexpr unsigned int DMNLGKKFBOM_TypeDefinitionIndex = 14205;

	class DMNLGKKFBOM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMNLGKKFBOM")->GetStaticField(0x49BD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillConfigRow*>**)UnitySDK::FromName("", "DMNLGKKFBOM")->GetStaticField(0x49BD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMNLGKKFBOM")->GetStaticField(0x49BE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMNLGKKFBOM")->GetStaticField(0x11020);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMNLGKKFBOM")->GetStaticField(0x11021);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMNLGKKFBOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DMNLGKKFBOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMNLGKKFBOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + DMNLGKKFBOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonsterGuideSkillConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterGuideSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DMNLGKKFBOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMNLGKKFBOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMNLGKKFBOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMNLGKKFBOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DMNLGKKFBOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMNLGKKFBOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DMNLGKKFBOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonsterGuideSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterGuideSkillConfigRow*))((::PBYTE)hIl2Cpp + DMNLGKKFBOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

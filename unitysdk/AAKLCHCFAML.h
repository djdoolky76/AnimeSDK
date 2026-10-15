#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivitySummonSkillRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAKLCHCFAML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC98790)
#define AAKLCHCFAML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC98D60)
#define AAKLCHCFAML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC98900)
#define AAKLCHCFAML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC98200)
#define AAKLCHCFAML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC98490)
#define AAKLCHCFAML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC989A0)
#define AAKLCHCFAML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC989F0)
#define AAKLCHCFAML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC987D0)
#define AAKLCHCFAML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC98430)
#define AAKLCHCFAML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC98600)
#define AAKLCHCFAML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC98860)
#define AAKLCHCFAML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC98180)

inline static constexpr unsigned int AAKLCHCFAML_TypeDefinitionIndex = 12412;

	class AAKLCHCFAML : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AAKLCHCFAML")->GetStaticField(0x35740);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AAKLCHCFAML")->GetStaticField(0x35748);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonSkillRow*>**)UnitySDK::FromName("", "AAKLCHCFAML")->GetStaticField(0x35750);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAKLCHCFAML")->GetStaticField(0xB420);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AAKLCHCFAML")->GetStaticField(0xB421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKLCHCFAML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonSkillRow*>*(*)())((::PBYTE)hIl2Cpp + AAKLCHCFAML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAKLCHCFAML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonSkillRow*>(*)())((::PBYTE)hIl2Cpp + AAKLCHCFAML_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivitySummonSkillRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivitySummonSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AAKLCHCFAML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAKLCHCFAML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKLCHCFAML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKLCHCFAML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AAKLCHCFAML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAKLCHCFAML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AAKLCHCFAML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivitySummonSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivitySummonSkillRow*))((::PBYTE)hIl2Cpp + AAKLCHCFAML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

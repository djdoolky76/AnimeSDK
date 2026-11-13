#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesItemRuleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDAGDECIIHK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E89CB00)
#define NDAGDECIIHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89D0D0)
#define NDAGDECIIHK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E89CC70)
#define NDAGDECIIHK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E89C570)
#define NDAGDECIIHK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E89C800)
#define NDAGDECIIHK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E89CD10)
#define NDAGDECIIHK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E89CD60)
#define NDAGDECIIHK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E89CB40)
#define NDAGDECIIHK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E89C7A0)
#define NDAGDECIIHK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E89C970)
#define NDAGDECIIHK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E89CBD0)
#define NDAGDECIIHK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E89C4F0)

inline static constexpr unsigned int NDAGDECIIHK_TypeDefinitionIndex = 11121;

	class NDAGDECIIHK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NDAGDECIIHK")->GetStaticField(0x4E4F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NDAGDECIIHK")->GetStaticField(0x4E4F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*>**)UnitySDK::FromName("", "NDAGDECIIHK")->GetStaticField(0x4E500);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NDAGDECIIHK")->GetStaticField(0x11280);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NDAGDECIIHK")->GetStaticField(0x11281);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDAGDECIIHK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + NDAGDECIIHK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDAGDECIIHK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*>(*)())((::PBYTE)hIl2Cpp + NDAGDECIIHK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingFesItemRuleGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingFesItemRuleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NDAGDECIIHK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDAGDECIIHK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDAGDECIIHK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDAGDECIIHK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NDAGDECIIHK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDAGDECIIHK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NDAGDECIIHK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingFesItemRuleGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingFesItemRuleGroupRow*))((::PBYTE)hIl2Cpp + NDAGDECIIHK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

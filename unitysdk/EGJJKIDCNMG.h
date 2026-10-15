#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCombinationBonusConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGJJKIDCNMG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD7CEF0)
#define EGJJKIDCNMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7D4C0)
#define EGJJKIDCNMG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD7D060)
#define EGJJKIDCNMG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD7C960)
#define EGJJKIDCNMG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD7CBF0)
#define EGJJKIDCNMG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD7D100)
#define EGJJKIDCNMG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD7D150)
#define EGJJKIDCNMG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD7CF30)
#define EGJJKIDCNMG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD7CB90)
#define EGJJKIDCNMG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD7CD60)
#define EGJJKIDCNMG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD7CFC0)
#define EGJJKIDCNMG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD7C8E0)

inline static constexpr unsigned int EGJJKIDCNMG_TypeDefinitionIndex = 13419;

	class EGJJKIDCNMG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>**)UnitySDK::FromName("", "EGJJKIDCNMG")->GetStaticField(0x53DA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EGJJKIDCNMG")->GetStaticField(0x53DA8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EGJJKIDCNMG")->GetStaticField(0x53DB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EGJJKIDCNMG")->GetStaticField(0x129A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EGJJKIDCNMG")->GetStaticField(0x129A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJJKIDCNMG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EGJJKIDCNMG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGJJKIDCNMG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + EGJJKIDCNMG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightCombinationBonusConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightCombinationBonusConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EGJJKIDCNMG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGJJKIDCNMG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJJKIDCNMG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJJKIDCNMG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EGJJKIDCNMG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EGJJKIDCNMG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EGJJKIDCNMG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightCombinationBonusConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCombinationBonusConfigRow*))((::PBYTE)hIl2Cpp + EGJJKIDCNMG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

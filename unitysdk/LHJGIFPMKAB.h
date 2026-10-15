#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingPartnerAbilityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHJGIFPMKAB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C5270)
#define LHJGIFPMKAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C5840)
#define LHJGIFPMKAB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C53E0)
#define LHJGIFPMKAB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C4CE0)
#define LHJGIFPMKAB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C4F70)
#define LHJGIFPMKAB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C5480)
#define LHJGIFPMKAB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C54D0)
#define LHJGIFPMKAB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C52B0)
#define LHJGIFPMKAB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C4F10)
#define LHJGIFPMKAB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C50E0)
#define LHJGIFPMKAB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C5340)
#define LHJGIFPMKAB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C4C60)

inline static constexpr unsigned int LHJGIFPMKAB_TypeDefinitionIndex = 12438;

	class LHJGIFPMKAB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0x3B6B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*>**)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0x3B6B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0x3B6C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0xBF60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0xBF61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHJGIFPMKAB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*>*(*)())((::PBYTE)hIl2Cpp + LHJGIFPMKAB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHJGIFPMKAB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*>(*)())((::PBYTE)hIl2Cpp + LHJGIFPMKAB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingPartnerAbilityRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingPartnerAbilityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LHJGIFPMKAB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHJGIFPMKAB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHJGIFPMKAB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHJGIFPMKAB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LHJGIFPMKAB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHJGIFPMKAB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LHJGIFPMKAB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingPartnerAbilityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingPartnerAbilityRow*))((::PBYTE)hIl2Cpp + LHJGIFPMKAB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

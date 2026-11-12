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

#define LHJGIFPMKAB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2ED690)
#define LHJGIFPMKAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EDC60)
#define LHJGIFPMKAB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E2ED800)
#define LHJGIFPMKAB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E2ED100)
#define LHJGIFPMKAB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2ED390)
#define LHJGIFPMKAB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2ED8A0)
#define LHJGIFPMKAB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E2ED8F0)
#define LHJGIFPMKAB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E2ED6D0)
#define LHJGIFPMKAB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E2ED330)
#define LHJGIFPMKAB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2ED500)
#define LHJGIFPMKAB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2ED760)
#define LHJGIFPMKAB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2ED080)

inline static constexpr unsigned int LHJGIFPMKAB_TypeDefinitionIndex = 12505;

	class LHJGIFPMKAB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0x32AF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0x32AF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerAbilityRow*>**)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0x32B00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0xABC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHJGIFPMKAB")->GetStaticField(0xABC1);
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

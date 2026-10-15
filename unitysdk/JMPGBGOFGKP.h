#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeBenefitDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMPGBGOFGKP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D01EC80)
#define JMPGBGOFGKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D01F200)
#define JMPGBGOFGKP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D01EDF0)
#define JMPGBGOFGKP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D01E730)
#define JMPGBGOFGKP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D01E9C0)
#define JMPGBGOFGKP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D01EE90)
#define JMPGBGOFGKP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D01EEE0)
#define JMPGBGOFGKP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D01ECC0)
#define JMPGBGOFGKP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D01E960)
#define JMPGBGOFGKP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D01EB30)
#define JMPGBGOFGKP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D01ED50)
#define JMPGBGOFGKP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D01E6B0)

inline static constexpr unsigned int JMPGBGOFGKP_TypeDefinitionIndex = 14621;

	class JMPGBGOFGKP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JMPGBGOFGKP")->GetStaticField(0x2F9F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitDataRow*>**)UnitySDK::FromName("", "JMPGBGOFGKP")->GetStaticField(0x2F9F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JMPGBGOFGKP")->GetStaticField(0x2FA00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JMPGBGOFGKP")->GetStaticField(0x9D60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JMPGBGOFGKP")->GetStaticField(0x9D61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPGBGOFGKP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitDataRow*>*(*)())((::PBYTE)hIl2Cpp + JMPGBGOFGKP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMPGBGOFGKP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitDataRow*>(*)())((::PBYTE)hIl2Cpp + JMPGBGOFGKP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RechargeBenefitDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RechargeBenefitDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JMPGBGOFGKP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMPGBGOFGKP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPGBGOFGKP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPGBGOFGKP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JMPGBGOFGKP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JMPGBGOFGKP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JMPGBGOFGKP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RechargeBenefitDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RechargeBenefitDataRow*))((::PBYTE)hIl2Cpp + JMPGBGOFGKP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

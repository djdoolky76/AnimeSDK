#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFluteConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEAJEFBNNML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDB10E0)
#define FEAJEFBNNML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDB16B0)
#define FEAJEFBNNML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDB1250)
#define FEAJEFBNNML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDB0B50)
#define FEAJEFBNNML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDB0DE0)
#define FEAJEFBNNML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDB12F0)
#define FEAJEFBNNML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDB1340)
#define FEAJEFBNNML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDB1120)
#define FEAJEFBNNML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDB0D80)
#define FEAJEFBNNML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDB0F50)
#define FEAJEFBNNML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDB11B0)
#define FEAJEFBNNML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDB0AD0)

inline static constexpr unsigned int FEAJEFBNNML_TypeDefinitionIndex = 14117;

	class FEAJEFBNNML : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteConfigRow*>**)UnitySDK::FromName("", "FEAJEFBNNML")->GetStaticField(0x103A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FEAJEFBNNML")->GetStaticField(0x103A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FEAJEFBNNML")->GetStaticField(0x103B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FEAJEFBNNML")->GetStaticField(0x3470);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FEAJEFBNNML")->GetStaticField(0x3471);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEAJEFBNNML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FEAJEFBNNML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEAJEFBNNML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteConfigRow*>(*)())((::PBYTE)hIl2Cpp + FEAJEFBNNML_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FiveDimFluteConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FiveDimFluteConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FEAJEFBNNML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEAJEFBNNML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEAJEFBNNML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEAJEFBNNML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEAJEFBNNML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEAJEFBNNML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FEAJEFBNNML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FiveDimFluteConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimFluteConfigRow*))((::PBYTE)hIl2Cpp + FEAJEFBNNML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

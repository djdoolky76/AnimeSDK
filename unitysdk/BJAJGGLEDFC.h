#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyStaticConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJAJGGLEDFC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D80AE40)
#define BJAJGGLEDFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D80B990)
#define BJAJGGLEDFC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D80B1E0)
#define BJAJGGLEDFC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D80AE80)
#define BJAJGGLEDFC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D80B6D0)
#define BJAJGGLEDFC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D80B280)
#define BJAJGGLEDFC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D80B2D0)
#define BJAJGGLEDFC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D80B0B0)
#define BJAJGGLEDFC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D80B670)
#define BJAJGGLEDFC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D80B840)
#define BJAJGGLEDFC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D80B140)
#define BJAJGGLEDFC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D80B5F0)

inline static constexpr unsigned int BJAJGGLEDFC_TypeDefinitionIndex = 15355;

	class BJAJGGLEDFC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BJAJGGLEDFC")->GetStaticField(0x35CF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BJAJGGLEDFC")->GetStaticField(0x35CF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>**)UnitySDK::FromName("", "BJAJGGLEDFC")->GetStaticField(0x35D00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BJAJGGLEDFC")->GetStaticField(0xB5C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BJAJGGLEDFC")->GetStaticField(0xB5C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJAJGGLEDFC_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJAJGGLEDFC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJAJGGLEDFC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJAJGGLEDFC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BJAJGGLEDFC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJAJGGLEDFC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BJAJGGLEDFC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyStaticConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyStaticConfigRow*))((::PBYTE)hIl2Cpp + BJAJGGLEDFC_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BJAJGGLEDFC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJAJGGLEDFC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStaticConfigRow*>(*)())((::PBYTE)hIl2Cpp + BJAJGGLEDFC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyStaticConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyStaticConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BJAJGGLEDFC_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

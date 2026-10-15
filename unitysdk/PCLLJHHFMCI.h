#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyMtCategoryConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCLLJHHFMCI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2CB650)
#define PCLLJHHFMCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2CC230)
#define PCLLJHHFMCI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2CB9F0)
#define PCLLJHHFMCI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2CB690)
#define PCLLJHHFMCI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2CBF30)
#define PCLLJHHFMCI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2CBA90)
#define PCLLJHHFMCI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2CBAE0)
#define PCLLJHHFMCI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2CB8C0)
#define PCLLJHHFMCI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2CBED0)
#define PCLLJHHFMCI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2CC0A0)
#define PCLLJHHFMCI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2CB950)
#define PCLLJHHFMCI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2CBE50)

inline static constexpr unsigned int PCLLJHHFMCI_TypeDefinitionIndex = 15357;

	class PCLLJHHFMCI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PCLLJHHFMCI")->GetStaticField(0x3E490);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*>**)UnitySDK::FromName("", "PCLLJHHFMCI")->GetStaticField(0x3E498);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PCLLJHHFMCI")->GetStaticField(0x3E4A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PCLLJHHFMCI")->GetStaticField(0xD590);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PCLLJHHFMCI")->GetStaticField(0xD591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCLLJHHFMCI_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PCLLJHHFMCI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCLLJHHFMCI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCLLJHHFMCI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PCLLJHHFMCI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PCLLJHHFMCI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PCLLJHHFMCI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyMtCategoryConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyMtCategoryConfigRow*))((::PBYTE)hIl2Cpp + PCLLJHHFMCI_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PCLLJHHFMCI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PCLLJHHFMCI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*>(*)())((::PBYTE)hIl2Cpp + PCLLJHHFMCI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyMtCategoryConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyMtCategoryConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PCLLJHHFMCI_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

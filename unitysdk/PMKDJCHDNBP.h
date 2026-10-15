#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnLoginRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMKDJCHDNBP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2DCCB0)
#define PMKDJCHDNBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2DD280)
#define PMKDJCHDNBP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2DCE20)
#define PMKDJCHDNBP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2DC720)
#define PMKDJCHDNBP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2DC9B0)
#define PMKDJCHDNBP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2DCEC0)
#define PMKDJCHDNBP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2DCF10)
#define PMKDJCHDNBP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2DCCF0)
#define PMKDJCHDNBP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2DC950)
#define PMKDJCHDNBP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2DCB20)
#define PMKDJCHDNBP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2DCD80)
#define PMKDJCHDNBP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2DC6A0)

inline static constexpr unsigned int PMKDJCHDNBP_TypeDefinitionIndex = 14534;

	class PMKDJCHDNBP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PMKDJCHDNBP")->GetStaticField(0x51BE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMKDJCHDNBP")->GetStaticField(0x51BE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>**)UnitySDK::FromName("", "PMKDJCHDNBP")->GetStaticField(0x51BF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMKDJCHDNBP")->GetStaticField(0x126A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMKDJCHDNBP")->GetStaticField(0x126A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMKDJCHDNBP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>*(*)())((::PBYTE)hIl2Cpp + PMKDJCHDNBP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMKDJCHDNBP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>(*)())((::PBYTE)hIl2Cpp + PMKDJCHDNBP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnLoginRewardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnLoginRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PMKDJCHDNBP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMKDJCHDNBP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMKDJCHDNBP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMKDJCHDNBP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMKDJCHDNBP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMKDJCHDNBP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMKDJCHDNBP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerReturnLoginRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnLoginRewardRow*))((::PBYTE)hIl2Cpp + PMKDJCHDNBP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

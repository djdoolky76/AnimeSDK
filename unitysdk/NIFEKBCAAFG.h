#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyGridSpecialShowRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIFEKBCAAFG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E4400)
#define NIFEKBCAAFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E4FE0)
#define NIFEKBCAAFG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E47A0)
#define NIFEKBCAAFG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E4440)
#define NIFEKBCAAFG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E4CE0)
#define NIFEKBCAAFG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E4840)
#define NIFEKBCAAFG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E4890)
#define NIFEKBCAAFG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E4670)
#define NIFEKBCAAFG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E4C80)
#define NIFEKBCAAFG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E4E50)
#define NIFEKBCAAFG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E4700)
#define NIFEKBCAAFG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E4C00)

inline static constexpr unsigned int NIFEKBCAAFG_TypeDefinitionIndex = 15340;

	class NIFEKBCAAFG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0x40CF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridSpecialShowRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridSpecialShowRow*>**)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0x40CF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0x40D00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0xF720);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0xF721);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFEKBCAAFG_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIFEKBCAAFG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFEKBCAAFG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFEKBCAAFG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NIFEKBCAAFG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NIFEKBCAAFG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NIFEKBCAAFG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyGridSpecialShowRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyGridSpecialShowRow*))((::PBYTE)hIl2Cpp + NIFEKBCAAFG_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridSpecialShowRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridSpecialShowRow*>*(*)())((::PBYTE)hIl2Cpp + NIFEKBCAAFG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIFEKBCAAFG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridSpecialShowRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridSpecialShowRow*>(*)())((::PBYTE)hIl2Cpp + NIFEKBCAAFG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyGridSpecialShowRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyGridSpecialShowRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NIFEKBCAAFG_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

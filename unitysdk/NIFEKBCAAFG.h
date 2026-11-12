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

#define NIFEKBCAAFG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E427500)
#define NIFEKBCAAFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4280E0)
#define NIFEKBCAAFG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4278A0)
#define NIFEKBCAAFG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E427540)
#define NIFEKBCAAFG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E427DE0)
#define NIFEKBCAAFG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E427940)
#define NIFEKBCAAFG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E427990)
#define NIFEKBCAAFG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E427770)
#define NIFEKBCAAFG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E427D80)
#define NIFEKBCAAFG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E427F50)
#define NIFEKBCAAFG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E427800)
#define NIFEKBCAAFG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E427D00)

inline static constexpr unsigned int NIFEKBCAAFG_TypeDefinitionIndex = 15496;

	class NIFEKBCAAFG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0x4A150);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0x4A158);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridSpecialShowRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridSpecialShowRow*>**)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0x4A160);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0xF1E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NIFEKBCAAFG")->GetStaticField(0xF1E1);
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

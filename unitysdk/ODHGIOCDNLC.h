#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2StarTargetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODHGIOCDNLC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2572A0)
#define ODHGIOCDNLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D257820)
#define ODHGIOCDNLC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D257410)
#define ODHGIOCDNLC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D256D50)
#define ODHGIOCDNLC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D256FE0)
#define ODHGIOCDNLC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2574B0)
#define ODHGIOCDNLC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D257500)
#define ODHGIOCDNLC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2572E0)
#define ODHGIOCDNLC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D256F80)
#define ODHGIOCDNLC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D257110)
#define ODHGIOCDNLC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D257370)
#define ODHGIOCDNLC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D256CD0)

inline static constexpr unsigned int ODHGIOCDNLC_TypeDefinitionIndex = 11949;

	class ODHGIOCDNLC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ODHGIOCDNLC")->GetStaticField(0x32260);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2StarTargetRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2StarTargetRow*>**)UnitySDK::FromName("", "ODHGIOCDNLC")->GetStaticField(0x32268);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ODHGIOCDNLC")->GetStaticField(0x32270);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ODHGIOCDNLC")->GetStaticField(0xA960);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ODHGIOCDNLC")->GetStaticField(0xA961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHGIOCDNLC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2StarTargetRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2StarTargetRow*>*(*)())((::PBYTE)hIl2Cpp + ODHGIOCDNLC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODHGIOCDNLC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2StarTargetRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2StarTargetRow*>(*)())((::PBYTE)hIl2Cpp + ODHGIOCDNLC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2StarTargetRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2StarTargetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ODHGIOCDNLC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODHGIOCDNLC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHGIOCDNLC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHGIOCDNLC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ODHGIOCDNLC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODHGIOCDNLC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ODHGIOCDNLC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2StarTargetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2StarTargetRow*))((::PBYTE)hIl2Cpp + ODHGIOCDNLC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

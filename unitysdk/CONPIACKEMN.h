#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusChallengeStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CONPIACKEMN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCBBA10)
#define CONPIACKEMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCBBF90)
#define CONPIACKEMN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCBBB80)
#define CONPIACKEMN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCBB4C0)
#define CONPIACKEMN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCBB750)
#define CONPIACKEMN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCBBC20)
#define CONPIACKEMN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCBBC70)
#define CONPIACKEMN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCBBA50)
#define CONPIACKEMN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCBB6F0)
#define CONPIACKEMN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCBB8C0)
#define CONPIACKEMN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCBBAE0)
#define CONPIACKEMN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCBB440)

inline static constexpr unsigned int CONPIACKEMN_TypeDefinitionIndex = 13762;

	class CONPIACKEMN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CONPIACKEMN")->GetStaticField(0x45670);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeStageRow*>**)UnitySDK::FromName("", "CONPIACKEMN")->GetStaticField(0x45678);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CONPIACKEMN")->GetStaticField(0x45680);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CONPIACKEMN")->GetStaticField(0x107D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CONPIACKEMN")->GetStaticField(0x107D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONPIACKEMN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeStageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeStageRow*>*(*)())((::PBYTE)hIl2Cpp + CONPIACKEMN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CONPIACKEMN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeStageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeStageRow*>(*)())((::PBYTE)hIl2Cpp + CONPIACKEMN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusChallengeStageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusChallengeStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CONPIACKEMN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CONPIACKEMN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONPIACKEMN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONPIACKEMN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CONPIACKEMN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CONPIACKEMN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CONPIACKEMN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeliobusChallengeStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusChallengeStageRow*))((::PBYTE)hIl2Cpp + CONPIACKEMN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

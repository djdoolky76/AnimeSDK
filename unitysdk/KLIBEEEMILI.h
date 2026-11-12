#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLIBEEEMILI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E29A110)
#define KLIBEEEMILI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29A690)
#define KLIBEEEMILI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E29A280)
#define KLIBEEEMILI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E299BC0)
#define KLIBEEEMILI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E299E50)
#define KLIBEEEMILI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E29A320)
#define KLIBEEEMILI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E29A370)
#define KLIBEEEMILI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E29A150)
#define KLIBEEEMILI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E299DF0)
#define KLIBEEEMILI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E299F80)
#define KLIBEEEMILI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E29A1E0)
#define KLIBEEEMILI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E299B40)

inline static constexpr unsigned int KLIBEEEMILI_TypeDefinitionIndex = 13053;

	class KLIBEEEMILI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>**)UnitySDK::FromName("", "KLIBEEEMILI")->GetStaticField(0x2FA90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLIBEEEMILI")->GetStaticField(0x2FA98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KLIBEEEMILI")->GetStaticField(0x2FAA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLIBEEEMILI")->GetStaticField(0xA0A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLIBEEEMILI")->GetStaticField(0xA0A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLIBEEEMILI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>*(*)())((::PBYTE)hIl2Cpp + KLIBEEEMILI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLIBEEEMILI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>(*)())((::PBYTE)hIl2Cpp + KLIBEEEMILI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengePeakRewardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengePeakRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLIBEEEMILI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLIBEEEMILI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLIBEEEMILI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLIBEEEMILI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLIBEEEMILI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLIBEEEMILI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLIBEEEMILI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengePeakRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengePeakRewardRow*))((::PBYTE)hIl2Cpp + KLIBEEEMILI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

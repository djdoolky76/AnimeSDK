#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeMazeRewardLineRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJENMBMPHEN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D80DA30)
#define BJENMBMPHEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D80DFF0)
#define BJENMBMPHEN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D80DBA0)
#define BJENMBMPHEN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D80D4A0)
#define BJENMBMPHEN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D80D730)
#define BJENMBMPHEN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D80DC40)
#define BJENMBMPHEN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D80DC90)
#define BJENMBMPHEN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D80DA70)
#define BJENMBMPHEN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D80D6D0)
#define BJENMBMPHEN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D80D860)
#define BJENMBMPHEN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D80DB00)
#define BJENMBMPHEN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D80D420)

inline static constexpr unsigned int BJENMBMPHEN_TypeDefinitionIndex = 12976;

	class BJENMBMPHEN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BJENMBMPHEN")->GetStaticField(0x35DA0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BJENMBMPHEN")->GetStaticField(0x35DA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>**)UnitySDK::FromName("", "BJENMBMPHEN")->GetStaticField(0x35DB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BJENMBMPHEN")->GetStaticField(0xB5D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BJENMBMPHEN")->GetStaticField(0xB5D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJENMBMPHEN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>*(*)())((::PBYTE)hIl2Cpp + BJENMBMPHEN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJENMBMPHEN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>(*)())((::PBYTE)hIl2Cpp + BJENMBMPHEN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeMazeRewardLineRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChallengeMazeRewardLineRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BJENMBMPHEN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJENMBMPHEN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJENMBMPHEN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJENMBMPHEN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BJENMBMPHEN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJENMBMPHEN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BJENMBMPHEN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengeMazeRewardLineRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeMazeRewardLineRow*))((::PBYTE)hIl2Cpp + BJENMBMPHEN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

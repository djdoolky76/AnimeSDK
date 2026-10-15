#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyAreaGoalConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPFHPEFIPFH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1B04F0)
#define MPFHPEFIPFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B10D0)
#define MPFHPEFIPFH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1B0890)
#define MPFHPEFIPFH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1B0530)
#define MPFHPEFIPFH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1B0DD0)
#define MPFHPEFIPFH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1B0930)
#define MPFHPEFIPFH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1B0980)
#define MPFHPEFIPFH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1B0760)
#define MPFHPEFIPFH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1B0D70)
#define MPFHPEFIPFH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1B0F40)
#define MPFHPEFIPFH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1B07F0)
#define MPFHPEFIPFH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1B0CF0)

inline static constexpr unsigned int MPFHPEFIPFH_TypeDefinitionIndex = 15353;

	class MPFHPEFIPFH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>**)UnitySDK::FromName("", "MPFHPEFIPFH")->GetStaticField(0x3CD60);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MPFHPEFIPFH")->GetStaticField(0x3CD68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPFHPEFIPFH")->GetStaticField(0x3CD70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPFHPEFIPFH")->GetStaticField(0xC250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPFHPEFIPFH")->GetStaticField(0xC251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPFHPEFIPFH_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPFHPEFIPFH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPFHPEFIPFH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPFHPEFIPFH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MPFHPEFIPFH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPFHPEFIPFH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MPFHPEFIPFH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyAreaGoalConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyAreaGoalConfigRow*))((::PBYTE)hIl2Cpp + MPFHPEFIPFH_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MPFHPEFIPFH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPFHPEFIPFH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*>(*)())((::PBYTE)hIl2Cpp + MPFHPEFIPFH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyAreaGoalConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyAreaGoalConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MPFHPEFIPFH_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

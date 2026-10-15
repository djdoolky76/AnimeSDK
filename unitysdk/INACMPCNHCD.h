#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyStepConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INACMPCNHCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEF6490)
#define INACMPCNHCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF7070)
#define INACMPCNHCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEF6830)
#define INACMPCNHCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEF64D0)
#define INACMPCNHCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEF6D70)
#define INACMPCNHCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEF68D0)
#define INACMPCNHCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEF6920)
#define INACMPCNHCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEF6700)
#define INACMPCNHCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEF6D10)
#define INACMPCNHCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEF6EE0)
#define INACMPCNHCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEF6790)
#define INACMPCNHCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEF6C90)

inline static constexpr unsigned int INACMPCNHCD_TypeDefinitionIndex = 15354;

	class INACMPCNHCD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>**)UnitySDK::FromName("", "INACMPCNHCD")->GetStaticField(0x23AC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "INACMPCNHCD")->GetStaticField(0x23AC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "INACMPCNHCD")->GetStaticField(0x23AD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "INACMPCNHCD")->GetStaticField(0x7B80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "INACMPCNHCD")->GetStaticField(0x7B81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INACMPCNHCD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INACMPCNHCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INACMPCNHCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INACMPCNHCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INACMPCNHCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + INACMPCNHCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + INACMPCNHCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyStepConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyStepConfigRow*))((::PBYTE)hIl2Cpp + INACMPCNHCD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>*(*)())((::PBYTE)hIl2Cpp + INACMPCNHCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INACMPCNHCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>(*)())((::PBYTE)hIl2Cpp + INACMPCNHCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyStepConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyStepConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INACMPCNHCD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

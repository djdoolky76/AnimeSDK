#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingDevelopmentActionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEOIAGDJLDC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A9DB0)
#define PEOIAGDJLDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2AA380)
#define PEOIAGDJLDC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A9F20)
#define PEOIAGDJLDC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A9820)
#define PEOIAGDJLDC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A9AB0)
#define PEOIAGDJLDC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A9FC0)
#define PEOIAGDJLDC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2AA010)
#define PEOIAGDJLDC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A9DF0)
#define PEOIAGDJLDC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A9A50)
#define PEOIAGDJLDC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A9C20)
#define PEOIAGDJLDC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A9E80)
#define PEOIAGDJLDC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A97A0)

inline static constexpr unsigned int PEOIAGDJLDC_TypeDefinitionIndex = 10971;

	class PEOIAGDJLDC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDevelopmentActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDevelopmentActionRow*>**)UnitySDK::FromName("", "PEOIAGDJLDC")->GetStaticField(0x4DC40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PEOIAGDJLDC")->GetStaticField(0x4DC48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PEOIAGDJLDC")->GetStaticField(0x4DC50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PEOIAGDJLDC")->GetStaticField(0x11C70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PEOIAGDJLDC")->GetStaticField(0x11C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEOIAGDJLDC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDevelopmentActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDevelopmentActionRow*>*(*)())((::PBYTE)hIl2Cpp + PEOIAGDJLDC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEOIAGDJLDC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDevelopmentActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingDevelopmentActionRow*>(*)())((::PBYTE)hIl2Cpp + PEOIAGDJLDC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingDevelopmentActionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingDevelopmentActionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PEOIAGDJLDC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEOIAGDJLDC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEOIAGDJLDC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEOIAGDJLDC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PEOIAGDJLDC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEOIAGDJLDC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PEOIAGDJLDC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingDevelopmentActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingDevelopmentActionRow*))((::PBYTE)hIl2Cpp + PEOIAGDJLDC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

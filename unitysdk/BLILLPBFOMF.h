#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantOptionEffectConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLILLPBFOMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E02A0)
#define BLILLPBFOMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E0820)
#define BLILLPBFOMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E0410)
#define BLILLPBFOMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9DFD50)
#define BLILLPBFOMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9DFFE0)
#define BLILLPBFOMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E04B0)
#define BLILLPBFOMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E0500)
#define BLILLPBFOMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E02E0)
#define BLILLPBFOMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9DFF80)
#define BLILLPBFOMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E0110)
#define BLILLPBFOMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E0370)
#define BLILLPBFOMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9DFCD0)

inline static constexpr unsigned int BLILLPBFOMF_TypeDefinitionIndex = 11389;

	class BLILLPBFOMF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BLILLPBFOMF")->GetStaticField(0x37FF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantOptionEffectConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantOptionEffectConfigRow*>**)UnitySDK::FromName("", "BLILLPBFOMF")->GetStaticField(0x37FF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BLILLPBFOMF")->GetStaticField(0x38000);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BLILLPBFOMF")->GetStaticField(0xBED0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLILLPBFOMF")->GetStaticField(0xBED1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLILLPBFOMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantOptionEffectConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantOptionEffectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BLILLPBFOMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLILLPBFOMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantOptionEffectConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantOptionEffectConfigRow*>(*)())((::PBYTE)hIl2Cpp + BLILLPBFOMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantOptionEffectConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantOptionEffectConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BLILLPBFOMF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLILLPBFOMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLILLPBFOMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLILLPBFOMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BLILLPBFOMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLILLPBFOMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BLILLPBFOMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantOptionEffectConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantOptionEffectConfigRow*))((::PBYTE)hIl2Cpp + BLILLPBFOMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACGABGCLCNH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCA54A0)
#define ACGABGCLCNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA5A20)
#define ACGABGCLCNH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCA5610)
#define ACGABGCLCNH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCA4F90)
#define ACGABGCLCNH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCA5220)
#define ACGABGCLCNH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCA56B0)
#define ACGABGCLCNH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCA5700)
#define ACGABGCLCNH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCA54E0)
#define ACGABGCLCNH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCA51C0)
#define ACGABGCLCNH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCA5350)
#define ACGABGCLCNH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCA5570)
#define ACGABGCLCNH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCA4F10)

	class ACGABGCLCNH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0x366D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0x366D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>**)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0x366E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0xB780);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ACGABGCLCNH")->GetStaticField(0xB781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>*(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEffectRow*>(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ACGABGCLCNH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGABGCLCNH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ACGABGCLCNH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACGABGCLCNH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ACGABGCLCNH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceEffectRow*))((::PBYTE)hIl2Cpp + ACGABGCLCNH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

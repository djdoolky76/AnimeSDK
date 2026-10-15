#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenOutfitTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHIEOKHJELP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEE1DC0)
#define IHIEOKHJELP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE2390)
#define IHIEOKHJELP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEE1F30)
#define IHIEOKHJELP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEE1830)
#define IHIEOKHJELP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEE1AC0)
#define IHIEOKHJELP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEE1FD0)
#define IHIEOKHJELP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEE2020)
#define IHIEOKHJELP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEE1E00)
#define IHIEOKHJELP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEE1A60)
#define IHIEOKHJELP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEE1C30)
#define IHIEOKHJELP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEE1E90)
#define IHIEOKHJELP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEE17B0)

inline static constexpr unsigned int IHIEOKHJELP_TypeDefinitionIndex = 11672;

	class IHIEOKHJELP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>**)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x228A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x228A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x228B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x7820);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IHIEOKHJELP")->GetStaticField(0x7821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>*(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenOutfitTypeRow* LMBKNCAIDLC(::RPG::GameCore::HipplenOutfitType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenOutfitTypeRow*(*)(::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + IHIEOKHJELP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHIEOKHJELP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IHIEOKHJELP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IHIEOKHJELP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IHIEOKHJELP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenOutfitTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenOutfitTypeRow*))((::PBYTE)hIl2Cpp + IHIEOKHJELP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

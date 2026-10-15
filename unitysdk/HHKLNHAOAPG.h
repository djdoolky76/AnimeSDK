#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class AOPAEHANNBO;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define HHKLNHAOAPG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEAA8D0)
#define HHKLNHAOAPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAAED0)
#define HHKLNHAOAPG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEAAA40)
#define HHKLNHAOAPG_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CEAA670)
#define HHKLNHAOAPG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEAA270)
#define HHKLNHAOAPG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEAA500)
#define HHKLNHAOAPG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEAAAE0)
#define HHKLNHAOAPG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEAAB30)
#define HHKLNHAOAPG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEAA910)
#define HHKLNHAOAPG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEAA4A0)
#define HHKLNHAOAPG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEAA6F0)
#define HHKLNHAOAPG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEAA9A0)
#define HHKLNHAOAPG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEAA1F0)

	class HHKLNHAOAPG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HHKLNHAOAPG")->GetStaticField(0x1DD40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AOPAEHANNBO*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AOPAEHANNBO*>**)UnitySDK::FromName("", "HHKLNHAOAPG")->GetStaticField(0x1DD48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HHKLNHAOAPG")->GetStaticField(0x1DD50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HHKLNHAOAPG")->GetStaticField(0x6CA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HHKLNHAOAPG")->GetStaticField(0x6CA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHKLNHAOAPG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AOPAEHANNBO*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AOPAEHANNBO*>*(*)())((::PBYTE)hIl2Cpp + HHKLNHAOAPG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHKLNHAOAPG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AOPAEHANNBO*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AOPAEHANNBO*>(*)())((::PBYTE)hIl2Cpp + HHKLNHAOAPG_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + HHKLNHAOAPG_EHAFELPCLKB_OFFSET))();
		}

		static ::AOPAEHANNBO* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::PetMarbleLevelMode a2)
		{
			return ((::AOPAEHANNBO*(*)(::System::UInt32, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + HHKLNHAOAPG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHKLNHAOAPG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHKLNHAOAPG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHKLNHAOAPG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HHKLNHAOAPG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHKLNHAOAPG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HHKLNHAOAPG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AOPAEHANNBO* a1)
		{
			return ((::System::Void(*)(::AOPAEHANNBO*))((::PBYTE)hIl2Cpp + HHKLNHAOAPG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

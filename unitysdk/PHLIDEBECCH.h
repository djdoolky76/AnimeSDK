#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MCMBBGLGNIK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHLIDEBECCH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2EB970)
#define PHLIDEBECCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EBF40)
#define PHLIDEBECCH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2EBAE0)
#define PHLIDEBECCH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2EB3E0)
#define PHLIDEBECCH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2EB670)
#define PHLIDEBECCH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2EBB80)
#define PHLIDEBECCH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2EBBD0)
#define PHLIDEBECCH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2EB9B0)
#define PHLIDEBECCH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2EB610)
#define PHLIDEBECCH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2EB7E0)
#define PHLIDEBECCH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2EBA40)
#define PHLIDEBECCH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2EB360)

	class PHLIDEBECCH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PHLIDEBECCH")->GetStaticField(0x43EB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHLIDEBECCH")->GetStaticField(0x43EB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MCMBBGLGNIK*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MCMBBGLGNIK*>**)UnitySDK::FromName("", "PHLIDEBECCH")->GetStaticField(0x43EC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHLIDEBECCH")->GetStaticField(0x10390);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHLIDEBECCH")->GetStaticField(0x10391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHLIDEBECCH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MCMBBGLGNIK*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MCMBBGLGNIK*>*(*)())((::PBYTE)hIl2Cpp + PHLIDEBECCH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHLIDEBECCH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MCMBBGLGNIK*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MCMBBGLGNIK*>(*)())((::PBYTE)hIl2Cpp + PHLIDEBECCH_FPHGMAMDFHE_OFFSET))();
		}

		static ::MCMBBGLGNIK* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MCMBBGLGNIK*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHLIDEBECCH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHLIDEBECCH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHLIDEBECCH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHLIDEBECCH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHLIDEBECCH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHLIDEBECCH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHLIDEBECCH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MCMBBGLGNIK* a1)
		{
			return ((::System::Void(*)(::MCMBBGLGNIK*))((::PBYTE)hIl2Cpp + PHLIDEBECCH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

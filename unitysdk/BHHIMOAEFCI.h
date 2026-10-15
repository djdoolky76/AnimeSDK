#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class EJHONGHJCNB;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHHIMOAEFCI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D7D5750)
#define BHHIMOAEFCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5D50)
#define BHHIMOAEFCI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D7D58C0)
#define BHHIMOAEFCI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D7D5180)
#define BHHIMOAEFCI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D7D5410)
#define BHHIMOAEFCI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D7D5960)
#define BHHIMOAEFCI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D7D59B0)
#define BHHIMOAEFCI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D7D5790)
#define BHHIMOAEFCI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D7D53B0)
#define BHHIMOAEFCI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D7D5580)
#define BHHIMOAEFCI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D7D5820)
#define BHHIMOAEFCI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D7D5100)

inline static constexpr unsigned int BHHIMOAEFCI_TypeDefinitionIndex = 11985;

	class BHHIMOAEFCI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EJHONGHJCNB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EJHONGHJCNB*>**)UnitySDK::FromName("", "BHHIMOAEFCI")->GetStaticField(0x41D70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BHHIMOAEFCI")->GetStaticField(0x41D78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BHHIMOAEFCI")->GetStaticField(0x41D80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BHHIMOAEFCI")->GetStaticField(0xFAB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BHHIMOAEFCI")->GetStaticField(0xFAB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHHIMOAEFCI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EJHONGHJCNB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EJHONGHJCNB*>*(*)())((::PBYTE)hIl2Cpp + BHHIMOAEFCI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHHIMOAEFCI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EJHONGHJCNB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EJHONGHJCNB*>(*)())((::PBYTE)hIl2Cpp + BHHIMOAEFCI_FPHGMAMDFHE_OFFSET))();
		}

		static ::EJHONGHJCNB* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::EJHONGHJCNB*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BHHIMOAEFCI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHHIMOAEFCI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHHIMOAEFCI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHHIMOAEFCI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BHHIMOAEFCI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHHIMOAEFCI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BHHIMOAEFCI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::EJHONGHJCNB* a1)
		{
			return ((::System::Void(*)(::EJHONGHJCNB*))((::PBYTE)hIl2Cpp + BHHIMOAEFCI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

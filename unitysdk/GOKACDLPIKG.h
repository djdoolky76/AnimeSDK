#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FGIENDBFFFJ;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOKACDLPIKG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE73B10)
#define GOKACDLPIKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE74090)
#define GOKACDLPIKG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE73C80)
#define GOKACDLPIKG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE735C0)
#define GOKACDLPIKG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE73850)
#define GOKACDLPIKG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE73D20)
#define GOKACDLPIKG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE73D70)
#define GOKACDLPIKG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE73B50)
#define GOKACDLPIKG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE737F0)
#define GOKACDLPIKG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE739C0)
#define GOKACDLPIKG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE73BE0)
#define GOKACDLPIKG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE73540)

inline static constexpr unsigned int GOKACDLPIKG_TypeDefinitionIndex = 11541;

	class GOKACDLPIKG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FGIENDBFFFJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FGIENDBFFFJ*>**)UnitySDK::FromName("", "GOKACDLPIKG")->GetStaticField(0x1A850);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GOKACDLPIKG")->GetStaticField(0x1A858);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GOKACDLPIKG")->GetStaticField(0x1A860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GOKACDLPIKG")->GetStaticField(0x6030);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GOKACDLPIKG")->GetStaticField(0x6031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKACDLPIKG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FGIENDBFFFJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FGIENDBFFFJ*>*(*)())((::PBYTE)hIl2Cpp + GOKACDLPIKG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOKACDLPIKG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FGIENDBFFFJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FGIENDBFFFJ*>(*)())((::PBYTE)hIl2Cpp + GOKACDLPIKG_FPHGMAMDFHE_OFFSET))();
		}

		static ::FGIENDBFFFJ* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::FGIENDBFFFJ*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOKACDLPIKG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOKACDLPIKG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKACDLPIKG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKACDLPIKG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GOKACDLPIKG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOKACDLPIKG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GOKACDLPIKG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FGIENDBFFFJ* a1)
		{
			return ((::System::Void(*)(::FGIENDBFFFJ*))((::PBYTE)hIl2Cpp + GOKACDLPIKG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

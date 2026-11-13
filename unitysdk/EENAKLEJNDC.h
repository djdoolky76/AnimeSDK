#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MELDOFLDELP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EENAKLEJNDC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F0FFF20)
#define EENAKLEJNDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1004A0)
#define EENAKLEJNDC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F100090)
#define EENAKLEJNDC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F0FF9D0)
#define EENAKLEJNDC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F0FFC60)
#define EENAKLEJNDC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F100130)
#define EENAKLEJNDC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F100180)
#define EENAKLEJNDC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F0FFF60)
#define EENAKLEJNDC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F0FFC00)
#define EENAKLEJNDC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F0FFDD0)
#define EENAKLEJNDC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F0FFFF0)
#define EENAKLEJNDC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F0FF950)

inline static constexpr unsigned int EENAKLEJNDC_TypeDefinitionIndex = 12058;

	class EENAKLEJNDC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0x46A10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0x46A18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MELDOFLDELP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MELDOFLDELP*>**)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0x46A20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0xDC50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0xDC51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENAKLEJNDC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MELDOFLDELP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MELDOFLDELP*>*(*)())((::PBYTE)hIl2Cpp + EENAKLEJNDC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EENAKLEJNDC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MELDOFLDELP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MELDOFLDELP*>(*)())((::PBYTE)hIl2Cpp + EENAKLEJNDC_FPHGMAMDFHE_OFFSET))();
		}

		static ::MELDOFLDELP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MELDOFLDELP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EENAKLEJNDC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EENAKLEJNDC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENAKLEJNDC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENAKLEJNDC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EENAKLEJNDC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EENAKLEJNDC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EENAKLEJNDC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MELDOFLDELP* a1)
		{
			return ((::System::Void(*)(::MELDOFLDELP*))((::PBYTE)hIl2Cpp + EENAKLEJNDC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

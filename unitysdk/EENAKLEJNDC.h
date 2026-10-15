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

#define EENAKLEJNDC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD48740)
#define EENAKLEJNDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD48CC0)
#define EENAKLEJNDC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD488B0)
#define EENAKLEJNDC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD481F0)
#define EENAKLEJNDC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD48480)
#define EENAKLEJNDC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD48950)
#define EENAKLEJNDC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD489A0)
#define EENAKLEJNDC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD48780)
#define EENAKLEJNDC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD48420)
#define EENAKLEJNDC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD485F0)
#define EENAKLEJNDC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD48810)
#define EENAKLEJNDC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD48170)

inline static constexpr unsigned int EENAKLEJNDC_TypeDefinitionIndex = 12001;

	class EENAKLEJNDC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MELDOFLDELP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MELDOFLDELP*>**)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0x4CD40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0x4CD48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0x4CD50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0x11910);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EENAKLEJNDC")->GetStaticField(0x11911);
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

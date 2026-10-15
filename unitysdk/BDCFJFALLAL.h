#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IHENDFLIFNJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDCFJFALLAL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCFB560)
#define BDCFJFALLAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCFBAE0)
#define BDCFJFALLAL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCFB6D0)
#define BDCFJFALLAL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCFB010)
#define BDCFJFALLAL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCFB2A0)
#define BDCFJFALLAL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCFB770)
#define BDCFJFALLAL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCFB7C0)
#define BDCFJFALLAL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCFB5A0)
#define BDCFJFALLAL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCFB240)
#define BDCFJFALLAL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCFB3D0)
#define BDCFJFALLAL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCFB630)
#define BDCFJFALLAL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCFAF90)

inline static constexpr unsigned int BDCFJFALLAL_TypeDefinitionIndex = 11484;

	class BDCFJFALLAL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IHENDFLIFNJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IHENDFLIFNJ*>**)UnitySDK::FromName("", "BDCFJFALLAL")->GetStaticField(0x3E270);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BDCFJFALLAL")->GetStaticField(0x3E278);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BDCFJFALLAL")->GetStaticField(0x3E280);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BDCFJFALLAL")->GetStaticField(0xD510);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BDCFJFALLAL")->GetStaticField(0xD511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDCFJFALLAL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IHENDFLIFNJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IHENDFLIFNJ*>*(*)())((::PBYTE)hIl2Cpp + BDCFJFALLAL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BDCFJFALLAL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IHENDFLIFNJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IHENDFLIFNJ*>(*)())((::PBYTE)hIl2Cpp + BDCFJFALLAL_FPHGMAMDFHE_OFFSET))();
		}

		static ::IHENDFLIFNJ* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IHENDFLIFNJ*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BDCFJFALLAL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BDCFJFALLAL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDCFJFALLAL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDCFJFALLAL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BDCFJFALLAL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BDCFJFALLAL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BDCFJFALLAL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IHENDFLIFNJ* a1)
		{
			return ((::System::Void(*)(::IHENDFLIFNJ*))((::PBYTE)hIl2Cpp + BDCFJFALLAL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

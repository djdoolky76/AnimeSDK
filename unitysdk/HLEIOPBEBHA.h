#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTaskRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLEIOPBEBHA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEC00F0)
#define HLEIOPBEBHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEC06C0)
#define HLEIOPBEBHA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEC0260)
#define HLEIOPBEBHA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEBFB60)
#define HLEIOPBEBHA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEBFDF0)
#define HLEIOPBEBHA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEC0300)
#define HLEIOPBEBHA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEC0350)
#define HLEIOPBEBHA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEC0130)
#define HLEIOPBEBHA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEBFD90)
#define HLEIOPBEBHA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEBFF60)
#define HLEIOPBEBHA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEC01C0)
#define HLEIOPBEBHA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEBFAE0)

	class HLEIOPBEBHA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x1EE00);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x1EE08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>**)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x1EE10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x7140);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HLEIOPBEBHA")->GetStaticField(0x7141);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>*(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveTaskRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveTaskRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEIOPBEBHA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveTaskRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveTaskRow*))((::PBYTE)hIl2Cpp + HLEIOPBEBHA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DCIBDOHGEGL;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOCDKMCOBFI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CECD850)
#define HOCDKMCOBFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CECDDD0)
#define HOCDKMCOBFI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CECD9C0)
#define HOCDKMCOBFI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CECD340)
#define HOCDKMCOBFI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CECD5D0)
#define HOCDKMCOBFI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CECDA60)
#define HOCDKMCOBFI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CECDAB0)
#define HOCDKMCOBFI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CECD890)
#define HOCDKMCOBFI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CECD570)
#define HOCDKMCOBFI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CECD700)
#define HOCDKMCOBFI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CECD920)
#define HOCDKMCOBFI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CECD2C0)

	class HOCDKMCOBFI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HOCDKMCOBFI")->GetStaticField(0x1FF90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HOCDKMCOBFI")->GetStaticField(0x1FF98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DCIBDOHGEGL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DCIBDOHGEGL*>**)UnitySDK::FromName("", "HOCDKMCOBFI")->GetStaticField(0x1FFA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HOCDKMCOBFI")->GetStaticField(0x74C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HOCDKMCOBFI")->GetStaticField(0x74C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOCDKMCOBFI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DCIBDOHGEGL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DCIBDOHGEGL*>*(*)())((::PBYTE)hIl2Cpp + HOCDKMCOBFI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOCDKMCOBFI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DCIBDOHGEGL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DCIBDOHGEGL*>(*)())((::PBYTE)hIl2Cpp + HOCDKMCOBFI_FPHGMAMDFHE_OFFSET))();
		}

		static ::DCIBDOHGEGL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::DCIBDOHGEGL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HOCDKMCOBFI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOCDKMCOBFI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOCDKMCOBFI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOCDKMCOBFI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOCDKMCOBFI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOCDKMCOBFI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HOCDKMCOBFI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DCIBDOHGEGL* a1)
		{
			return ((::System::Void(*)(::DCIBDOHGEGL*))((::PBYTE)hIl2Cpp + HOCDKMCOBFI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

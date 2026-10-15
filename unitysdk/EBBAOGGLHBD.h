#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AFMMIMLKEDK;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBBAOGGLHBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD5EAD0)
#define EBBAOGGLHBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5F050)
#define EBBAOGGLHBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD5EC40)
#define EBBAOGGLHBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5E580)
#define EBBAOGGLHBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5E810)
#define EBBAOGGLHBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD5ECE0)
#define EBBAOGGLHBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD5ED30)
#define EBBAOGGLHBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD5EB10)
#define EBBAOGGLHBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5E7B0)
#define EBBAOGGLHBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5E980)
#define EBBAOGGLHBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD5EBA0)
#define EBBAOGGLHBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5E500)

inline static constexpr unsigned int EBBAOGGLHBD_TypeDefinitionIndex = 11979;

	class EBBAOGGLHBD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFMMIMLKEDK*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFMMIMLKEDK*>**)UnitySDK::FromName("", "EBBAOGGLHBD")->GetStaticField(0x52EF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EBBAOGGLHBD")->GetStaticField(0x52EF8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EBBAOGGLHBD")->GetStaticField(0x52F00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EBBAOGGLHBD")->GetStaticField(0x12670);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EBBAOGGLHBD")->GetStaticField(0x12671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBAOGGLHBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFMMIMLKEDK*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFMMIMLKEDK*>*(*)())((::PBYTE)hIl2Cpp + EBBAOGGLHBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBBAOGGLHBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AFMMIMLKEDK*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AFMMIMLKEDK*>(*)())((::PBYTE)hIl2Cpp + EBBAOGGLHBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::AFMMIMLKEDK* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::AFMMIMLKEDK*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EBBAOGGLHBD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBBAOGGLHBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBAOGGLHBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBAOGGLHBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBBAOGGLHBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBBAOGGLHBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EBBAOGGLHBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AFMMIMLKEDK* a1)
		{
			return ((::System::Void(*)(::AFMMIMLKEDK*))((::PBYTE)hIl2Cpp + EBBAOGGLHBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

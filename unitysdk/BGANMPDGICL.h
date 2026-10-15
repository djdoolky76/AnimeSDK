#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AKNOHEHLKMB;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGANMPDGICL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D6746D0)
#define BGANMPDGICL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D675320)
#define BGANMPDGICL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D674A70)
#define BGANMPDGICL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D674710)
#define BGANMPDGICL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D674FE0)
#define BGANMPDGICL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D674B10)
#define BGANMPDGICL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D674B60)
#define BGANMPDGICL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D674940)
#define BGANMPDGICL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D674F80)
#define BGANMPDGICL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D675150)
#define BGANMPDGICL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D6749D0)
#define BGANMPDGICL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D674F00)

	class BGANMPDGICL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AKNOHEHLKMB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AKNOHEHLKMB*>**)UnitySDK::FromName("", "BGANMPDGICL")->GetStaticField(0x342D0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BGANMPDGICL")->GetStaticField(0x342D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BGANMPDGICL")->GetStaticField(0x342E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BGANMPDGICL")->GetStaticField(0xAF80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BGANMPDGICL")->GetStaticField(0xAF81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGANMPDGICL_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BGANMPDGICL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGANMPDGICL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGANMPDGICL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BGANMPDGICL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BGANMPDGICL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BGANMPDGICL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AKNOHEHLKMB* a1)
		{
			return ((::System::Void(*)(::AKNOHEHLKMB*))((::PBYTE)hIl2Cpp + BGANMPDGICL_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AKNOHEHLKMB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AKNOHEHLKMB*>*(*)())((::PBYTE)hIl2Cpp + BGANMPDGICL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BGANMPDGICL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AKNOHEHLKMB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AKNOHEHLKMB*>(*)())((::PBYTE)hIl2Cpp + BGANMPDGICL_FPHGMAMDFHE_OFFSET))();
		}

		static ::AKNOHEHLKMB* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::AKNOHEHLKMB*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BGANMPDGICL_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};

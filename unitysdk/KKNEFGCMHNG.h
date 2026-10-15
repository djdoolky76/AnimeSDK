#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HNCGHAOHBPP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKNEFGCMHNG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D09F880)
#define KKNEFGCMHNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09FE50)
#define KKNEFGCMHNG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D09F9F0)
#define KKNEFGCMHNG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D09F2F0)
#define KKNEFGCMHNG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D09F580)
#define KKNEFGCMHNG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D09FA90)
#define KKNEFGCMHNG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D09FAE0)
#define KKNEFGCMHNG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D09F8C0)
#define KKNEFGCMHNG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D09F520)
#define KKNEFGCMHNG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D09F6F0)
#define KKNEFGCMHNG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D09F950)
#define KKNEFGCMHNG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09F270)

inline static constexpr unsigned int KKNEFGCMHNG_TypeDefinitionIndex = 11989;

	class KKNEFGCMHNG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKNEFGCMHNG")->GetStaticField(0x35BF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNCGHAOHBPP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNCGHAOHBPP*>**)UnitySDK::FromName("", "KKNEFGCMHNG")->GetStaticField(0x35BF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KKNEFGCMHNG")->GetStaticField(0x35C00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKNEFGCMHNG")->GetStaticField(0xB570);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKNEFGCMHNG")->GetStaticField(0xB571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNEFGCMHNG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNCGHAOHBPP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNCGHAOHBPP*>*(*)())((::PBYTE)hIl2Cpp + KKNEFGCMHNG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKNEFGCMHNG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNCGHAOHBPP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNCGHAOHBPP*>(*)())((::PBYTE)hIl2Cpp + KKNEFGCMHNG_FPHGMAMDFHE_OFFSET))();
		}

		static ::HNCGHAOHBPP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HNCGHAOHBPP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KKNEFGCMHNG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKNEFGCMHNG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNEFGCMHNG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNEFGCMHNG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKNEFGCMHNG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKNEFGCMHNG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKNEFGCMHNG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HNCGHAOHBPP* a1)
		{
			return ((::System::Void(*)(::HNCGHAOHBPP*))((::PBYTE)hIl2Cpp + KKNEFGCMHNG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

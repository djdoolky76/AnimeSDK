#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MANIJAAODMF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLJNAABIMAP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0AA6B0)
#define KLJNAABIMAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0AAC30)
#define KLJNAABIMAP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0AA820)
#define KLJNAABIMAP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0AA160)
#define KLJNAABIMAP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0AA3F0)
#define KLJNAABIMAP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0AA8C0)
#define KLJNAABIMAP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0AA910)
#define KLJNAABIMAP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0AA6F0)
#define KLJNAABIMAP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0AA390)
#define KLJNAABIMAP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0AA560)
#define KLJNAABIMAP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0AA780)
#define KLJNAABIMAP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0AA0E0)

inline static constexpr unsigned int KLJNAABIMAP_TypeDefinitionIndex = 13937;

	class KLJNAABIMAP : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0x378F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0x378F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MANIJAAODMF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MANIJAAODMF*>**)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0x37900);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0xBD50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0xBD51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJNAABIMAP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MANIJAAODMF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MANIJAAODMF*>*(*)())((::PBYTE)hIl2Cpp + KLJNAABIMAP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLJNAABIMAP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MANIJAAODMF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MANIJAAODMF*>(*)())((::PBYTE)hIl2Cpp + KLJNAABIMAP_FPHGMAMDFHE_OFFSET))();
		}

		static ::MANIJAAODMF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MANIJAAODMF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLJNAABIMAP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLJNAABIMAP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJNAABIMAP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJNAABIMAP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLJNAABIMAP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLJNAABIMAP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLJNAABIMAP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MANIJAAODMF* a1)
		{
			return ((::System::Void(*)(::MANIJAAODMF*))((::PBYTE)hIl2Cpp + KLJNAABIMAP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

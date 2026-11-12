#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MANIJAAODMF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLJNAABIMAP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E29D650)
#define KLJNAABIMAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29DBD0)
#define KLJNAABIMAP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E29D7C0)
#define KLJNAABIMAP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E29D100)
#define KLJNAABIMAP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E29D390)
#define KLJNAABIMAP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E29D860)
#define KLJNAABIMAP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E29D8B0)
#define KLJNAABIMAP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E29D690)
#define KLJNAABIMAP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E29D330)
#define KLJNAABIMAP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E29D500)
#define KLJNAABIMAP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E29D720)
#define KLJNAABIMAP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E29D080)

inline static constexpr unsigned int KLJNAABIMAP_TypeDefinitionIndex = 14094;

	class KLJNAABIMAP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0x2FC90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MANIJAAODMF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MANIJAAODMF*>**)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0x2FC98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0x2FCA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0xA100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLJNAABIMAP")->GetStaticField(0xA101);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class HMHBPIIJBCD;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define JNKPPAIEHAD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D054FB0)
#define JNKPPAIEHAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0555B0)
#define JNKPPAIEHAD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D055120)
#define JNKPPAIEHAD_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D054D60)
#define JNKPPAIEHAD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D054960)
#define JNKPPAIEHAD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D054BF0)
#define JNKPPAIEHAD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0551C0)
#define JNKPPAIEHAD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D055210)
#define JNKPPAIEHAD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D054FF0)
#define JNKPPAIEHAD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D054B90)
#define JNKPPAIEHAD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D054DE0)
#define JNKPPAIEHAD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D055080)
#define JNKPPAIEHAD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0548E0)

inline static constexpr unsigned int JNKPPAIEHAD_TypeDefinitionIndex = 11584;

	class JNKPPAIEHAD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JNKPPAIEHAD")->GetStaticField(0x2FFC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HMHBPIIJBCD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HMHBPIIJBCD*>**)UnitySDK::FromName("", "JNKPPAIEHAD")->GetStaticField(0x2FFC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNKPPAIEHAD")->GetStaticField(0x2FFD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNKPPAIEHAD")->GetStaticField(0xA2D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNKPPAIEHAD")->GetStaticField(0xA2D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNKPPAIEHAD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HMHBPIIJBCD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HMHBPIIJBCD*>*(*)())((::PBYTE)hIl2Cpp + JNKPPAIEHAD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNKPPAIEHAD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HMHBPIIJBCD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HMHBPIIJBCD*>(*)())((::PBYTE)hIl2Cpp + JNKPPAIEHAD_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + JNKPPAIEHAD_EHAFELPCLKB_OFFSET))();
		}

		static ::HMHBPIIJBCD* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::HMHBPIIJBCD*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JNKPPAIEHAD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNKPPAIEHAD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNKPPAIEHAD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNKPPAIEHAD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNKPPAIEHAD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNKPPAIEHAD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNKPPAIEHAD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HMHBPIIJBCD* a1)
		{
			return ((::System::Void(*)(::HMHBPIIJBCD*))((::PBYTE)hIl2Cpp + JNKPPAIEHAD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

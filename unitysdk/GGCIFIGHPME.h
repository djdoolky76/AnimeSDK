#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HNJPENLPJKC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGCIFIGHPME_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE3EDD0)
#define GGCIFIGHPME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE3F3A0)
#define GGCIFIGHPME_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE3EF40)
#define GGCIFIGHPME_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE3E840)
#define GGCIFIGHPME_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE3EAD0)
#define GGCIFIGHPME_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE3EFE0)
#define GGCIFIGHPME_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE3F030)
#define GGCIFIGHPME_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE3EE10)
#define GGCIFIGHPME_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE3EA70)
#define GGCIFIGHPME_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE3EC40)
#define GGCIFIGHPME_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE3EEA0)
#define GGCIFIGHPME_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE3E7C0)

	class GGCIFIGHPME : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x17340);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>**)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x17348);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x17350);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x5730);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x5731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>*(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_FPHGMAMDFHE_OFFSET))();
		}

		static ::HNJPENLPJKC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HNJPENLPJKC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGCIFIGHPME_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GGCIFIGHPME_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGCIFIGHPME_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GGCIFIGHPME_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HNJPENLPJKC* a1)
		{
			return ((::System::Void(*)(::HNJPENLPJKC*))((::PBYTE)hIl2Cpp + GGCIFIGHPME_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

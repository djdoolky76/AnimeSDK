#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NBLLMAPNLOK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEONEBEIKMO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD774A0)
#define EEONEBEIKMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD77A70)
#define EEONEBEIKMO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD77610)
#define EEONEBEIKMO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD76F10)
#define EEONEBEIKMO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD771A0)
#define EEONEBEIKMO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD776B0)
#define EEONEBEIKMO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD77700)
#define EEONEBEIKMO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD774E0)
#define EEONEBEIKMO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD77140)
#define EEONEBEIKMO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD77310)
#define EEONEBEIKMO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD77570)
#define EEONEBEIKMO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD76E90)

	class EEONEBEIKMO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NBLLMAPNLOK*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NBLLMAPNLOK*>**)UnitySDK::FromName("", "EEONEBEIKMO")->GetStaticField(0x53B50);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EEONEBEIKMO")->GetStaticField(0x53B58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EEONEBEIKMO")->GetStaticField(0x53B60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EEONEBEIKMO")->GetStaticField(0x12940);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EEONEBEIKMO")->GetStaticField(0x12941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEONEBEIKMO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NBLLMAPNLOK*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NBLLMAPNLOK*>*(*)())((::PBYTE)hIl2Cpp + EEONEBEIKMO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EEONEBEIKMO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NBLLMAPNLOK*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NBLLMAPNLOK*>(*)())((::PBYTE)hIl2Cpp + EEONEBEIKMO_FPHGMAMDFHE_OFFSET))();
		}

		static ::NBLLMAPNLOK* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NBLLMAPNLOK*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EEONEBEIKMO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EEONEBEIKMO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEONEBEIKMO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEONEBEIKMO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EEONEBEIKMO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EEONEBEIKMO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EEONEBEIKMO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NBLLMAPNLOK* a1)
		{
			return ((::System::Void(*)(::NBLLMAPNLOK*))((::PBYTE)hIl2Cpp + EEONEBEIKMO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

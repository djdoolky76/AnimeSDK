#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MNAMIKAHFDM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNEPGOGOCPD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1D5FD0)
#define MNEPGOGOCPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D65A0)
#define MNEPGOGOCPD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1D6140)
#define MNEPGOGOCPD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1D5A40)
#define MNEPGOGOCPD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1D5CD0)
#define MNEPGOGOCPD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1D61E0)
#define MNEPGOGOCPD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1D6230)
#define MNEPGOGOCPD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1D6010)
#define MNEPGOGOCPD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1D5C70)
#define MNEPGOGOCPD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1D5E40)
#define MNEPGOGOCPD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1D60A0)
#define MNEPGOGOCPD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1D59C0)

	class MNEPGOGOCPD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MNAMIKAHFDM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MNAMIKAHFDM*>**)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0x2A9E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0x2A9E8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0x2A9F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0x85A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0x85A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNEPGOGOCPD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MNAMIKAHFDM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MNAMIKAHFDM*>*(*)())((::PBYTE)hIl2Cpp + MNEPGOGOCPD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNEPGOGOCPD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MNAMIKAHFDM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MNAMIKAHFDM*>(*)())((::PBYTE)hIl2Cpp + MNEPGOGOCPD_FPHGMAMDFHE_OFFSET))();
		}

		static ::MNAMIKAHFDM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MNAMIKAHFDM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNEPGOGOCPD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNEPGOGOCPD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNEPGOGOCPD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNEPGOGOCPD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNEPGOGOCPD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNEPGOGOCPD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNEPGOGOCPD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MNAMIKAHFDM* a1)
		{
			return ((::System::Void(*)(::MNAMIKAHFDM*))((::PBYTE)hIl2Cpp + MNEPGOGOCPD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

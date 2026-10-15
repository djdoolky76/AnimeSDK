#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MNAMIKAHFDM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNEPGOGOCPD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1A8280)
#define MNEPGOGOCPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1A8850)
#define MNEPGOGOCPD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1A83F0)
#define MNEPGOGOCPD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1A7CF0)
#define MNEPGOGOCPD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1A7F80)
#define MNEPGOGOCPD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1A8490)
#define MNEPGOGOCPD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1A84E0)
#define MNEPGOGOCPD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1A82C0)
#define MNEPGOGOCPD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1A7F20)
#define MNEPGOGOCPD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1A80F0)
#define MNEPGOGOCPD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1A8350)
#define MNEPGOGOCPD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1A7C70)

inline static constexpr unsigned int MNEPGOGOCPD_TypeDefinitionIndex = 12488;

	class MNEPGOGOCPD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0x3C3F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0x3C3F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MNAMIKAHFDM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MNAMIKAHFDM*>**)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0x3C400);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0xC0B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNEPGOGOCPD")->GetStaticField(0xC0B1);
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

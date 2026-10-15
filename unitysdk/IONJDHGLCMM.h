#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HMBDKHPPBHB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IONJDHGLCMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEFC7B0)
#define IONJDHGLCMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFCD80)
#define IONJDHGLCMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEFC920)
#define IONJDHGLCMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEFC220)
#define IONJDHGLCMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEFC4B0)
#define IONJDHGLCMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEFC9C0)
#define IONJDHGLCMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEFCA10)
#define IONJDHGLCMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEFC7F0)
#define IONJDHGLCMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEFC450)
#define IONJDHGLCMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEFC620)
#define IONJDHGLCMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEFC880)
#define IONJDHGLCMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEFC1A0)

inline static constexpr unsigned int IONJDHGLCMM_TypeDefinitionIndex = 14427;

	class IONJDHGLCMM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IONJDHGLCMM")->GetStaticField(0x23E80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HMBDKHPPBHB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HMBDKHPPBHB*>**)UnitySDK::FromName("", "IONJDHGLCMM")->GetStaticField(0x23E88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IONJDHGLCMM")->GetStaticField(0x23E90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IONJDHGLCMM")->GetStaticField(0x7C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IONJDHGLCMM")->GetStaticField(0x7C51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONJDHGLCMM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HMBDKHPPBHB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HMBDKHPPBHB*>*(*)())((::PBYTE)hIl2Cpp + IONJDHGLCMM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IONJDHGLCMM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HMBDKHPPBHB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HMBDKHPPBHB*>(*)())((::PBYTE)hIl2Cpp + IONJDHGLCMM_FPHGMAMDFHE_OFFSET))();
		}

		static ::HMBDKHPPBHB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HMBDKHPPBHB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IONJDHGLCMM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IONJDHGLCMM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONJDHGLCMM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONJDHGLCMM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IONJDHGLCMM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IONJDHGLCMM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IONJDHGLCMM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HMBDKHPPBHB* a1)
		{
			return ((::System::Void(*)(::HMBDKHPPBHB*))((::PBYTE)hIl2Cpp + IONJDHGLCMM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

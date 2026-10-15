#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NLLIHHODIMJ;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOGHFGOCFMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A8D20)
#define OOGHFGOCFMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A92A0)
#define OOGHFGOCFMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A8E90)
#define OOGHFGOCFMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A87D0)
#define OOGHFGOCFMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A8A60)
#define OOGHFGOCFMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A8F30)
#define OOGHFGOCFMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2A8F80)
#define OOGHFGOCFMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A8D60)
#define OOGHFGOCFMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A8A00)
#define OOGHFGOCFMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A8BD0)
#define OOGHFGOCFMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A8DF0)
#define OOGHFGOCFMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A8750)

	class OOGHFGOCFMM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0x3ACF0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0x3ACF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NLLIHHODIMJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NLLIHHODIMJ*>**)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0x3AD00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0xC840);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0xC841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOGHFGOCFMM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NLLIHHODIMJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NLLIHHODIMJ*>*(*)())((::PBYTE)hIl2Cpp + OOGHFGOCFMM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOGHFGOCFMM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NLLIHHODIMJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NLLIHHODIMJ*>(*)())((::PBYTE)hIl2Cpp + OOGHFGOCFMM_FPHGMAMDFHE_OFFSET))();
		}

		static ::NLLIHHODIMJ* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NLLIHHODIMJ*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OOGHFGOCFMM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOGHFGOCFMM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOGHFGOCFMM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOGHFGOCFMM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OOGHFGOCFMM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOGHFGOCFMM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OOGHFGOCFMM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NLLIHHODIMJ* a1)
		{
			return ((::System::Void(*)(::NLLIHHODIMJ*))((::PBYTE)hIl2Cpp + OOGHFGOCFMM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

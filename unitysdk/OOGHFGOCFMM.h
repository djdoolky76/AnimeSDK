#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NLLIHHODIMJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOGHFGOCFMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D27B120)
#define OOGHFGOCFMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D27B6A0)
#define OOGHFGOCFMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D27B290)
#define OOGHFGOCFMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D27ABD0)
#define OOGHFGOCFMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D27AE60)
#define OOGHFGOCFMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D27B330)
#define OOGHFGOCFMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D27B380)
#define OOGHFGOCFMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D27B160)
#define OOGHFGOCFMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D27AE00)
#define OOGHFGOCFMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D27AFD0)
#define OOGHFGOCFMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D27B1F0)
#define OOGHFGOCFMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D27AB50)

inline static constexpr unsigned int OOGHFGOCFMM_TypeDefinitionIndex = 14420;

	class OOGHFGOCFMM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0x4A720);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0x4A728);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NLLIHHODIMJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NLLIHHODIMJ*>**)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0x4A730);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0x11250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOGHFGOCFMM")->GetStaticField(0x11251);
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

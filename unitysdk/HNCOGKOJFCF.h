#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingCardPreCheckRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNCOGKOJFCF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE9D290)
#define HNCOGKOJFCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE9D860)
#define HNCOGKOJFCF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE9D400)
#define HNCOGKOJFCF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE9CD00)
#define HNCOGKOJFCF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE9CF90)
#define HNCOGKOJFCF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE9D4A0)
#define HNCOGKOJFCF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE9D4F0)
#define HNCOGKOJFCF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE9D2D0)
#define HNCOGKOJFCF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE9CF30)
#define HNCOGKOJFCF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE9D100)
#define HNCOGKOJFCF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE9D360)
#define HNCOGKOJFCF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE9CC80)

inline static constexpr unsigned int HNCOGKOJFCF_TypeDefinitionIndex = 11046;

	class HNCOGKOJFCF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HNCOGKOJFCF")->GetStaticField(0x1DF40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardPreCheckRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardPreCheckRow*>**)UnitySDK::FromName("", "HNCOGKOJFCF")->GetStaticField(0x1DF48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HNCOGKOJFCF")->GetStaticField(0x1DF50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HNCOGKOJFCF")->GetStaticField(0x6D50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HNCOGKOJFCF")->GetStaticField(0x6D51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNCOGKOJFCF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardPreCheckRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardPreCheckRow*>*(*)())((::PBYTE)hIl2Cpp + HNCOGKOJFCF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HNCOGKOJFCF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardPreCheckRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardPreCheckRow*>(*)())((::PBYTE)hIl2Cpp + HNCOGKOJFCF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingCardPreCheckRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingCardPreCheckRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HNCOGKOJFCF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HNCOGKOJFCF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNCOGKOJFCF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNCOGKOJFCF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HNCOGKOJFCF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HNCOGKOJFCF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HNCOGKOJFCF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingCardPreCheckRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingCardPreCheckRow*))((::PBYTE)hIl2Cpp + HNCOGKOJFCF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

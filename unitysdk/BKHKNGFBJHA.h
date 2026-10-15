#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingMagicRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKHKNGFBJHA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D7EF250)
#define BKHKNGFBJHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7EF7D0)
#define BKHKNGFBJHA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D7EF3C0)
#define BKHKNGFBJHA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D7EED00)
#define BKHKNGFBJHA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D7EEF90)
#define BKHKNGFBJHA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D7EF460)
#define BKHKNGFBJHA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D7EF4B0)
#define BKHKNGFBJHA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D7EF290)
#define BKHKNGFBJHA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D7EEF30)
#define BKHKNGFBJHA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D7EF100)
#define BKHKNGFBJHA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D7EF320)
#define BKHKNGFBJHA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D7EEC80)

inline static constexpr unsigned int BKHKNGFBJHA_TypeDefinitionIndex = 11070;

	class BKHKNGFBJHA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BKHKNGFBJHA")->GetStaticField(0x43C00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>**)UnitySDK::FromName("", "BKHKNGFBJHA")->GetStaticField(0x43C08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BKHKNGFBJHA")->GetStaticField(0x43C10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BKHKNGFBJHA")->GetStaticField(0x10080);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BKHKNGFBJHA")->GetStaticField(0x10081);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKHKNGFBJHA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>*(*)())((::PBYTE)hIl2Cpp + BKHKNGFBJHA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BKHKNGFBJHA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingMagicRow*>(*)())((::PBYTE)hIl2Cpp + BKHKNGFBJHA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingMagicRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingMagicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BKHKNGFBJHA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BKHKNGFBJHA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKHKNGFBJHA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKHKNGFBJHA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BKHKNGFBJHA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKHKNGFBJHA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BKHKNGFBJHA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingMagicRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingMagicRow*))((::PBYTE)hIl2Cpp + BKHKNGFBJHA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

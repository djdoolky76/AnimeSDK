#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NAEPPBHCFII;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPKKKFFKJMB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E427150)
#define LPKKKFFKJMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4276D0)
#define LPKKKFFKJMB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4272C0)
#define LPKKKFFKJMB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E426C00)
#define LPKKKFFKJMB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E426E90)
#define LPKKKFFKJMB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E427360)
#define LPKKKFFKJMB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4273B0)
#define LPKKKFFKJMB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E427190)
#define LPKKKFFKJMB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E426E30)
#define LPKKKFFKJMB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E426FC0)
#define LPKKKFFKJMB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E427220)
#define LPKKKFFKJMB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E426B80)

inline static constexpr unsigned int LPKKKFFKJMB_TypeDefinitionIndex = 15224;

	class LPKKKFFKJMB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LPKKKFFKJMB")->GetStaticField(0x3DEF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NAEPPBHCFII*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NAEPPBHCFII*>**)UnitySDK::FromName("", "LPKKKFFKJMB")->GetStaticField(0x3DEF8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LPKKKFFKJMB")->GetStaticField(0x3DF00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LPKKKFFKJMB")->GetStaticField(0xC590);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LPKKKFFKJMB")->GetStaticField(0xC591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKKKFFKJMB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NAEPPBHCFII*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NAEPPBHCFII*>*(*)())((::PBYTE)hIl2Cpp + LPKKKFFKJMB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPKKKFFKJMB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NAEPPBHCFII*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NAEPPBHCFII*>(*)())((::PBYTE)hIl2Cpp + LPKKKFFKJMB_FPHGMAMDFHE_OFFSET))();
		}

		static ::NAEPPBHCFII* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NAEPPBHCFII*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LPKKKFFKJMB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPKKKFFKJMB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKKKFFKJMB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKKKFFKJMB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LPKKKFFKJMB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPKKKFFKJMB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LPKKKFFKJMB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NAEPPBHCFII* a1)
		{
			return ((::System::Void(*)(::NAEPPBHCFII*))((::PBYTE)hIl2Cpp + LPKKKFFKJMB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

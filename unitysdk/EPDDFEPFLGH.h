#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JEKBLCLLKMG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPDDFEPFLGH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD8F660)
#define EPDDFEPFLGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD8FC30)
#define EPDDFEPFLGH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD8F7D0)
#define EPDDFEPFLGH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD8F0D0)
#define EPDDFEPFLGH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD8F360)
#define EPDDFEPFLGH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD8F870)
#define EPDDFEPFLGH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD8F8C0)
#define EPDDFEPFLGH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD8F6A0)
#define EPDDFEPFLGH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD8F300)
#define EPDDFEPFLGH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD8F4D0)
#define EPDDFEPFLGH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD8F730)
#define EPDDFEPFLGH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD8F050)

inline static constexpr unsigned int EPDDFEPFLGH_TypeDefinitionIndex = 13971;

	class EPDDFEPFLGH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EPDDFEPFLGH")->GetStaticField(0xE720);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEKBLCLLKMG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEKBLCLLKMG*>**)UnitySDK::FromName("", "EPDDFEPFLGH")->GetStaticField(0xE728);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EPDDFEPFLGH")->GetStaticField(0xE730);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EPDDFEPFLGH")->GetStaticField(0x2F10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EPDDFEPFLGH")->GetStaticField(0x2F11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPDDFEPFLGH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEKBLCLLKMG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEKBLCLLKMG*>*(*)())((::PBYTE)hIl2Cpp + EPDDFEPFLGH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EPDDFEPFLGH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JEKBLCLLKMG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JEKBLCLLKMG*>(*)())((::PBYTE)hIl2Cpp + EPDDFEPFLGH_FPHGMAMDFHE_OFFSET))();
		}

		static ::JEKBLCLLKMG* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JEKBLCLLKMG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EPDDFEPFLGH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EPDDFEPFLGH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPDDFEPFLGH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPDDFEPFLGH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EPDDFEPFLGH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EPDDFEPFLGH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EPDDFEPFLGH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JEKBLCLLKMG* a1)
		{
			return ((::System::Void(*)(::JEKBLCLLKMG*))((::PBYTE)hIl2Cpp + EPDDFEPFLGH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

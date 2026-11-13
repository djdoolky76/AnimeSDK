#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IGNLJDNOLOP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPEBEFJKPBA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1ECFACD0)
#define KPEBEFJKPBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECFB250)
#define KPEBEFJKPBA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1ECFAE40)
#define KPEBEFJKPBA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1ECFA780)
#define KPEBEFJKPBA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1ECFAA10)
#define KPEBEFJKPBA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1ECFAEE0)
#define KPEBEFJKPBA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1ECFAF30)
#define KPEBEFJKPBA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1ECFAD10)
#define KPEBEFJKPBA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1ECFA9B0)
#define KPEBEFJKPBA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1ECFAB80)
#define KPEBEFJKPBA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1ECFADA0)
#define KPEBEFJKPBA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1ECFA700)

inline static constexpr unsigned int KPEBEFJKPBA_TypeDefinitionIndex = 14552;

	class KPEBEFJKPBA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IGNLJDNOLOP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IGNLJDNOLOP*>**)UnitySDK::FromName("", "KPEBEFJKPBA")->GetStaticField(0x3A340);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPEBEFJKPBA")->GetStaticField(0x3A348);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KPEBEFJKPBA")->GetStaticField(0x3A350);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPEBEFJKPBA")->GetStaticField(0xB9D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPEBEFJKPBA")->GetStaticField(0xB9D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPEBEFJKPBA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IGNLJDNOLOP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IGNLJDNOLOP*>*(*)())((::PBYTE)hIl2Cpp + KPEBEFJKPBA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPEBEFJKPBA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IGNLJDNOLOP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IGNLJDNOLOP*>(*)())((::PBYTE)hIl2Cpp + KPEBEFJKPBA_FPHGMAMDFHE_OFFSET))();
		}

		static ::IGNLJDNOLOP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IGNLJDNOLOP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPEBEFJKPBA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPEBEFJKPBA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPEBEFJKPBA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPEBEFJKPBA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPEBEFJKPBA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPEBEFJKPBA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPEBEFJKPBA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IGNLJDNOLOP* a1)
		{
			return ((::System::Void(*)(::IGNLJDNOLOP*))((::PBYTE)hIl2Cpp + KPEBEFJKPBA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

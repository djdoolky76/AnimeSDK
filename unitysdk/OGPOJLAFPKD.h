#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGPOJLAFPKD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D247120)
#define OGPOJLAFPKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D247D00)
#define OGPOJLAFPKD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2474C0)
#define OGPOJLAFPKD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D247160)
#define OGPOJLAFPKD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D247A00)
#define OGPOJLAFPKD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D247560)
#define OGPOJLAFPKD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2475B0)
#define OGPOJLAFPKD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D247390)
#define OGPOJLAFPKD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2479A0)
#define OGPOJLAFPKD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D247B70)
#define OGPOJLAFPKD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D247420)
#define OGPOJLAFPKD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D247920)

inline static constexpr unsigned int OGPOJLAFPKD_TypeDefinitionIndex = 15253;

	class OGPOJLAFPKD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0x46150);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0x46158);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>**)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0x46160);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0x107A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OGPOJLAFPKD")->GetStaticField(0x107A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookCardRow*))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>*(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardRow*>(*)())((::PBYTE)hIl2Cpp + OGPOJLAFPKD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OGPOJLAFPKD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookStarPanelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBNEDJHPDHE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1F0E80)
#define NBNEDJHPDHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1F19D0)
#define NBNEDJHPDHE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1F1220)
#define NBNEDJHPDHE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1F0EC0)
#define NBNEDJHPDHE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1F1710)
#define NBNEDJHPDHE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1F12C0)
#define NBNEDJHPDHE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1F1310)
#define NBNEDJHPDHE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1F10F0)
#define NBNEDJHPDHE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1F16B0)
#define NBNEDJHPDHE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1F1840)
#define NBNEDJHPDHE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1F1180)
#define NBNEDJHPDHE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1F1630)

inline static constexpr unsigned int NBNEDJHPDHE_TypeDefinitionIndex = 15263;

	class NBNEDJHPDHE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBNEDJHPDHE")->GetStaticField(0x2CF20);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NBNEDJHPDHE")->GetStaticField(0x2CF28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStarPanelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStarPanelRow*>**)UnitySDK::FromName("", "NBNEDJHPDHE")->GetStaticField(0x2CF30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NBNEDJHPDHE")->GetStaticField(0x92B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NBNEDJHPDHE")->GetStaticField(0x92B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNEDJHPDHE_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBNEDJHPDHE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNEDJHPDHE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNEDJHPDHE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NBNEDJHPDHE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBNEDJHPDHE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NBNEDJHPDHE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookStarPanelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookStarPanelRow*))((::PBYTE)hIl2Cpp + NBNEDJHPDHE_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStarPanelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStarPanelRow*>*(*)())((::PBYTE)hIl2Cpp + NBNEDJHPDHE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBNEDJHPDHE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStarPanelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookStarPanelRow*>(*)())((::PBYTE)hIl2Cpp + NBNEDJHPDHE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookStarPanelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookStarPanelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NBNEDJHPDHE_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

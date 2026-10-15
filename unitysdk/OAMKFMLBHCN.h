#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookRevealedIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAMKFMLBHCN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D21EFC0)
#define OAMKFMLBHCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D21FB10)
#define OAMKFMLBHCN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D21F360)
#define OAMKFMLBHCN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D21F000)
#define OAMKFMLBHCN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D21F850)
#define OAMKFMLBHCN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D21F400)
#define OAMKFMLBHCN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D21F450)
#define OAMKFMLBHCN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D21F230)
#define OAMKFMLBHCN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D21F7F0)
#define OAMKFMLBHCN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D21F9C0)
#define OAMKFMLBHCN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D21F2C0)
#define OAMKFMLBHCN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D21F770)

inline static constexpr unsigned int OAMKFMLBHCN_TypeDefinitionIndex = 15256;

	class OAMKFMLBHCN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedIconRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedIconRow*>**)UnitySDK::FromName("", "OAMKFMLBHCN")->GetStaticField(0x43120);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OAMKFMLBHCN")->GetStaticField(0x43128);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OAMKFMLBHCN")->GetStaticField(0x43130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OAMKFMLBHCN")->GetStaticField(0xFED0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OAMKFMLBHCN")->GetStaticField(0xFED1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAMKFMLBHCN_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAMKFMLBHCN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAMKFMLBHCN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAMKFMLBHCN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OAMKFMLBHCN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAMKFMLBHCN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OAMKFMLBHCN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookRevealedIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookRevealedIconRow*))((::PBYTE)hIl2Cpp + OAMKFMLBHCN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedIconRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedIconRow*>*(*)())((::PBYTE)hIl2Cpp + OAMKFMLBHCN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAMKFMLBHCN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedIconRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedIconRow*>(*)())((::PBYTE)hIl2Cpp + OAMKFMLBHCN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookRevealedIconRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookRevealedIconRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OAMKFMLBHCN_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

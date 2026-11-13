#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookRevealedCharacterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBPKMGJGNHK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1BB81150)
#define MBPKMGJGNHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB81CA0)
#define MBPKMGJGNHK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1BB814F0)
#define MBPKMGJGNHK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1BB81190)
#define MBPKMGJGNHK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1BB819E0)
#define MBPKMGJGNHK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1BB81590)
#define MBPKMGJGNHK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1BB815E0)
#define MBPKMGJGNHK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1BB813C0)
#define MBPKMGJGNHK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1BB81980)
#define MBPKMGJGNHK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1BB81B50)
#define MBPKMGJGNHK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1BB81450)
#define MBPKMGJGNHK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1BB81900)

inline static constexpr unsigned int MBPKMGJGNHK_TypeDefinitionIndex = 15411;

	class MBPKMGJGNHK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x409B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x409B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x409C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0xD010);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0xD011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPKMGJGNHK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBPKMGJGNHK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPKMGJGNHK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPKMGJGNHK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MBPKMGJGNHK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBPKMGJGNHK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MBPKMGJGNHK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookRevealedCharacterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookRevealedCharacterRow*))((::PBYTE)hIl2Cpp + MBPKMGJGNHK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>*(*)())((::PBYTE)hIl2Cpp + MBPKMGJGNHK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBPKMGJGNHK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>(*)())((::PBYTE)hIl2Cpp + MBPKMGJGNHK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookRevealedCharacterRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookRevealedCharacterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MBPKMGJGNHK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

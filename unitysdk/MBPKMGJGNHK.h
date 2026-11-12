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

#define MBPKMGJGNHK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E337A00)
#define MBPKMGJGNHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E338550)
#define MBPKMGJGNHK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E337DA0)
#define MBPKMGJGNHK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E337A40)
#define MBPKMGJGNHK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E338290)
#define MBPKMGJGNHK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E337E40)
#define MBPKMGJGNHK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E337E90)
#define MBPKMGJGNHK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E337C70)
#define MBPKMGJGNHK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E338230)
#define MBPKMGJGNHK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E338400)
#define MBPKMGJGNHK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E337D00)
#define MBPKMGJGNHK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3381B0)

inline static constexpr unsigned int MBPKMGJGNHK_TypeDefinitionIndex = 15411;

	class MBPKMGJGNHK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x388C0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x388C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x388D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0xC490);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0xC491);
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

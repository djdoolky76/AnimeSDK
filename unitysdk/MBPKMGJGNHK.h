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

#define MBPKMGJGNHK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D137ED0)
#define MBPKMGJGNHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D138A20)
#define MBPKMGJGNHK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D138270)
#define MBPKMGJGNHK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D137F10)
#define MBPKMGJGNHK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D138760)
#define MBPKMGJGNHK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D138310)
#define MBPKMGJGNHK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D138360)
#define MBPKMGJGNHK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D138140)
#define MBPKMGJGNHK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D138700)
#define MBPKMGJGNHK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1388D0)
#define MBPKMGJGNHK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1381D0)
#define MBPKMGJGNHK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D138680)

inline static constexpr unsigned int MBPKMGJGNHK_TypeDefinitionIndex = 15255;

	class MBPKMGJGNHK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x476F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x476F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x47700);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x10FF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBPKMGJGNHK")->GetStaticField(0x10FF1);
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

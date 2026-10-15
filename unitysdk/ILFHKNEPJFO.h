#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCharacterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILFHKNEPJFO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEF12B0)
#define ILFHKNEPJFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF1E00)
#define ILFHKNEPJFO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEF1650)
#define ILFHKNEPJFO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEF12F0)
#define ILFHKNEPJFO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEF1B40)
#define ILFHKNEPJFO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEF16F0)
#define ILFHKNEPJFO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEF1740)
#define ILFHKNEPJFO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEF1520)
#define ILFHKNEPJFO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEF1AE0)
#define ILFHKNEPJFO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEF1C70)
#define ILFHKNEPJFO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEF15B0)
#define ILFHKNEPJFO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEF1A60)

inline static constexpr unsigned int ILFHKNEPJFO_TypeDefinitionIndex = 15254;

	class ILFHKNEPJFO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ILFHKNEPJFO")->GetStaticField(0x23730);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ILFHKNEPJFO")->GetStaticField(0x23738);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>**)UnitySDK::FromName("", "ILFHKNEPJFO")->GetStaticField(0x23740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ILFHKNEPJFO")->GetStaticField(0x7B10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ILFHKNEPJFO")->GetStaticField(0x7B11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILFHKNEPJFO_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILFHKNEPJFO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILFHKNEPJFO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILFHKNEPJFO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ILFHKNEPJFO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ILFHKNEPJFO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ILFHKNEPJFO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookCharacterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookCharacterRow*))((::PBYTE)hIl2Cpp + ILFHKNEPJFO_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>*(*)())((::PBYTE)hIl2Cpp + ILFHKNEPJFO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILFHKNEPJFO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterRow*>(*)())((::PBYTE)hIl2Cpp + ILFHKNEPJFO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookCharacterRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookCharacterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ILFHKNEPJFO_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

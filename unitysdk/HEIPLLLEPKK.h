#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicUnitRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define HEIPLLLEPKK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE9ABD0)
#define HEIPLLLEPKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE9B280)
#define HEIPLLLEPKK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE9AD40)
#define HEIPLLLEPKK_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE9A980)
#define HEIPLLLEPKK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE9A5C0)
#define HEIPLLLEPKK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE9A850)
#define HEIPLLLEPKK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE9ADE0)
#define HEIPLLLEPKK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE9AE30)
#define HEIPLLLEPKK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE9AC10)
#define HEIPLLLEPKK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE9A7F0)
#define HEIPLLLEPKK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE9AA00)
#define HEIPLLLEPKK_PJFCKCGOIIE_OFFSET UNITYSDK_OFFSET(0x1CE9B190)
#define HEIPLLLEPKK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE9ACA0)
#define HEIPLLLEPKK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE9A540)

inline static constexpr unsigned int HEIPLLLEPKK_TypeDefinitionIndex = 14885;

	class HEIPLLLEPKK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x1CF60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x1CF68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>**)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x1CF70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x6940);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x6941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>*(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicUnitRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueMagicUnitRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HEIPLLLEPKK_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HEIPLLLEPKK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEIPLLLEPKK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HEIPLLLEPKK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicUnitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicUnitRow*))((::PBYTE)hIl2Cpp + HEIPLLLEPKK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::RPG::GameCore::MazeBuffRow* PJFCKCGOIIE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HEIPLLLEPKK_PJFCKCGOIIE_OFFSET))(a1, a2);
		}

	};

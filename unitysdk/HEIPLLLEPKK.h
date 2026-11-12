#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicUnitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEIPLLLEPKK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0778F0)
#define HEIPLLLEPKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E077FA0)
#define HEIPLLLEPKK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E077A60)
#define HEIPLLLEPKK_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E0776A0)
#define HEIPLLLEPKK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0772E0)
#define HEIPLLLEPKK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E077570)
#define HEIPLLLEPKK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E077B00)
#define HEIPLLLEPKK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E077B50)
#define HEIPLLLEPKK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E077930)
#define HEIPLLLEPKK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E077510)
#define HEIPLLLEPKK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E077720)
#define HEIPLLLEPKK_PJFCKCGOIIE_OFFSET UNITYSDK_OFFSET(0x1E077EB0)
#define HEIPLLLEPKK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0779C0)
#define HEIPLLLEPKK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E077260)

inline static constexpr unsigned int HEIPLLLEPKK_TypeDefinitionIndex = 15041;

	class HEIPLLLEPKK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>**)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x14230);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x14238);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x14240);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x43F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HEIPLLLEPKK")->GetStaticField(0x43F1);
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

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>, ::RPG::GameCore::RogueMagicUnitRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>, ::RPG::GameCore::RogueMagicUnitRow*>(*)())((::PBYTE)hIl2Cpp + HEIPLLLEPKK_EHAFELPCLKB_OFFSET))();
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

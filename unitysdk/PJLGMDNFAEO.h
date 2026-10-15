#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJLGMDNFAEO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C7670)
#define PJLGMDNFAEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C7D20)
#define PJLGMDNFAEO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C77E0)
#define PJLGMDNFAEO_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D2C7450)
#define PJLGMDNFAEO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C7090)
#define PJLGMDNFAEO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C7320)
#define PJLGMDNFAEO_HCBKFFGHOCB_OFFSET UNITYSDK_OFFSET(0x1D2C7C30)
#define PJLGMDNFAEO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C7880)
#define PJLGMDNFAEO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C78D0)
#define PJLGMDNFAEO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C76B0)
#define PJLGMDNFAEO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C72C0)
#define PJLGMDNFAEO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C74D0)
#define PJLGMDNFAEO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C7740)
#define PJLGMDNFAEO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C7010)

inline static constexpr unsigned int PJLGMDNFAEO_TypeDefinitionIndex = 14881;

	class PJLGMDNFAEO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PJLGMDNFAEO")->GetStaticField(0x50D10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>**)UnitySDK::FromName("", "PJLGMDNFAEO")->GetStaticField(0x50D18);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PJLGMDNFAEO")->GetStaticField(0x50D20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJLGMDNFAEO")->GetStaticField(0x12380);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PJLGMDNFAEO")->GetStaticField(0x12381);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLGMDNFAEO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>*(*)())((::PBYTE)hIl2Cpp + PJLGMDNFAEO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJLGMDNFAEO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>(*)())((::PBYTE)hIl2Cpp + PJLGMDNFAEO_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>, ::RPG::GameCore::RogueMagicScepterRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>, ::RPG::GameCore::RogueMagicScepterRow*>(*)())((::PBYTE)hIl2Cpp + PJLGMDNFAEO_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicScepterRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueMagicScepterRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJLGMDNFAEO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJLGMDNFAEO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLGMDNFAEO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLGMDNFAEO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PJLGMDNFAEO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJLGMDNFAEO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PJLGMDNFAEO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicScepterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicScepterRow*))((::PBYTE)hIl2Cpp + PJLGMDNFAEO_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::RPG::GameCore::MazeBuffRow* HCBKFFGHOCB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJLGMDNFAEO_HCBKFFGHOCB_OFFSET))(a1, a2);
		}

	};

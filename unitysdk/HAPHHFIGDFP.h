#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHexRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAPHHFIGDFP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E05E010)
#define HAPHHFIGDFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05E590)
#define HAPHHFIGDFP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E05E180)
#define HAPHHFIGDFP_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E05DE40)
#define HAPHHFIGDFP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E05DA80)
#define HAPHHFIGDFP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E05DD10)
#define HAPHHFIGDFP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E05E220)
#define HAPHHFIGDFP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E05E270)
#define HAPHHFIGDFP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E05E050)
#define HAPHHFIGDFP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E05DCB0)
#define HAPHHFIGDFP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E05DEC0)
#define HAPHHFIGDFP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E05E0E0)
#define HAPHHFIGDFP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E05DA00)

inline static constexpr unsigned int HAPHHFIGDFP_TypeDefinitionIndex = 15182;

	class HAPHHFIGDFP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>**)UnitySDK::FromName("", "HAPHHFIGDFP")->GetStaticField(0x12EE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HAPHHFIGDFP")->GetStaticField(0x12EE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HAPHHFIGDFP")->GetStaticField(0x12EF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HAPHHFIGDFP")->GetStaticField(0x3D20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HAPHHFIGDFP")->GetStaticField(0x3D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAPHHFIGDFP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>*(*)())((::PBYTE)hIl2Cpp + HAPHHFIGDFP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAPHHFIGDFP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>(*)())((::PBYTE)hIl2Cpp + HAPHHFIGDFP_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>, ::RPG::GameCore::RogueTournHexRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>, ::RPG::GameCore::RogueTournHexRow*>(*)())((::PBYTE)hIl2Cpp + HAPHHFIGDFP_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournHexRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournHexRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HAPHHFIGDFP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAPHHFIGDFP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAPHHFIGDFP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAPHHFIGDFP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HAPHHFIGDFP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAPHHFIGDFP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HAPHHFIGDFP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournHexRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournHexRow*))((::PBYTE)hIl2Cpp + HAPHHFIGDFP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

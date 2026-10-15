#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnInviteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOKFDDPGMMI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0945E0)
#define KOKFDDPGMMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D094B60)
#define KOKFDDPGMMI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D094750)
#define KOKFDDPGMMI_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D0943F0)
#define KOKFDDPGMMI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D094030)
#define KOKFDDPGMMI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0942C0)
#define KOKFDDPGMMI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0947F0)
#define KOKFDDPGMMI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D094840)
#define KOKFDDPGMMI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D094620)
#define KOKFDDPGMMI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D094260)
#define KOKFDDPGMMI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D094450)
#define KOKFDDPGMMI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0946B0)
#define KOKFDDPGMMI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D093FB0)

inline static constexpr unsigned int KOKFDDPGMMI_TypeDefinitionIndex = 14541;

	class KOKFDDPGMMI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>**)UnitySDK::FromName("", "KOKFDDPGMMI")->GetStaticField(0x373B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KOKFDDPGMMI")->GetStaticField(0x373B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KOKFDDPGMMI")->GetStaticField(0x373C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KOKFDDPGMMI")->GetStaticField(0xB230);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KOKFDDPGMMI")->GetStaticField(0xB231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOKFDDPGMMI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>*(*)())((::PBYTE)hIl2Cpp + KOKFDDPGMMI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOKFDDPGMMI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>(*)())((::PBYTE)hIl2Cpp + KOKFDDPGMMI_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>, ::RPG::GameCore::PlayerReturnInviteRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>, ::RPG::GameCore::PlayerReturnInviteRow*>(*)())((::PBYTE)hIl2Cpp + KOKFDDPGMMI_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnInviteRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnInviteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KOKFDDPGMMI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOKFDDPGMMI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOKFDDPGMMI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOKFDDPGMMI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KOKFDDPGMMI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOKFDDPGMMI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KOKFDDPGMMI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerReturnInviteRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnInviteRow*))((::PBYTE)hIl2Cpp + KOKFDDPGMMI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

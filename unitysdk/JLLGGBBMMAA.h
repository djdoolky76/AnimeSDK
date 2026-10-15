#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSourceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JLLGGBBMMAA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D018960)
#define JLLGGBBMMAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D018EE0)
#define JLLGGBBMMAA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D018AD0)
#define JLLGGBBMMAA_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D018750)
#define JLLGGBBMMAA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D018390)
#define JLLGGBBMMAA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D018620)
#define JLLGGBBMMAA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D018B70)
#define JLLGGBBMMAA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D018BC0)
#define JLLGGBBMMAA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0189A0)
#define JLLGGBBMMAA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0185C0)
#define JLLGGBBMMAA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0187D0)
#define JLLGGBBMMAA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D018A30)
#define JLLGGBBMMAA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D018310)

inline static constexpr unsigned int JLLGGBBMMAA_TypeDefinitionIndex = 10941;

	class JLLGGBBMMAA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JLLGGBBMMAA")->GetStaticField(0x2F700);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>**)UnitySDK::FromName("", "JLLGGBBMMAA")->GetStaticField(0x2F708);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JLLGGBBMMAA")->GetStaticField(0x2F710);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JLLGGBBMMAA")->GetStaticField(0x9C00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JLLGGBBMMAA")->GetStaticField(0x9C01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLLGGBBMMAA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JLLGGBBMMAA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JLLGGBBMMAA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>(*)())((::PBYTE)hIl2Cpp + JLLGGBBMMAA_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>, ::RPG::GameCore::AvatarSourceConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSourceConfigRow*>, ::RPG::GameCore::AvatarSourceConfigRow*>(*)())((::PBYTE)hIl2Cpp + JLLGGBBMMAA_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSourceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarSourceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JLLGGBBMMAA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JLLGGBBMMAA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLLGGBBMMAA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLLGGBBMMAA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JLLGGBBMMAA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLLGGBBMMAA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JLLGGBBMMAA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarSourceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSourceConfigRow*))((::PBYTE)hIl2Cpp + JLLGGBBMMAA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

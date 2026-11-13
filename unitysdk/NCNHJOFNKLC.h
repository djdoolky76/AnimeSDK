#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarPropertyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCNHJOFNKLC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E89BC70)
#define NCNHJOFNKLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89C1F0)
#define NCNHJOFNKLC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E89BDE0)
#define NCNHJOFNKLC_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E89BAA0)
#define NCNHJOFNKLC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E89B6E0)
#define NCNHJOFNKLC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E89B970)
#define NCNHJOFNKLC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E89BE80)
#define NCNHJOFNKLC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E89BED0)
#define NCNHJOFNKLC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E89BCB0)
#define NCNHJOFNKLC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E89B910)
#define NCNHJOFNKLC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E89BB20)
#define NCNHJOFNKLC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E89BD40)
#define NCNHJOFNKLC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E89B660)

inline static constexpr unsigned int NCNHJOFNKLC_TypeDefinitionIndex = 11770;

	class NCNHJOFNKLC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0x4E3C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0x4E3C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>**)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0x4E3D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0x11250);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0x11251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCNHJOFNKLC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NCNHJOFNKLC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCNHJOFNKLC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>(*)())((::PBYTE)hIl2Cpp + NCNHJOFNKLC_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>(*)())((::PBYTE)hIl2Cpp + NCNHJOFNKLC_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow* LMBKNCAIDLC(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*(*)(::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + NCNHJOFNKLC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCNHJOFNKLC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCNHJOFNKLC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCNHJOFNKLC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NCNHJOFNKLC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NCNHJOFNKLC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NCNHJOFNKLC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveAvatarPropertyConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*))((::PBYTE)hIl2Cpp + NCNHJOFNKLC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

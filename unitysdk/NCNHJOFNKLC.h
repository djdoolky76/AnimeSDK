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

#define NCNHJOFNKLC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E40ACF0)
#define NCNHJOFNKLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40B270)
#define NCNHJOFNKLC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E40AE60)
#define NCNHJOFNKLC_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E40AB20)
#define NCNHJOFNKLC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E40A760)
#define NCNHJOFNKLC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E40A9F0)
#define NCNHJOFNKLC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E40AF00)
#define NCNHJOFNKLC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E40AF50)
#define NCNHJOFNKLC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E40AD30)
#define NCNHJOFNKLC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E40A990)
#define NCNHJOFNKLC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E40ABA0)
#define NCNHJOFNKLC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E40ADC0)
#define NCNHJOFNKLC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E40A6E0)

inline static constexpr unsigned int NCNHJOFNKLC_TypeDefinitionIndex = 11770;

	class NCNHJOFNKLC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0x479F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0x479F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>**)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0x47A00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0xED60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NCNHJOFNKLC")->GetStaticField(0xED61);
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

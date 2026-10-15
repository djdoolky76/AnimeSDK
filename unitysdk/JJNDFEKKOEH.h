#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarUpgradeLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJNDFEKKOEH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D00F3A0)
#define JJNDFEKKOEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D00F970)
#define JJNDFEKKOEH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D00F510)
#define JJNDFEKKOEH_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D00F190)
#define JJNDFEKKOEH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D00ED90)
#define JJNDFEKKOEH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D00F020)
#define JJNDFEKKOEH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D00F5B0)
#define JJNDFEKKOEH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D00F600)
#define JJNDFEKKOEH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D00F3E0)
#define JJNDFEKKOEH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D00EFC0)
#define JJNDFEKKOEH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D00F210)
#define JJNDFEKKOEH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D00F470)
#define JJNDFEKKOEH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D00ED10)

inline static constexpr unsigned int JJNDFEKKOEH_TypeDefinitionIndex = 11717;

	class JJNDFEKKOEH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JJNDFEKKOEH")->GetStaticField(0x2F220);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJNDFEKKOEH")->GetStaticField(0x2F228);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>**)UnitySDK::FromName("", "JJNDFEKKOEH")->GetStaticField(0x2F230);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJNDFEKKOEH")->GetStaticField(0x9B20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJNDFEKKOEH")->GetStaticField(0x9B21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNDFEKKOEH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>*(*)())((::PBYTE)hIl2Cpp + JJNDFEKKOEH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJNDFEKKOEH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>(*)())((::PBYTE)hIl2Cpp + JJNDFEKKOEH_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>, ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*>(*)())((::PBYTE)hIl2Cpp + JJNDFEKKOEH_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJNDFEKKOEH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJNDFEKKOEH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNDFEKKOEH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNDFEKKOEH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJNDFEKKOEH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJNDFEKKOEH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJNDFEKKOEH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarUpgradeLimitRow*))((::PBYTE)hIl2Cpp + JJNDFEKKOEH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

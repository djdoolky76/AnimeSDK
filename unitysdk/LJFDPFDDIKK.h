#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityDisplayRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJFDPFDDIKK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D100350)
#define LJFDPFDDIKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D100920)
#define LJFDPFDDIKK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1004C0)
#define LJFDPFDDIKK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0FFDC0)
#define LJFDPFDDIKK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D100050)
#define LJFDPFDDIKK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D100560)
#define LJFDPFDDIKK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1005B0)
#define LJFDPFDDIKK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D100390)
#define LJFDPFDDIKK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0FFFF0)
#define LJFDPFDDIKK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1001C0)
#define LJFDPFDDIKK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D100420)
#define LJFDPFDDIKK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0FFD40)

	class LJFDPFDDIKK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LJFDPFDDIKK")->GetStaticField(0x3F5C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>**)UnitySDK::FromName("", "LJFDPFDDIKK")->GetStaticField(0x3F5C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJFDPFDDIKK")->GetStaticField(0x3F5D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJFDPFDDIKK")->GetStaticField(0xD850);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJFDPFDDIKK")->GetStaticField(0xD851);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFDPFDDIKK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + LJFDPFDDIKK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJFDPFDDIKK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>(*)())((::PBYTE)hIl2Cpp + LJFDPFDDIKK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraAbilityDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraAbilityDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LJFDPFDDIKK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJFDPFDDIKK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFDPFDDIKK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFDPFDDIKK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LJFDPFDDIKK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJFDPFDDIKK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LJFDPFDDIKK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraAbilityDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraAbilityDisplayRow*))((::PBYTE)hIl2Cpp + LJFDPFDDIKK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

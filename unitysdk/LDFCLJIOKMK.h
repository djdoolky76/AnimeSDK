#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelItemRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define LDFCLJIOKMK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0DF630)
#define LDFCLJIOKMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0DFBB0)
#define LDFCLJIOKMK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0DF7A0)
#define LDFCLJIOKMK_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D0DF480)
#define LDFCLJIOKMK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0DF0C0)
#define LDFCLJIOKMK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0DF350)
#define LDFCLJIOKMK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0DF840)
#define LDFCLJIOKMK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0DF890)
#define LDFCLJIOKMK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0DF670)
#define LDFCLJIOKMK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0DF2F0)
#define LDFCLJIOKMK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0DF4E0)
#define LDFCLJIOKMK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0DF700)
#define LDFCLJIOKMK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0DF040)

	class LDFCLJIOKMK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>**)UnitySDK::FromName("", "LDFCLJIOKMK")->GetStaticField(0x3C460);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LDFCLJIOKMK")->GetStaticField(0x3C468);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LDFCLJIOKMK")->GetStaticField(0x3C470);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LDFCLJIOKMK")->GetStaticField(0xCE40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LDFCLJIOKMK")->GetStaticField(0xCE41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFCLJIOKMK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>*(*)())((::PBYTE)hIl2Cpp + LDFCLJIOKMK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDFCLJIOKMK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>(*)())((::PBYTE)hIl2Cpp + LDFCLJIOKMK_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + LDFCLJIOKMK_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LDFCLJIOKMK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDFCLJIOKMK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFCLJIOKMK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFCLJIOKMK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LDFCLJIOKMK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDFCLJIOKMK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LDFCLJIOKMK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelItemRow*))((::PBYTE)hIl2Cpp + LDFCLJIOKMK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

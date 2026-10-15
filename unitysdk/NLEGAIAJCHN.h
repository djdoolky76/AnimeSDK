#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelChimeraRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLEGAIAJCHN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D232940)
#define NLEGAIAJCHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D232EC0)
#define NLEGAIAJCHN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D232AB0)
#define NLEGAIAJCHN_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D232790)
#define NLEGAIAJCHN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2323D0)
#define NLEGAIAJCHN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D232660)
#define NLEGAIAJCHN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D232B50)
#define NLEGAIAJCHN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D232BA0)
#define NLEGAIAJCHN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D232980)
#define NLEGAIAJCHN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D232600)
#define NLEGAIAJCHN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2327F0)
#define NLEGAIAJCHN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D232A10)
#define NLEGAIAJCHN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D232350)

inline static constexpr unsigned int NLEGAIAJCHN_TypeDefinitionIndex = 11114;

	class NLEGAIAJCHN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NLEGAIAJCHN")->GetStaticField(0x30400);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>**)UnitySDK::FromName("", "NLEGAIAJCHN")->GetStaticField(0x30408);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NLEGAIAJCHN")->GetStaticField(0x30410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NLEGAIAJCHN")->GetStaticField(0xA390);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NLEGAIAJCHN")->GetStaticField(0xA391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLEGAIAJCHN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>*(*)())((::PBYTE)hIl2Cpp + NLEGAIAJCHN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLEGAIAJCHN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>(*)())((::PBYTE)hIl2Cpp + NLEGAIAJCHN_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>, ::RPG::GameCore::ChimeraDuelChimeraRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>, ::RPG::GameCore::ChimeraDuelChimeraRow*>(*)())((::PBYTE)hIl2Cpp + NLEGAIAJCHN_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelChimeraRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelChimeraRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLEGAIAJCHN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLEGAIAJCHN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLEGAIAJCHN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLEGAIAJCHN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NLEGAIAJCHN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLEGAIAJCHN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NLEGAIAJCHN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelChimeraRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelChimeraRow*))((::PBYTE)hIl2Cpp + NLEGAIAJCHN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

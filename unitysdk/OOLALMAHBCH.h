#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonExpScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOLALMAHBCH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2B98A0)
#define OOLALMAHBCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2B9ED0)
#define OOLALMAHBCH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2B9A10)
#define OOLALMAHBCH_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D2B9610)
#define OOLALMAHBCH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2B9210)
#define OOLALMAHBCH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2B94A0)
#define OOLALMAHBCH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2B9AB0)
#define OOLALMAHBCH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2B9B00)
#define OOLALMAHBCH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2B98E0)
#define OOLALMAHBCH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2B9440)
#define OOLALMAHBCH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2B9690)
#define OOLALMAHBCH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2B9970)
#define OOLALMAHBCH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2B9190)

inline static constexpr unsigned int OOLALMAHBCH_TypeDefinitionIndex = 13578;

	class OOLALMAHBCH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>**)UnitySDK::FromName("", "OOLALMAHBCH")->GetStaticField(0x3CF70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OOLALMAHBCH")->GetStaticField(0x3CF78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOLALMAHBCH")->GetStaticField(0x3CF80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOLALMAHBCH")->GetStaticField(0xD160);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOLALMAHBCH")->GetStaticField(0xD161);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOLALMAHBCH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>*(*)())((::PBYTE)hIl2Cpp + OOLALMAHBCH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOLALMAHBCH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + OOLALMAHBCH_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>, ::RPG::GameCore::GridFightSeasonExpScoreRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonExpScoreRow*>, ::RPG::GameCore::GridFightSeasonExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + OOLALMAHBCH_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonExpScoreRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::GridFightSeasonExpScoreRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OOLALMAHBCH_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOLALMAHBCH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOLALMAHBCH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOLALMAHBCH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OOLALMAHBCH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOLALMAHBCH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OOLALMAHBCH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonExpScoreRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonExpScoreRow*))((::PBYTE)hIl2Cpp + OOLALMAHBCH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTutorialTaskRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BACNGNBODEC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF11A0)
#define BACNGNBODEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF1770)
#define BACNGNBODEC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF1310)
#define BACNGNBODEC_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CCF0F90)
#define BACNGNBODEC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF0B90)
#define BACNGNBODEC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF0E20)
#define BACNGNBODEC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF13B0)
#define BACNGNBODEC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF1400)
#define BACNGNBODEC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF11E0)
#define BACNGNBODEC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF0DC0)
#define BACNGNBODEC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF1010)
#define BACNGNBODEC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF1270)
#define BACNGNBODEC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF0B10)

inline static constexpr unsigned int BACNGNBODEC_TypeDefinitionIndex = 13652;

	class BACNGNBODEC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BACNGNBODEC")->GetStaticField(0x3CD30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>**)UnitySDK::FromName("", "BACNGNBODEC")->GetStaticField(0x3CD38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BACNGNBODEC")->GetStaticField(0x3CD40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BACNGNBODEC")->GetStaticField(0xD0B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BACNGNBODEC")->GetStaticField(0xD0B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACNGNBODEC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>*(*)())((::PBYTE)hIl2Cpp + BACNGNBODEC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BACNGNBODEC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>(*)())((::PBYTE)hIl2Cpp + BACNGNBODEC_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>, ::RPG::GameCore::GridFightTutorialTaskRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialTaskRow*>, ::RPG::GameCore::GridFightTutorialTaskRow*>(*)())((::PBYTE)hIl2Cpp + BACNGNBODEC_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTutorialTaskRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTutorialTaskRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BACNGNBODEC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BACNGNBODEC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACNGNBODEC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACNGNBODEC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BACNGNBODEC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BACNGNBODEC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BACNGNBODEC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTutorialTaskRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTutorialTaskRow*))((::PBYTE)hIl2Cpp + BACNGNBODEC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

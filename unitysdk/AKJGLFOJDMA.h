#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicGambleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKJGLFOJDMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DE7E3B0)
#define AKJGLFOJDMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7E980)
#define AKJGLFOJDMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DE7E520)
#define AKJGLFOJDMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DE7DE20)
#define AKJGLFOJDMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DE7E0B0)
#define AKJGLFOJDMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DE7E5C0)
#define AKJGLFOJDMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DE7E610)
#define AKJGLFOJDMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DE7E3F0)
#define AKJGLFOJDMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DE7E050)
#define AKJGLFOJDMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DE7E220)
#define AKJGLFOJDMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DE7E480)
#define AKJGLFOJDMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DE7DDA0)

inline static constexpr unsigned int AKJGLFOJDMA_TypeDefinitionIndex = 15045;

	class AKJGLFOJDMA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0x2FF10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0x2FF18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>**)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0x2FF20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0xA1D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0xA1D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKJGLFOJDMA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + AKJGLFOJDMA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKJGLFOJDMA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>(*)())((::PBYTE)hIl2Cpp + AKJGLFOJDMA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicGambleGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicGambleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKJGLFOJDMA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKJGLFOJDMA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKJGLFOJDMA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKJGLFOJDMA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKJGLFOJDMA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKJGLFOJDMA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AKJGLFOJDMA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicGambleGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicGambleGroupRow*))((::PBYTE)hIl2Cpp + AKJGLFOJDMA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

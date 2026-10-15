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

#define AKJGLFOJDMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCA6BF0)
#define AKJGLFOJDMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA71C0)
#define AKJGLFOJDMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCA6D60)
#define AKJGLFOJDMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCA6660)
#define AKJGLFOJDMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCA68F0)
#define AKJGLFOJDMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCA6E00)
#define AKJGLFOJDMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCA6E50)
#define AKJGLFOJDMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCA6C30)
#define AKJGLFOJDMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCA6890)
#define AKJGLFOJDMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCA6A60)
#define AKJGLFOJDMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCA6CC0)
#define AKJGLFOJDMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCA65E0)

inline static constexpr unsigned int AKJGLFOJDMA_TypeDefinitionIndex = 14889;

	class AKJGLFOJDMA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleGroupRow*>**)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0x41A50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0x41A58);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0x41A60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0xF9B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AKJGLFOJDMA")->GetStaticField(0xF9B1);
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

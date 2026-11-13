#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNHJDIODJCI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1ECEDBF0)
#define KNHJDIODJCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECEE170)
#define KNHJDIODJCI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1ECEDD60)
#define KNHJDIODJCI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1ECED6A0)
#define KNHJDIODJCI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1ECED930)
#define KNHJDIODJCI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1ECEDE00)
#define KNHJDIODJCI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1ECEDE50)
#define KNHJDIODJCI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1ECEDC30)
#define KNHJDIODJCI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1ECED8D0)
#define KNHJDIODJCI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1ECEDA60)
#define KNHJDIODJCI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1ECEDCC0)
#define KNHJDIODJCI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1ECED620)

inline static constexpr unsigned int KNHJDIODJCI_TypeDefinitionIndex = 11513;

	class KNHJDIODJCI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KNHJDIODJCI")->GetStaticField(0x39A60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KNHJDIODJCI")->GetStaticField(0x39A68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryRow*>**)UnitySDK::FromName("", "KNHJDIODJCI")->GetStaticField(0x39A70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KNHJDIODJCI")->GetStaticField(0xB700);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KNHJDIODJCI")->GetStaticField(0xB701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHJDIODJCI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryRow*>*(*)())((::PBYTE)hIl2Cpp + KNHJDIODJCI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNHJDIODJCI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FantasticStoryRow*>(*)())((::PBYTE)hIl2Cpp + KNHJDIODJCI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FantasticStoryRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FantasticStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KNHJDIODJCI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNHJDIODJCI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHJDIODJCI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHJDIODJCI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KNHJDIODJCI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KNHJDIODJCI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KNHJDIODJCI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FantasticStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FantasticStoryRow*))((::PBYTE)hIl2Cpp + KNHJDIODJCI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

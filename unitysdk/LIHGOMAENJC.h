#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRelicBoxQuestTabRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIHGOMAENJC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F8D30)
#define LIHGOMAENJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F92B0)
#define LIHGOMAENJC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F8EA0)
#define LIHGOMAENJC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F87E0)
#define LIHGOMAENJC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F8A70)
#define LIHGOMAENJC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F8F40)
#define LIHGOMAENJC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F8F90)
#define LIHGOMAENJC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F8D70)
#define LIHGOMAENJC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F8A10)
#define LIHGOMAENJC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F8BA0)
#define LIHGOMAENJC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F8E00)
#define LIHGOMAENJC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F8760)

inline static constexpr unsigned int LIHGOMAENJC_TypeDefinitionIndex = 12334;

	class LIHGOMAENJC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*>**)UnitySDK::FromName("", "LIHGOMAENJC")->GetStaticField(0x3E120);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIHGOMAENJC")->GetStaticField(0x3E128);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LIHGOMAENJC")->GetStaticField(0x3E130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIHGOMAENJC")->GetStaticField(0xD480);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIHGOMAENJC")->GetStaticField(0xD481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIHGOMAENJC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*>*(*)())((::PBYTE)hIl2Cpp + LIHGOMAENJC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIHGOMAENJC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestTabRow*>(*)())((::PBYTE)hIl2Cpp + LIHGOMAENJC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRelicBoxQuestTabRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRelicBoxQuestTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIHGOMAENJC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIHGOMAENJC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIHGOMAENJC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIHGOMAENJC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIHGOMAENJC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIHGOMAENJC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIHGOMAENJC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRelicBoxQuestTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRelicBoxQuestTabRow*))((::PBYTE)hIl2Cpp + LIHGOMAENJC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

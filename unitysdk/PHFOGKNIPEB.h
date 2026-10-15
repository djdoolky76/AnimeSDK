#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEndlessWorkRoundRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHFOGKNIPEB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E61A0)
#define PHFOGKNIPEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E6720)
#define PHFOGKNIPEB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E6310)
#define PHFOGKNIPEB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E5C50)
#define PHFOGKNIPEB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E5EE0)
#define PHFOGKNIPEB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E63B0)
#define PHFOGKNIPEB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E6400)
#define PHFOGKNIPEB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E61E0)
#define PHFOGKNIPEB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E5E80)
#define PHFOGKNIPEB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E6010)
#define PHFOGKNIPEB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E6270)
#define PHFOGKNIPEB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E5BD0)

inline static constexpr unsigned int PHFOGKNIPEB_TypeDefinitionIndex = 13049;

	class PHFOGKNIPEB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEndlessWorkRoundRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEndlessWorkRoundRow*>**)UnitySDK::FromName("", "PHFOGKNIPEB")->GetStaticField(0x40040);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PHFOGKNIPEB")->GetStaticField(0x40048);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHFOGKNIPEB")->GetStaticField(0x40050);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHFOGKNIPEB")->GetStaticField(0xDA90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHFOGKNIPEB")->GetStaticField(0xDA91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHFOGKNIPEB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEndlessWorkRoundRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEndlessWorkRoundRow*>*(*)())((::PBYTE)hIl2Cpp + PHFOGKNIPEB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHFOGKNIPEB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEndlessWorkRoundRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEndlessWorkRoundRow*>(*)())((::PBYTE)hIl2Cpp + PHFOGKNIPEB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraEndlessWorkRoundRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraEndlessWorkRoundRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHFOGKNIPEB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHFOGKNIPEB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHFOGKNIPEB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHFOGKNIPEB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHFOGKNIPEB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHFOGKNIPEB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHFOGKNIPEB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraEndlessWorkRoundRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraEndlessWorkRoundRow*))((::PBYTE)hIl2Cpp + PHFOGKNIPEB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

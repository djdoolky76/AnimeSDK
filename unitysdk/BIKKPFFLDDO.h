#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkRoundRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIKKPFFLDDO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F194BA0)
#define BIKKPFFLDDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F195120)
#define BIKKPFFLDDO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F194D10)
#define BIKKPFFLDDO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F194690)
#define BIKKPFFLDDO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F194920)
#define BIKKPFFLDDO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F194DB0)
#define BIKKPFFLDDO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F194E00)
#define BIKKPFFLDDO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F194BE0)
#define BIKKPFFLDDO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F1948C0)
#define BIKKPFFLDDO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F194A50)
#define BIKKPFFLDDO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F194C70)
#define BIKKPFFLDDO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F194610)

inline static constexpr unsigned int BIKKPFFLDDO_TypeDefinitionIndex = 13092;

	class BIKKPFFLDDO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BIKKPFFLDDO")->GetStaticField(0x48DC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BIKKPFFLDDO")->GetStaticField(0x48DC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>**)UnitySDK::FromName("", "BIKKPFFLDDO")->GetStaticField(0x48DD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BIKKPFFLDDO")->GetStaticField(0xE1F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BIKKPFFLDDO")->GetStaticField(0xE1F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIKKPFFLDDO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>*(*)())((::PBYTE)hIl2Cpp + BIKKPFFLDDO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BIKKPFFLDDO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>(*)())((::PBYTE)hIl2Cpp + BIKKPFFLDDO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraWorkRoundRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraWorkRoundRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BIKKPFFLDDO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BIKKPFFLDDO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIKKPFFLDDO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIKKPFFLDDO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BIKKPFFLDDO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIKKPFFLDDO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BIKKPFFLDDO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraWorkRoundRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraWorkRoundRow*))((::PBYTE)hIl2Cpp + BIKKPFFLDDO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

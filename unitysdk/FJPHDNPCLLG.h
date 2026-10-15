#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenDialogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJPHDNPCLLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDFCF70)
#define FJPHDNPCLLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDFD540)
#define FJPHDNPCLLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDFD0E0)
#define FJPHDNPCLLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDFC9E0)
#define FJPHDNPCLLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDFCC70)
#define FJPHDNPCLLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDFD180)
#define FJPHDNPCLLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDFD1D0)
#define FJPHDNPCLLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDFCFB0)
#define FJPHDNPCLLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDFCC10)
#define FJPHDNPCLLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDFCDE0)
#define FJPHDNPCLLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDFD040)
#define FJPHDNPCLLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDFC960)

inline static constexpr unsigned int FJPHDNPCLLG_TypeDefinitionIndex = 11652;

	class FJPHDNPCLLG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FJPHDNPCLLG")->GetStaticField(0x14380);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FJPHDNPCLLG")->GetStaticField(0x14388);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>**)UnitySDK::FromName("", "FJPHDNPCLLG")->GetStaticField(0x14390);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FJPHDNPCLLG")->GetStaticField(0x4CD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FJPHDNPCLLG")->GetStaticField(0x4CD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJPHDNPCLLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + FJPHDNPCLLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJPHDNPCLLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenDialogueRow*>(*)())((::PBYTE)hIl2Cpp + FJPHDNPCLLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenDialogueRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FJPHDNPCLLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJPHDNPCLLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJPHDNPCLLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJPHDNPCLLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FJPHDNPCLLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJPHDNPCLLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FJPHDNPCLLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenDialogueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenDialogueRow*))((::PBYTE)hIl2Cpp + FJPHDNPCLLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

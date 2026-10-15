#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenPhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPKFCDNLHCO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC933C0)
#define CPKFCDNLHCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC939C0)
#define CPKFCDNLHCO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC93530)
#define CPKFCDNLHCO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC92DF0)
#define CPKFCDNLHCO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC93080)
#define CPKFCDNLHCO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC935D0)
#define CPKFCDNLHCO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC93620)
#define CPKFCDNLHCO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC93400)
#define CPKFCDNLHCO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC93020)
#define CPKFCDNLHCO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC931F0)
#define CPKFCDNLHCO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC93490)
#define CPKFCDNLHCO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC92D70)

inline static constexpr unsigned int CPKFCDNLHCO_TypeDefinitionIndex = 11634;

	class CPKFCDNLHCO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseRow*>**)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0x40040);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0x40048);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0x40050);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0xF2A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0xF2A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKFCDNLHCO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + CPKFCDNLHCO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPKFCDNLHCO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseRow*>(*)())((::PBYTE)hIl2Cpp + CPKFCDNLHCO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenPhaseRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ActivityHipplenPhaseRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKFCDNLHCO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPKFCDNLHCO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKFCDNLHCO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKFCDNLHCO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPKFCDNLHCO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPKFCDNLHCO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPKFCDNLHCO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenPhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenPhaseRow*))((::PBYTE)hIl2Cpp + CPKFCDNLHCO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

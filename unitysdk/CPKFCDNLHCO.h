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

#define CPKFCDNLHCO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCC0C30)
#define CPKFCDNLHCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCC1230)
#define CPKFCDNLHCO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCC0DA0)
#define CPKFCDNLHCO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCC0660)
#define CPKFCDNLHCO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCC08F0)
#define CPKFCDNLHCO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCC0E40)
#define CPKFCDNLHCO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCC0E90)
#define CPKFCDNLHCO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCC0C70)
#define CPKFCDNLHCO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCC0890)
#define CPKFCDNLHCO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCC0A60)
#define CPKFCDNLHCO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCC0D00)
#define CPKFCDNLHCO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCC05E0)

inline static constexpr unsigned int CPKFCDNLHCO_TypeDefinitionIndex = 11634;

	class CPKFCDNLHCO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0x45FD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseRow*>**)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0x45FD8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0x45FE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0x10B90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPKFCDNLHCO")->GetStaticField(0x10B91);
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

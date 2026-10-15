#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenIncidentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPNELOLGBFM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9FB7D0)
#define BPNELOLGBFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9FBDA0)
#define BPNELOLGBFM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9FB940)
#define BPNELOLGBFM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9FB240)
#define BPNELOLGBFM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9FB4D0)
#define BPNELOLGBFM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9FB9E0)
#define BPNELOLGBFM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9FBA30)
#define BPNELOLGBFM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9FB810)
#define BPNELOLGBFM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9FB470)
#define BPNELOLGBFM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9FB640)
#define BPNELOLGBFM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9FB8A0)
#define BPNELOLGBFM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9FB1C0)

inline static constexpr unsigned int BPNELOLGBFM_TypeDefinitionIndex = 11650;

	class BPNELOLGBFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenIncidentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenIncidentRow*>**)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0x3A0E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0x3A0E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0x3A0F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0xC610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0xC611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPNELOLGBFM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenIncidentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenIncidentRow*>*(*)())((::PBYTE)hIl2Cpp + BPNELOLGBFM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPNELOLGBFM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenIncidentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenIncidentRow*>(*)())((::PBYTE)hIl2Cpp + BPNELOLGBFM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenIncidentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenIncidentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BPNELOLGBFM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPNELOLGBFM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPNELOLGBFM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPNELOLGBFM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BPNELOLGBFM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPNELOLGBFM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BPNELOLGBFM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenIncidentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenIncidentRow*))((::PBYTE)hIl2Cpp + BPNELOLGBFM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

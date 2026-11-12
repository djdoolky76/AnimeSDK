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

#define BPNELOLGBFM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EBC6260)
#define BPNELOLGBFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBC6830)
#define BPNELOLGBFM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EBC63D0)
#define BPNELOLGBFM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EBC5CD0)
#define BPNELOLGBFM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EBC5F60)
#define BPNELOLGBFM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EBC6470)
#define BPNELOLGBFM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EBC64C0)
#define BPNELOLGBFM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EBC62A0)
#define BPNELOLGBFM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EBC5F00)
#define BPNELOLGBFM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EBC60D0)
#define BPNELOLGBFM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EBC6330)
#define BPNELOLGBFM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EBC5C50)

inline static constexpr unsigned int BPNELOLGBFM_TypeDefinitionIndex = 11701;

	class BPNELOLGBFM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0x4BBF0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0x4BBF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenIncidentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenIncidentRow*>**)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0x4BC00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0xF610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BPNELOLGBFM")->GetStaticField(0xF611);
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

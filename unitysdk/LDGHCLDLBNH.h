#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDGHCLDLBNH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E0760)
#define LDGHCLDLBNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0CE0)
#define LDGHCLDLBNH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E08D0)
#define LDGHCLDLBNH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E0210)
#define LDGHCLDLBNH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E04A0)
#define LDGHCLDLBNH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E0970)
#define LDGHCLDLBNH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E09C0)
#define LDGHCLDLBNH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E07A0)
#define LDGHCLDLBNH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E0440)
#define LDGHCLDLBNH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E05D0)
#define LDGHCLDLBNH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E0830)
#define LDGHCLDLBNH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E0190)

inline static constexpr unsigned int LDGHCLDLBNH_TypeDefinitionIndex = 11688;

	class LDGHCLDLBNH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LDGHCLDLBNH")->GetStaticField(0x3C550);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotRow*>**)UnitySDK::FromName("", "LDGHCLDLBNH")->GetStaticField(0x3C558);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LDGHCLDLBNH")->GetStaticField(0x3C560);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LDGHCLDLBNH")->GetStaticField(0xCE60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LDGHCLDLBNH")->GetStaticField(0xCE61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDGHCLDLBNH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotRow*>*(*)())((::PBYTE)hIl2Cpp + LDGHCLDLBNH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDGHCLDLBNH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotRow*>(*)())((::PBYTE)hIl2Cpp + LDGHCLDLBNH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveTeamSlotRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveTeamSlotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LDGHCLDLBNH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDGHCLDLBNH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDGHCLDLBNH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDGHCLDLBNH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LDGHCLDLBNH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDGHCLDLBNH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LDGHCLDLBNH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveTeamSlotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamSlotRow*))((::PBYTE)hIl2Cpp + LDGHCLDLBNH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

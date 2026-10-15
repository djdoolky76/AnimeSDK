#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PossessionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONDELAAOAKF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D271CB0)
#define ONDELAAOAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D272230)
#define ONDELAAOAKF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D271E20)
#define ONDELAAOAKF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D271740)
#define ONDELAAOAKF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2719D0)
#define ONDELAAOAKF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D271EC0)
#define ONDELAAOAKF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D271F10)
#define ONDELAAOAKF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D271CF0)
#define ONDELAAOAKF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D271970)
#define ONDELAAOAKF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D271B40)
#define ONDELAAOAKF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D271D80)
#define ONDELAAOAKF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2716C0)

inline static constexpr unsigned int ONDELAAOAKF_TypeDefinitionIndex = 14556;

	class ONDELAAOAKF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x4A270);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>**)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x4A278);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x4A280);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x11170);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONDELAAOAKF")->GetStaticField(0x11171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PossessionConfigRow*>(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PossessionConfigRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::PossessionConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + ONDELAAOAKF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONDELAAOAKF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONDELAAOAKF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONDELAAOAKF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONDELAAOAKF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PossessionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PossessionConfigRow*))((::PBYTE)hIl2Cpp + ONDELAAOAKF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLHGOAGDCIP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D300770)
#define PLHGOAGDCIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D300D40)
#define PLHGOAGDCIP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D3008E0)
#define PLHGOAGDCIP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D3001E0)
#define PLHGOAGDCIP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D300470)
#define PLHGOAGDCIP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D300980)
#define PLHGOAGDCIP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D3009D0)
#define PLHGOAGDCIP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D3007B0)
#define PLHGOAGDCIP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D300410)
#define PLHGOAGDCIP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D3005E0)
#define PLHGOAGDCIP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D300840)
#define PLHGOAGDCIP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D300160)

inline static constexpr unsigned int PLHGOAGDCIP_TypeDefinitionIndex = 13515;

	class PLHGOAGDCIP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>**)UnitySDK::FromName("", "PLHGOAGDCIP")->GetStaticField(0x45510);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PLHGOAGDCIP")->GetStaticField(0x45518);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PLHGOAGDCIP")->GetStaticField(0x45520);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PLHGOAGDCIP")->GetStaticField(0x10780);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PLHGOAGDCIP")->GetStaticField(0x10781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHGOAGDCIP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PLHGOAGDCIP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLHGOAGDCIP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + PLHGOAGDCIP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleBackendRankConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRoleBackendRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PLHGOAGDCIP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLHGOAGDCIP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHGOAGDCIP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHGOAGDCIP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PLHGOAGDCIP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLHGOAGDCIP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PLHGOAGDCIP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleBackendRankConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleBackendRankConfigRow*))((::PBYTE)hIl2Cpp + PLHGOAGDCIP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

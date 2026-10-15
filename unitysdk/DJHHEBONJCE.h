#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleRemarkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJHHEBONJCE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD2E590)
#define DJHHEBONJCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD2EB60)
#define DJHHEBONJCE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD2E700)
#define DJHHEBONJCE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD2E000)
#define DJHHEBONJCE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD2E290)
#define DJHHEBONJCE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD2E7A0)
#define DJHHEBONJCE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD2E7F0)
#define DJHHEBONJCE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD2E5D0)
#define DJHHEBONJCE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD2E230)
#define DJHHEBONJCE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD2E400)
#define DJHHEBONJCE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD2E660)
#define DJHHEBONJCE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD2DF80)

inline static constexpr unsigned int DJHHEBONJCE_TypeDefinitionIndex = 13545;

	class DJHHEBONJCE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DJHHEBONJCE")->GetStaticField(0x4DA10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>**)UnitySDK::FromName("", "DJHHEBONJCE")->GetStaticField(0x4DA18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJHHEBONJCE")->GetStaticField(0x4DA20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DJHHEBONJCE")->GetStaticField(0x11D70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DJHHEBONJCE")->GetStaticField(0x11D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJHHEBONJCE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DJHHEBONJCE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJHHEBONJCE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>(*)())((::PBYTE)hIl2Cpp + DJHHEBONJCE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleRemarkConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRoleRemarkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DJHHEBONJCE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJHHEBONJCE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJHHEBONJCE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJHHEBONJCE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DJHHEBONJCE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJHHEBONJCE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DJHHEBONJCE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleRemarkConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleRemarkConfigRow*))((::PBYTE)hIl2Cpp + DJHHEBONJCE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

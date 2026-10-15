#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleBackRankConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDLMDINANFA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E26D0)
#define LDLMDINANFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E2CA0)
#define LDLMDINANFA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E2840)
#define LDLMDINANFA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E2140)
#define LDLMDINANFA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E23D0)
#define LDLMDINANFA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E28E0)
#define LDLMDINANFA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E2930)
#define LDLMDINANFA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E2710)
#define LDLMDINANFA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E2370)
#define LDLMDINANFA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E2540)
#define LDLMDINANFA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E27A0)
#define LDLMDINANFA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E20C0)

	class LDLMDINANFA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LDLMDINANFA")->GetStaticField(0x3C670);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LDLMDINANFA")->GetStaticField(0x3C678);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackRankConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackRankConfigRow*>**)UnitySDK::FromName("", "LDLMDINANFA")->GetStaticField(0x3C680);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LDLMDINANFA")->GetStaticField(0xCEC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LDLMDINANFA")->GetStaticField(0xCEC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDLMDINANFA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackRankConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LDLMDINANFA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDLMDINANFA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackRankConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + LDLMDINANFA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleBackRankConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRoleBackRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LDLMDINANFA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDLMDINANFA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDLMDINANFA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDLMDINANFA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LDLMDINANFA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDLMDINANFA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LDLMDINANFA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleBackRankConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleBackRankConfigRow*))((::PBYTE)hIl2Cpp + LDLMDINANFA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

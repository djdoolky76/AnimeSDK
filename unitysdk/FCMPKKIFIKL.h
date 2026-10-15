#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTalentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCMPKKIFIKL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDD6240)
#define FCMPKKIFIKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD6810)
#define FCMPKKIFIKL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDD63B0)
#define FCMPKKIFIKL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDD5CB0)
#define FCMPKKIFIKL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDD5F40)
#define FCMPKKIFIKL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDD6450)
#define FCMPKKIFIKL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDD64A0)
#define FCMPKKIFIKL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDD6280)
#define FCMPKKIFIKL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDD5EE0)
#define FCMPKKIFIKL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDD60B0)
#define FCMPKKIFIKL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDD6310)
#define FCMPKKIFIKL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDD5C30)

inline static constexpr unsigned int FCMPKKIFIKL_TypeDefinitionIndex = 14842;

	class FCMPKKIFIKL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCMPKKIFIKL")->GetStaticField(0x103A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalentRow*>**)UnitySDK::FromName("", "FCMPKKIFIKL")->GetStaticField(0x103A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FCMPKKIFIKL")->GetStaticField(0x103B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCMPKKIFIKL")->GetStaticField(0x3700);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCMPKKIFIKL")->GetStaticField(0x3701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCMPKKIFIKL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalentRow*>*(*)())((::PBYTE)hIl2Cpp + FCMPKKIFIKL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCMPKKIFIKL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalentRow*>(*)())((::PBYTE)hIl2Cpp + FCMPKKIFIKL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTalentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FCMPKKIFIKL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCMPKKIFIKL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCMPKKIFIKL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCMPKKIFIKL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCMPKKIFIKL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCMPKKIFIKL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCMPKKIFIKL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTalentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTalentRow*))((::PBYTE)hIl2Cpp + FCMPKKIFIKL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

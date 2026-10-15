#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeBadgeConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBFNFGGIGCL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF3380)
#define BBFNFGGIGCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF3950)
#define BBFNFGGIGCL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF34F0)
#define BBFNFGGIGCL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF2DF0)
#define BBFNFGGIGCL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF3080)
#define BBFNFGGIGCL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF3590)
#define BBFNFGGIGCL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF35E0)
#define BBFNFGGIGCL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF33C0)
#define BBFNFGGIGCL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF3020)
#define BBFNFGGIGCL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF31F0)
#define BBFNFGGIGCL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF3450)
#define BBFNFGGIGCL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF2D70)

inline static constexpr unsigned int BBFNFGGIGCL_TypeDefinitionIndex = 12957;

	class BBFNFGGIGCL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>**)UnitySDK::FromName("", "BBFNFGGIGCL")->GetStaticField(0x3D600);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BBFNFGGIGCL")->GetStaticField(0x3D608);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BBFNFGGIGCL")->GetStaticField(0x3D610);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BBFNFGGIGCL")->GetStaticField(0xD290);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBFNFGGIGCL")->GetStaticField(0xD291);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBFNFGGIGCL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BBFNFGGIGCL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBFNFGGIGCL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>(*)())((::PBYTE)hIl2Cpp + BBFNFGGIGCL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeBadgeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengeBadgeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BBFNFGGIGCL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBFNFGGIGCL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBFNFGGIGCL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBFNFGGIGCL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BBFNFGGIGCL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBFNFGGIGCL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BBFNFGGIGCL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengeBadgeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeBadgeConfigRow*))((::PBYTE)hIl2Cpp + BBFNFGGIGCL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

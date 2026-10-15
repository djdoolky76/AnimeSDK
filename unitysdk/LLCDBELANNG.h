#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeBenefitConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLCDBELANNG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D10CB90)
#define LLCDBELANNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D10D110)
#define LLCDBELANNG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D10CD00)
#define LLCDBELANNG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D10C640)
#define LLCDBELANNG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D10C8D0)
#define LLCDBELANNG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D10CDA0)
#define LLCDBELANNG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D10CDF0)
#define LLCDBELANNG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D10CBD0)
#define LLCDBELANNG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D10C870)
#define LLCDBELANNG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D10CA40)
#define LLCDBELANNG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D10CC60)
#define LLCDBELANNG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D10C5C0)

inline static constexpr unsigned int LLCDBELANNG_TypeDefinitionIndex = 14619;

	class LLCDBELANNG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>**)UnitySDK::FromName("", "LLCDBELANNG")->GetStaticField(0x43F50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LLCDBELANNG")->GetStaticField(0x43F58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LLCDBELANNG")->GetStaticField(0x43F60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LLCDBELANNG")->GetStaticField(0x103E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LLCDBELANNG")->GetStaticField(0x103E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCDBELANNG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LLCDBELANNG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLCDBELANNG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>(*)())((::PBYTE)hIl2Cpp + LLCDBELANNG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RechargeBenefitConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RechargeBenefitConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LLCDBELANNG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLCDBELANNG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCDBELANNG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCDBELANNG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LLCDBELANNG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LLCDBELANNG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LLCDBELANNG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RechargeBenefitConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RechargeBenefitConfigRow*))((::PBYTE)hIl2Cpp + LLCDBELANNG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingProgressRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKAJFIBAEGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D28CFE0)
#define OKAJFIBAEGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D28D5B0)
#define OKAJFIBAEGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D28D150)
#define OKAJFIBAEGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D28CA50)
#define OKAJFIBAEGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D28CCE0)
#define OKAJFIBAEGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D28D1F0)
#define OKAJFIBAEGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D28D240)
#define OKAJFIBAEGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D28D020)
#define OKAJFIBAEGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D28CC80)
#define OKAJFIBAEGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D28CE50)
#define OKAJFIBAEGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D28D0B0)
#define OKAJFIBAEGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D28C9D0)

inline static constexpr unsigned int OKAJFIBAEGM_TypeDefinitionIndex = 12427;

	class OKAJFIBAEGM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OKAJFIBAEGM")->GetStaticField(0x38230);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OKAJFIBAEGM")->GetStaticField(0x38238);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>**)UnitySDK::FromName("", "OKAJFIBAEGM")->GetStaticField(0x38240);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OKAJFIBAEGM")->GetStaticField(0xBFA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OKAJFIBAEGM")->GetStaticField(0xBFA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKAJFIBAEGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>*(*)())((::PBYTE)hIl2Cpp + OKAJFIBAEGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKAJFIBAEGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>(*)())((::PBYTE)hIl2Cpp + OKAJFIBAEGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingProgressRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OKAJFIBAEGM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKAJFIBAEGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKAJFIBAEGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKAJFIBAEGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OKAJFIBAEGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKAJFIBAEGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OKAJFIBAEGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingProgressRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingProgressRow*))((::PBYTE)hIl2Cpp + OKAJFIBAEGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

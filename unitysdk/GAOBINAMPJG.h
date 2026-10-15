#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAOBINAMPJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF3CC0)
#define GAOBINAMPJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF4290)
#define GAOBINAMPJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF3E30)
#define GAOBINAMPJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF3730)
#define GAOBINAMPJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF39C0)
#define GAOBINAMPJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF3ED0)
#define GAOBINAMPJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF3F20)
#define GAOBINAMPJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF3D00)
#define GAOBINAMPJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF3960)
#define GAOBINAMPJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF3B30)
#define GAOBINAMPJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF3D90)
#define GAOBINAMPJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF36B0)

inline static constexpr unsigned int GAOBINAMPJG_TypeDefinitionIndex = 13402;

	class GAOBINAMPJG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>**)UnitySDK::FromName("", "GAOBINAMPJG")->GetStaticField(0x13AD0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GAOBINAMPJG")->GetStaticField(0x13AD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GAOBINAMPJG")->GetStaticField(0x13AE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GAOBINAMPJG")->GetStaticField(0x4110);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GAOBINAMPJG")->GetStaticField(0x4111);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAOBINAMPJG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GAOBINAMPJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GAOBINAMPJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentConfigRow*>(*)())((::PBYTE)hIl2Cpp + GAOBINAMPJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightAugmentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightAugmentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GAOBINAMPJG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GAOBINAMPJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAOBINAMPJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAOBINAMPJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GAOBINAMPJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GAOBINAMPJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GAOBINAMPJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightAugmentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightAugmentConfigRow*))((::PBYTE)hIl2Cpp + GAOBINAMPJG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

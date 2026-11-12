#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModuleBanAugmentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICHNHDFLAKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0D6400)
#define ICHNHDFLAKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D69D0)
#define ICHNHDFLAKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0D6570)
#define ICHNHDFLAKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0D5E70)
#define ICHNHDFLAKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0D6100)
#define ICHNHDFLAKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0D6610)
#define ICHNHDFLAKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0D6660)
#define ICHNHDFLAKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0D6440)
#define ICHNHDFLAKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0D60A0)
#define ICHNHDFLAKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0D6270)
#define ICHNHDFLAKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0D64D0)
#define ICHNHDFLAKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0D5DF0)

inline static constexpr unsigned int ICHNHDFLAKC_TypeDefinitionIndex = 13554;

	class ICHNHDFLAKC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanAugmentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanAugmentConfigRow*>**)UnitySDK::FromName("", "ICHNHDFLAKC")->GetStaticField(0x19390);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ICHNHDFLAKC")->GetStaticField(0x19398);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ICHNHDFLAKC")->GetStaticField(0x193A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ICHNHDFLAKC")->GetStaticField(0x52D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ICHNHDFLAKC")->GetStaticField(0x52D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICHNHDFLAKC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanAugmentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanAugmentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ICHNHDFLAKC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICHNHDFLAKC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanAugmentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanAugmentConfigRow*>(*)())((::PBYTE)hIl2Cpp + ICHNHDFLAKC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightModuleBanAugmentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightModuleBanAugmentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ICHNHDFLAKC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICHNHDFLAKC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICHNHDFLAKC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICHNHDFLAKC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ICHNHDFLAKC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICHNHDFLAKC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ICHNHDFLAKC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightModuleBanAugmentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightModuleBanAugmentConfigRow*))((::PBYTE)hIl2Cpp + ICHNHDFLAKC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

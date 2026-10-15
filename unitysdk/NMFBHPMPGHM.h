#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AMKCCBHNCNG;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMFBHPMPGHM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D236A40)
#define NMFBHPMPGHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D237010)
#define NMFBHPMPGHM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D236BB0)
#define NMFBHPMPGHM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2364B0)
#define NMFBHPMPGHM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D236740)
#define NMFBHPMPGHM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D236C50)
#define NMFBHPMPGHM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D236CA0)
#define NMFBHPMPGHM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D236A80)
#define NMFBHPMPGHM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2366E0)
#define NMFBHPMPGHM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2368B0)
#define NMFBHPMPGHM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D236B10)
#define NMFBHPMPGHM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D236430)

inline static constexpr unsigned int NMFBHPMPGHM_TypeDefinitionIndex = 11554;

	class NMFBHPMPGHM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NMFBHPMPGHM")->GetStaticField(0x306B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NMFBHPMPGHM")->GetStaticField(0x306B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AMKCCBHNCNG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AMKCCBHNCNG*>**)UnitySDK::FromName("", "NMFBHPMPGHM")->GetStaticField(0x306C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NMFBHPMPGHM")->GetStaticField(0xA3D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NMFBHPMPGHM")->GetStaticField(0xA3D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMFBHPMPGHM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AMKCCBHNCNG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AMKCCBHNCNG*>*(*)())((::PBYTE)hIl2Cpp + NMFBHPMPGHM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMFBHPMPGHM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AMKCCBHNCNG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AMKCCBHNCNG*>(*)())((::PBYTE)hIl2Cpp + NMFBHPMPGHM_FPHGMAMDFHE_OFFSET))();
		}

		static ::AMKCCBHNCNG* LMBKNCAIDLC(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::AMKCCBHNCNG*(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + NMFBHPMPGHM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMFBHPMPGHM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMFBHPMPGHM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMFBHPMPGHM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NMFBHPMPGHM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NMFBHPMPGHM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NMFBHPMPGHM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AMKCCBHNCNG* a1)
		{
			return ((::System::Void(*)(::AMKCCBHNCNG*))((::PBYTE)hIl2Cpp + NMFBHPMPGHM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveStarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAICJALAJCK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D05EAA0)
#define KAICJALAJCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D05F070)
#define KAICJALAJCK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D05EC10)
#define KAICJALAJCK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D05E510)
#define KAICJALAJCK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D05E7A0)
#define KAICJALAJCK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D05ECB0)
#define KAICJALAJCK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D05ED00)
#define KAICJALAJCK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D05EAE0)
#define KAICJALAJCK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D05E740)
#define KAICJALAJCK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D05E910)
#define KAICJALAJCK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D05EB70)
#define KAICJALAJCK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D05E490)

inline static constexpr unsigned int KAICJALAJCK_TypeDefinitionIndex = 11809;

	class KAICJALAJCK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>**)UnitySDK::FromName("", "KAICJALAJCK")->GetStaticField(0x315D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KAICJALAJCK")->GetStaticField(0x315D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KAICJALAJCK")->GetStaticField(0x315E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KAICJALAJCK")->GetStaticField(0xA5D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KAICJALAJCK")->GetStaticField(0xA5D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAICJALAJCK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>*(*)())((::PBYTE)hIl2Cpp + KAICJALAJCK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KAICJALAJCK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>(*)())((::PBYTE)hIl2Cpp + KAICJALAJCK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveStarRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveStarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KAICJALAJCK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KAICJALAJCK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAICJALAJCK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAICJALAJCK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KAICJALAJCK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KAICJALAJCK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KAICJALAJCK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveStarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveStarRow*))((::PBYTE)hIl2Cpp + KAICJALAJCK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

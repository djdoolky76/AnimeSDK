#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantMessageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEDILPLKHCM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCD2550)
#define BEDILPLKHCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD2AD0)
#define BEDILPLKHCM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCD26C0)
#define BEDILPLKHCM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCD2000)
#define BEDILPLKHCM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCD2290)
#define BEDILPLKHCM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCD2760)
#define BEDILPLKHCM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCD27B0)
#define BEDILPLKHCM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCD2590)
#define BEDILPLKHCM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCD2230)
#define BEDILPLKHCM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCD23C0)
#define BEDILPLKHCM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCD2620)
#define BEDILPLKHCM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCD1F80)

inline static constexpr unsigned int BEDILPLKHCM_TypeDefinitionIndex = 11385;

	class BEDILPLKHCM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BEDILPLKHCM")->GetStaticField(0x44100);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BEDILPLKHCM")->GetStaticField(0x44108);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantMessageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantMessageConfigRow*>**)UnitySDK::FromName("", "BEDILPLKHCM")->GetStaticField(0x44110);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BEDILPLKHCM")->GetStaticField(0x101C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BEDILPLKHCM")->GetStaticField(0x101C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEDILPLKHCM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantMessageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantMessageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BEDILPLKHCM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BEDILPLKHCM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantMessageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantMessageConfigRow*>(*)())((::PBYTE)hIl2Cpp + BEDILPLKHCM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantMessageConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantMessageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BEDILPLKHCM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BEDILPLKHCM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEDILPLKHCM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEDILPLKHCM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BEDILPLKHCM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEDILPLKHCM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BEDILPLKHCM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantMessageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantMessageConfigRow*))((::PBYTE)hIl2Cpp + BEDILPLKHCM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

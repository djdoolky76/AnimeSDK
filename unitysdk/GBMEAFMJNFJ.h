#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChooseDeliveryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBMEAFMJNFJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF9980)
#define GBMEAFMJNFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF9F00)
#define GBMEAFMJNFJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF9AF0)
#define GBMEAFMJNFJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF9430)
#define GBMEAFMJNFJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF96C0)
#define GBMEAFMJNFJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF9B90)
#define GBMEAFMJNFJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF9BE0)
#define GBMEAFMJNFJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF99C0)
#define GBMEAFMJNFJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF9660)
#define GBMEAFMJNFJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF97F0)
#define GBMEAFMJNFJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF9A50)
#define GBMEAFMJNFJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF93B0)

inline static constexpr unsigned int GBMEAFMJNFJ_TypeDefinitionIndex = 13057;

	class GBMEAFMJNFJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GBMEAFMJNFJ")->GetStaticField(0x14780);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryRow*>**)UnitySDK::FromName("", "GBMEAFMJNFJ")->GetStaticField(0x14788);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GBMEAFMJNFJ")->GetStaticField(0x14790);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GBMEAFMJNFJ")->GetStaticField(0x4500);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBMEAFMJNFJ")->GetStaticField(0x4501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryRow*>*(*)())((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryRow*>(*)())((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChooseDeliveryRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChooseDeliveryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChooseDeliveryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChooseDeliveryRow*))((::PBYTE)hIl2Cpp + GBMEAFMJNFJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

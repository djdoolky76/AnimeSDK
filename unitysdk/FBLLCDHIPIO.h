#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBLLCDHIPIO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD9DEA0)
#define FBLLCDHIPIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9E460)
#define FBLLCDHIPIO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD9E010)
#define FBLLCDHIPIO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD9D900)
#define FBLLCDHIPIO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD9DB90)
#define FBLLCDHIPIO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD9E0B0)
#define FBLLCDHIPIO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD9E100)
#define FBLLCDHIPIO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD9DEE0)
#define FBLLCDHIPIO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD9DB30)
#define FBLLCDHIPIO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD9DD00)
#define FBLLCDHIPIO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD9DF70)
#define FBLLCDHIPIO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD9D880)

inline static constexpr unsigned int FBLLCDHIPIO_TypeDefinitionIndex = 14294;

	class FBLLCDHIPIO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FBLLCDHIPIO")->GetStaticField(0xF490);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FBLLCDHIPIO")->GetStaticField(0xF498);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>**)UnitySDK::FromName("", "FBLLCDHIPIO")->GetStaticField(0xF4A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FBLLCDHIPIO")->GetStaticField(0x3200);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FBLLCDHIPIO")->GetStaticField(0x3201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBLLCDHIPIO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FBLLCDHIPIO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBLLCDHIPIO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + FBLLCDHIPIO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::OfferingLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::OfferingLevelConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FBLLCDHIPIO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBLLCDHIPIO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBLLCDHIPIO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBLLCDHIPIO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBLLCDHIPIO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBLLCDHIPIO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FBLLCDHIPIO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::OfferingLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::OfferingLevelConfigRow*))((::PBYTE)hIl2Cpp + FBLLCDHIPIO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

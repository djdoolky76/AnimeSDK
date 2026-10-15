#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipPriceRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLOPPNNIDCA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEC1E70)
#define HLOPPNNIDCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEC2470)
#define HLOPPNNIDCA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEC1FE0)
#define HLOPPNNIDCA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEC1890)
#define HLOPPNNIDCA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEC1B20)
#define HLOPPNNIDCA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEC2080)
#define HLOPPNNIDCA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEC20D0)
#define HLOPPNNIDCA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEC1EB0)
#define HLOPPNNIDCA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEC1AC0)
#define HLOPPNNIDCA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEC1C90)
#define HLOPPNNIDCA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEC1F40)
#define HLOPPNNIDCA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEC1810)

	class HLOPPNNIDCA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HLOPPNNIDCA")->GetStaticField(0x1F0F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HLOPPNNIDCA")->GetStaticField(0x1F0F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>**)UnitySDK::FromName("", "HLOPPNNIDCA")->GetStaticField(0x1F100);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HLOPPNNIDCA")->GetStaticField(0x7170);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HLOPPNNIDCA")->GetStaticField(0x7171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLOPPNNIDCA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>*(*)())((::PBYTE)hIl2Cpp + HLOPPNNIDCA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLOPPNNIDCA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>(*)())((::PBYTE)hIl2Cpp + HLOPPNNIDCA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEquipPriceRow* LMBKNCAIDLC(::RPG::GameCore::PixAirSlotType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PixAirEquipPriceRow*(*)(::RPG::GameCore::PixAirSlotType, ::System::UInt32))((::PBYTE)hIl2Cpp + HLOPPNNIDCA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLOPPNNIDCA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLOPPNNIDCA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLOPPNNIDCA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HLOPPNNIDCA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOPPNNIDCA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HLOPPNNIDCA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirEquipPriceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEquipPriceRow*))((::PBYTE)hIl2Cpp + HLOPPNNIDCA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

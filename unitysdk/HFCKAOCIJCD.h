#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipEnchantRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFCKAOCIJCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE70B20)
#define HFCKAOCIJCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE71120)
#define HFCKAOCIJCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE70C90)
#define HFCKAOCIJCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE70540)
#define HFCKAOCIJCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE707D0)
#define HFCKAOCIJCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE70D30)
#define HFCKAOCIJCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE70D80)
#define HFCKAOCIJCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE70B60)
#define HFCKAOCIJCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE70770)
#define HFCKAOCIJCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE70940)
#define HFCKAOCIJCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE70BF0)
#define HFCKAOCIJCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE704C0)

inline static constexpr unsigned int HFCKAOCIJCD_TypeDefinitionIndex = 12160;

	class HFCKAOCIJCD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HFCKAOCIJCD")->GetStaticField(0x1AE30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>**)UnitySDK::FromName("", "HFCKAOCIJCD")->GetStaticField(0x1AE38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HFCKAOCIJCD")->GetStaticField(0x1AE40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HFCKAOCIJCD")->GetStaticField(0x5DE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HFCKAOCIJCD")->GetStaticField(0x5DE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCKAOCIJCD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>*(*)())((::PBYTE)hIl2Cpp + HFCKAOCIJCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HFCKAOCIJCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>(*)())((::PBYTE)hIl2Cpp + HFCKAOCIJCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEquipEnchantRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::PixAirEnchantmentType a2)
		{
			return ((::RPG::GameCore::PixAirEquipEnchantRow*(*)(::System::UInt32, ::RPG::GameCore::PixAirEnchantmentType))((::PBYTE)hIl2Cpp + HFCKAOCIJCD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HFCKAOCIJCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCKAOCIJCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCKAOCIJCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HFCKAOCIJCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFCKAOCIJCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HFCKAOCIJCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirEquipEnchantRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEquipEnchantRow*))((::PBYTE)hIl2Cpp + HFCKAOCIJCD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

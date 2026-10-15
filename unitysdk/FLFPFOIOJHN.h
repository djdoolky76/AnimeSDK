#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantSpecialBubbleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLFPFOIOJHN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDD65F0)
#define FLFPFOIOJHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD6BC0)
#define FLFPFOIOJHN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDD6760)
#define FLFPFOIOJHN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDD6060)
#define FLFPFOIOJHN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDD62F0)
#define FLFPFOIOJHN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDD6800)
#define FLFPFOIOJHN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDD6850)
#define FLFPFOIOJHN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDD6630)
#define FLFPFOIOJHN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDD6290)
#define FLFPFOIOJHN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDD6460)
#define FLFPFOIOJHN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDD66C0)
#define FLFPFOIOJHN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDD5FE0)

inline static constexpr unsigned int FLFPFOIOJHN_TypeDefinitionIndex = 11350;

	class FLFPFOIOJHN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>**)UnitySDK::FromName("", "FLFPFOIOJHN")->GetStaticField(0x12AF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FLFPFOIOJHN")->GetStaticField(0x12AF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FLFPFOIOJHN")->GetStaticField(0x12B00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FLFPFOIOJHN")->GetStaticField(0x3D20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FLFPFOIOJHN")->GetStaticField(0x3D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLFPFOIOJHN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>*(*)())((::PBYTE)hIl2Cpp + FLFPFOIOJHN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLFPFOIOJHN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>(*)())((::PBYTE)hIl2Cpp + FLFPFOIOJHN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantSpecialBubbleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantSpecialBubbleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FLFPFOIOJHN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLFPFOIOJHN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLFPFOIOJHN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLFPFOIOJHN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FLFPFOIOJHN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLFPFOIOJHN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FLFPFOIOJHN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantSpecialBubbleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantSpecialBubbleRow*))((::PBYTE)hIl2Cpp + FLFPFOIOJHN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

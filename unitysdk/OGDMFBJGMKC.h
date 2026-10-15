#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFacilityUpRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGDMFBJGMKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D26FA80)
#define OGDMFBJGMKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D270080)
#define OGDMFBJGMKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D26FBF0)
#define OGDMFBJGMKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D26F4B0)
#define OGDMFBJGMKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D26F740)
#define OGDMFBJGMKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D26FC90)
#define OGDMFBJGMKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D26FCE0)
#define OGDMFBJGMKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D26FAC0)
#define OGDMFBJGMKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D26F6E0)
#define OGDMFBJGMKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D26F8B0)
#define OGDMFBJGMKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D26FB50)
#define OGDMFBJGMKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D26F430)

inline static constexpr unsigned int OGDMFBJGMKC_TypeDefinitionIndex = 11340;

	class OGDMFBJGMKC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityUpRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityUpRow*>**)UnitySDK::FromName("", "OGDMFBJGMKC")->GetStaticField(0x34F50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OGDMFBJGMKC")->GetStaticField(0x34F58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OGDMFBJGMKC")->GetStaticField(0x34F60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OGDMFBJGMKC")->GetStaticField(0xB220);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OGDMFBJGMKC")->GetStaticField(0xB221);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGDMFBJGMKC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityUpRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityUpRow*>*(*)())((::PBYTE)hIl2Cpp + OGDMFBJGMKC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGDMFBJGMKC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityUpRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFacilityUpRow*>(*)())((::PBYTE)hIl2Cpp + OGDMFBJGMKC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantFacilityUpRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RestaurantFacilityUpRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OGDMFBJGMKC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGDMFBJGMKC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGDMFBJGMKC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGDMFBJGMKC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OGDMFBJGMKC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGDMFBJGMKC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OGDMFBJGMKC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantFacilityUpRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantFacilityUpRow*))((::PBYTE)hIl2Cpp + OGDMFBJGMKC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

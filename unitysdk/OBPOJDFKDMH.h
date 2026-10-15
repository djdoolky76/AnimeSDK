#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEmployeeUpRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBPOJDFKDMH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D250640)
#define OBPOJDFKDMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D250C00)
#define OBPOJDFKDMH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2507B0)
#define OBPOJDFKDMH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2500B0)
#define OBPOJDFKDMH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D250340)
#define OBPOJDFKDMH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D250850)
#define OBPOJDFKDMH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2508A0)
#define OBPOJDFKDMH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D250680)
#define OBPOJDFKDMH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2502E0)
#define OBPOJDFKDMH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D250470)
#define OBPOJDFKDMH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D250710)
#define OBPOJDFKDMH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D250030)

inline static constexpr unsigned int OBPOJDFKDMH_TypeDefinitionIndex = 11347;

	class OBPOJDFKDMH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OBPOJDFKDMH")->GetStaticField(0x31F60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeUpRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeUpRow*>**)UnitySDK::FromName("", "OBPOJDFKDMH")->GetStaticField(0x31F68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OBPOJDFKDMH")->GetStaticField(0x31F70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OBPOJDFKDMH")->GetStaticField(0xA8A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OBPOJDFKDMH")->GetStaticField(0xA8A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBPOJDFKDMH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeUpRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeUpRow*>*(*)())((::PBYTE)hIl2Cpp + OBPOJDFKDMH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OBPOJDFKDMH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeUpRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeUpRow*>(*)())((::PBYTE)hIl2Cpp + OBPOJDFKDMH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantEmployeeUpRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RestaurantEmployeeUpRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OBPOJDFKDMH_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OBPOJDFKDMH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBPOJDFKDMH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBPOJDFKDMH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OBPOJDFKDMH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPOJDFKDMH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OBPOJDFKDMH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantEmployeeUpRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantEmployeeUpRow*))((::PBYTE)hIl2Cpp + OBPOJDFKDMH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

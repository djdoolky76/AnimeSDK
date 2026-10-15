#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantSelectEventConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAGJOPFJPDB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF1E90)
#define GAGJOPFJPDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF2410)
#define GAGJOPFJPDB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF2000)
#define GAGJOPFJPDB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF1980)
#define GAGJOPFJPDB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF1C10)
#define GAGJOPFJPDB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF20A0)
#define GAGJOPFJPDB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF20F0)
#define GAGJOPFJPDB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF1ED0)
#define GAGJOPFJPDB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF1BB0)
#define GAGJOPFJPDB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF1D40)
#define GAGJOPFJPDB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF1F60)
#define GAGJOPFJPDB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF1900)

inline static constexpr unsigned int GAGJOPFJPDB_TypeDefinitionIndex = 11387;

	class GAGJOPFJPDB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x13A70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>**)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x13A78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x13A80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x40E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GAGJOPFJPDB")->GetStaticField(0x40E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantSelectEventConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantSelectEventConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAGJOPFJPDB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantSelectEventConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantSelectEventConfigRow*))((::PBYTE)hIl2Cpp + GAGJOPFJPDB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

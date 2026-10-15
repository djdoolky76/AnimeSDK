#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFarmConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMDNNIKIIEF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E4700)
#define LMDNNIKIIEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E4C80)
#define LMDNNIKIIEF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E4870)
#define LMDNNIKIIEF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E41F0)
#define LMDNNIKIIEF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E4480)
#define LMDNNIKIIEF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E4910)
#define LMDNNIKIIEF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E4960)
#define LMDNNIKIIEF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E4740)
#define LMDNNIKIIEF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E4420)
#define LMDNNIKIIEF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E45B0)
#define LMDNNIKIIEF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E47D0)
#define LMDNNIKIIEF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E4170)

inline static constexpr unsigned int LMDNNIKIIEF_TypeDefinitionIndex = 11373;

	class LMDNNIKIIEF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LMDNNIKIIEF")->GetStaticField(0x3E780);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>**)UnitySDK::FromName("", "LMDNNIKIIEF")->GetStaticField(0x3E788);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LMDNNIKIIEF")->GetStaticField(0x3E790);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMDNNIKIIEF")->GetStaticField(0xEBE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LMDNNIKIIEF")->GetStaticField(0xEBE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMDNNIKIIEF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LMDNNIKIIEF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMDNNIKIIEF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>(*)())((::PBYTE)hIl2Cpp + LMDNNIKIIEF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantFarmConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantFarmConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LMDNNIKIIEF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMDNNIKIIEF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMDNNIKIIEF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMDNNIKIIEF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LMDNNIKIIEF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LMDNNIKIIEF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LMDNNIKIIEF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantFarmConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantFarmConfigRow*))((::PBYTE)hIl2Cpp + LMDNNIKIIEF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

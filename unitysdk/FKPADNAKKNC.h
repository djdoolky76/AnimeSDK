#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKPADNAKKNC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFDA7D0)
#define FKPADNAKKNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFDAD50)
#define FKPADNAKKNC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFDA940)
#define FKPADNAKKNC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFDA280)
#define FKPADNAKKNC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFDA510)
#define FKPADNAKKNC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFDA9E0)
#define FKPADNAKKNC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFDAA30)
#define FKPADNAKKNC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFDA810)
#define FKPADNAKKNC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFDA4B0)
#define FKPADNAKKNC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFDA640)
#define FKPADNAKKNC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFDA8A0)
#define FKPADNAKKNC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFDA200)

inline static constexpr unsigned int FKPADNAKKNC_TypeDefinitionIndex = 11396;

	class FKPADNAKKNC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FKPADNAKKNC")->GetStaticField(0x9650);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeRow*>**)UnitySDK::FromName("", "FKPADNAKKNC")->GetStaticField(0x9658);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FKPADNAKKNC")->GetStaticField(0x9660);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FKPADNAKKNC")->GetStaticField(0x940);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FKPADNAKKNC")->GetStaticField(0x941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPADNAKKNC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeRow*>*(*)())((::PBYTE)hIl2Cpp + FKPADNAKKNC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKPADNAKKNC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmployeeRow*>(*)())((::PBYTE)hIl2Cpp + FKPADNAKKNC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantEmployeeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantEmployeeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FKPADNAKKNC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKPADNAKKNC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPADNAKKNC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPADNAKKNC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FKPADNAKKNC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKPADNAKKNC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FKPADNAKKNC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantEmployeeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantEmployeeRow*))((::PBYTE)hIl2Cpp + FKPADNAKKNC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirRecommendConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAHFKELEBIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D292A50)
#define PAHFKELEBIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D293020)
#define PAHFKELEBIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D292BC0)
#define PAHFKELEBIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2924C0)
#define PAHFKELEBIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D292750)
#define PAHFKELEBIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D292C60)
#define PAHFKELEBIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D292CB0)
#define PAHFKELEBIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D292A90)
#define PAHFKELEBIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2926F0)
#define PAHFKELEBIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2928C0)
#define PAHFKELEBIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D292B20)
#define PAHFKELEBIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D292440)

inline static constexpr unsigned int PAHFKELEBIK_TypeDefinitionIndex = 12138;

	class PAHFKELEBIK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PAHFKELEBIK")->GetStaticField(0x4C9A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirRecommendConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirRecommendConfigRow*>**)UnitySDK::FromName("", "PAHFKELEBIK")->GetStaticField(0x4C9A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PAHFKELEBIK")->GetStaticField(0x4C9B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PAHFKELEBIK")->GetStaticField(0x11840);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PAHFKELEBIK")->GetStaticField(0x11841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAHFKELEBIK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirRecommendConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirRecommendConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PAHFKELEBIK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAHFKELEBIK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirRecommendConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirRecommendConfigRow*>(*)())((::PBYTE)hIl2Cpp + PAHFKELEBIK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirRecommendConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirRecommendConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PAHFKELEBIK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAHFKELEBIK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAHFKELEBIK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAHFKELEBIK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PAHFKELEBIK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAHFKELEBIK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PAHFKELEBIK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirRecommendConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirRecommendConfigRow*))((::PBYTE)hIl2Cpp + PAHFKELEBIK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

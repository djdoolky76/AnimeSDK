#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirSupplyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIOCBPEOCHD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC9CD40)
#define AIOCBPEOCHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC9D310)
#define AIOCBPEOCHD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC9CEB0)
#define AIOCBPEOCHD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC9C7B0)
#define AIOCBPEOCHD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC9CA40)
#define AIOCBPEOCHD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC9CF50)
#define AIOCBPEOCHD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC9CFA0)
#define AIOCBPEOCHD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC9CD80)
#define AIOCBPEOCHD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC9C9E0)
#define AIOCBPEOCHD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC9CBB0)
#define AIOCBPEOCHD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC9CE10)
#define AIOCBPEOCHD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC9C730)

inline static constexpr unsigned int AIOCBPEOCHD_TypeDefinitionIndex = 12154;

	class AIOCBPEOCHD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AIOCBPEOCHD")->GetStaticField(0x3FFD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSupplyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSupplyRow*>**)UnitySDK::FromName("", "AIOCBPEOCHD")->GetStaticField(0x3FFD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AIOCBPEOCHD")->GetStaticField(0x3FFE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AIOCBPEOCHD")->GetStaticField(0xF270);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AIOCBPEOCHD")->GetStaticField(0xF271);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOCBPEOCHD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSupplyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSupplyRow*>*(*)())((::PBYTE)hIl2Cpp + AIOCBPEOCHD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AIOCBPEOCHD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSupplyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSupplyRow*>(*)())((::PBYTE)hIl2Cpp + AIOCBPEOCHD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirSupplyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirSupplyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AIOCBPEOCHD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AIOCBPEOCHD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOCBPEOCHD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOCBPEOCHD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AIOCBPEOCHD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIOCBPEOCHD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AIOCBPEOCHD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirSupplyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirSupplyRow*))((::PBYTE)hIl2Cpp + AIOCBPEOCHD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirShopRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIKJAKJNMLC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6444C0)
#define GIKJAKJNMLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E644A90)
#define GIKJAKJNMLC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E644630)
#define GIKJAKJNMLC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E643F30)
#define GIKJAKJNMLC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6441C0)
#define GIKJAKJNMLC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6446D0)
#define GIKJAKJNMLC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E644720)
#define GIKJAKJNMLC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E644500)
#define GIKJAKJNMLC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E644160)
#define GIKJAKJNMLC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E644330)
#define GIKJAKJNMLC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E644590)
#define GIKJAKJNMLC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E643EB0)

inline static constexpr unsigned int GIKJAKJNMLC_TypeDefinitionIndex = 12199;

	class GIKJAKJNMLC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x10640);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x10648);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirShopRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirShopRow*>**)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x10650);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x3470);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x3471);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIKJAKJNMLC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirShopRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirShopRow*>*(*)())((::PBYTE)hIl2Cpp + GIKJAKJNMLC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIKJAKJNMLC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirShopRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirShopRow*>(*)())((::PBYTE)hIl2Cpp + GIKJAKJNMLC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirShopRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirShopRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GIKJAKJNMLC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIKJAKJNMLC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIKJAKJNMLC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIKJAKJNMLC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GIKJAKJNMLC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIKJAKJNMLC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GIKJAKJNMLC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirShopRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirShopRow*))((::PBYTE)hIl2Cpp + GIKJAKJNMLC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

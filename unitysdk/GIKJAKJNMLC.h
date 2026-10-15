#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirShopRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIKJAKJNMLC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE508F0)
#define GIKJAKJNMLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE50EC0)
#define GIKJAKJNMLC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE50A60)
#define GIKJAKJNMLC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE50360)
#define GIKJAKJNMLC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE505F0)
#define GIKJAKJNMLC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE50B00)
#define GIKJAKJNMLC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE50B50)
#define GIKJAKJNMLC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE50930)
#define GIKJAKJNMLC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE50590)
#define GIKJAKJNMLC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE50760)
#define GIKJAKJNMLC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE509C0)
#define GIKJAKJNMLC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE502E0)

inline static constexpr unsigned int GIKJAKJNMLC_TypeDefinitionIndex = 12142;

	class GIKJAKJNMLC : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x17B80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirShopRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirShopRow*>**)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x17B88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x17B90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x5890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIKJAKJNMLC")->GetStaticField(0x5891);
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

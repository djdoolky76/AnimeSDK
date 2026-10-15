#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightShopPriceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLNEFBFFADI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D26E160)
#define OLNEFBFFADI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D26E730)
#define OLNEFBFFADI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D26E2D0)
#define OLNEFBFFADI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D26DBD0)
#define OLNEFBFFADI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D26DE60)
#define OLNEFBFFADI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D26E370)
#define OLNEFBFFADI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D26E3C0)
#define OLNEFBFFADI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D26E1A0)
#define OLNEFBFFADI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D26DE00)
#define OLNEFBFFADI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D26DFD0)
#define OLNEFBFFADI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D26E230)
#define OLNEFBFFADI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D26DB50)

inline static constexpr unsigned int OLNEFBFFADI_TypeDefinitionIndex = 13595;

	class OLNEFBFFADI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0x49F30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>**)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0x49F38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0x49F40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0x110D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0x110D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightShopPriceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightShopPriceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OLNEFBFFADI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OLNEFBFFADI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLNEFBFFADI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OLNEFBFFADI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightShopPriceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightShopPriceConfigRow*))((::PBYTE)hIl2Cpp + OLNEFBFFADI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

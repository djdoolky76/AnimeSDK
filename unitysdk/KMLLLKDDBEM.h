#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyShopConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMLLLKDDBEM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D085C90)
#define KMLLLKDDBEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D086210)
#define KMLLLKDDBEM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D085E00)
#define KMLLLKDDBEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D085740)
#define KMLLLKDDBEM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0859D0)
#define KMLLLKDDBEM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D085EA0)
#define KMLLLKDDBEM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D085EF0)
#define KMLLLKDDBEM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D085CD0)
#define KMLLLKDDBEM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D085970)
#define KMLLLKDDBEM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D085B00)
#define KMLLLKDDBEM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D085D60)
#define KMLLLKDDBEM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0856C0)

inline static constexpr unsigned int KMLLLKDDBEM_TypeDefinitionIndex = 12048;

	class KMLLLKDDBEM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KMLLLKDDBEM")->GetStaticField(0x36780);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KMLLLKDDBEM")->GetStaticField(0x36788);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyShopConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyShopConfigRow*>**)UnitySDK::FromName("", "KMLLLKDDBEM")->GetStaticField(0x36790);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KMLLLKDDBEM")->GetStaticField(0xAFE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KMLLLKDDBEM")->GetStaticField(0xAFE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMLLLKDDBEM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyShopConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyShopConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KMLLLKDDBEM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KMLLLKDDBEM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyShopConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyShopConfigRow*>(*)())((::PBYTE)hIl2Cpp + KMLLLKDDBEM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyShopConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyShopConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KMLLLKDDBEM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KMLLLKDDBEM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMLLLKDDBEM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMLLLKDDBEM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KMLLLKDDBEM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMLLLKDDBEM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KMLLLKDDBEM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyShopConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyShopConfigRow*))((::PBYTE)hIl2Cpp + KMLLLKDDBEM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

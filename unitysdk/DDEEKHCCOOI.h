#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GiftDanmuContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDEEKHCCOOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCDED60)
#define DDEEKHCCOOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCDF940)
#define DDEEKHCCOOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCDF100)
#define DDEEKHCCOOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCDEDA0)
#define DDEEKHCCOOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCDF640)
#define DDEEKHCCOOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCDF1A0)
#define DDEEKHCCOOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCDF1F0)
#define DDEEKHCCOOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCDEFD0)
#define DDEEKHCCOOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCDF5E0)
#define DDEEKHCCOOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCDF7B0)
#define DDEEKHCCOOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCDF060)
#define DDEEKHCCOOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCDF560)

inline static constexpr unsigned int DDEEKHCCOOI_TypeDefinitionIndex = 15197;

	class DDEEKHCCOOI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>**)UnitySDK::FromName("", "DDEEKHCCOOI")->GetStaticField(0x44A00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DDEEKHCCOOI")->GetStaticField(0x44A08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DDEEKHCCOOI")->GetStaticField(0x44A10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DDEEKHCCOOI")->GetStaticField(0x10370);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DDEEKHCCOOI")->GetStaticField(0x10371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDEEKHCCOOI_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DDEEKHCCOOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDEEKHCCOOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDEEKHCCOOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DDEEKHCCOOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDEEKHCCOOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DDEEKHCCOOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GiftDanmuContentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GiftDanmuContentRow*))((::PBYTE)hIl2Cpp + DDEEKHCCOOI_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>*(*)())((::PBYTE)hIl2Cpp + DDEEKHCCOOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DDEEKHCCOOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>(*)())((::PBYTE)hIl2Cpp + DDEEKHCCOOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GiftDanmuContentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GiftDanmuContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DDEEKHCCOOI_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

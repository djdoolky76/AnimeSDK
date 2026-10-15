#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDDNLIKIDPK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE93A60)
#define HDDNLIKIDPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE94030)
#define HDDNLIKIDPK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE93BD0)
#define HDDNLIKIDPK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE934D0)
#define HDDNLIKIDPK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE93760)
#define HDDNLIKIDPK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE93C70)
#define HDDNLIKIDPK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE93CC0)
#define HDDNLIKIDPK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE93AA0)
#define HDDNLIKIDPK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE93700)
#define HDDNLIKIDPK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE938D0)
#define HDDNLIKIDPK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE93B30)
#define HDDNLIKIDPK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE93450)

inline static constexpr unsigned int HDDNLIKIDPK_TypeDefinitionIndex = 13200;

	class HDDNLIKIDPK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGroupRow*>**)UnitySDK::FromName("", "HDDNLIKIDPK")->GetStaticField(0x1C9F0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HDDNLIKIDPK")->GetStaticField(0x1C9F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HDDNLIKIDPK")->GetStaticField(0x1CA00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HDDNLIKIDPK")->GetStaticField(0x66F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HDDNLIKIDPK")->GetStaticField(0x66F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDNLIKIDPK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGroupRow*>*(*)())((::PBYTE)hIl2Cpp + HDDNLIKIDPK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDDNLIKIDPK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersGroupRow*>(*)())((::PBYTE)hIl2Cpp + HDDNLIKIDPK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCheersGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCheersGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HDDNLIKIDPK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDDNLIKIDPK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDNLIKIDPK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDNLIKIDPK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HDDNLIKIDPK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDDNLIKIDPK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HDDNLIKIDPK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCheersGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersGroupRow*))((::PBYTE)hIl2Cpp + HDDNLIKIDPK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

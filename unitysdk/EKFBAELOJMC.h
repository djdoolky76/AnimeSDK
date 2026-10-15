#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersIngredientRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKFBAELOJMC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD672F0)
#define EKFBAELOJMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD67870)
#define EKFBAELOJMC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD67460)
#define EKFBAELOJMC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD66DA0)
#define EKFBAELOJMC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD67030)
#define EKFBAELOJMC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD67500)
#define EKFBAELOJMC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD67550)
#define EKFBAELOJMC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD67330)
#define EKFBAELOJMC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD66FD0)
#define EKFBAELOJMC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD67160)
#define EKFBAELOJMC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD673C0)
#define EKFBAELOJMC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD66D20)

inline static constexpr unsigned int EKFBAELOJMC_TypeDefinitionIndex = 13204;

	class EKFBAELOJMC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EKFBAELOJMC")->GetStaticField(0x1D80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersIngredientRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersIngredientRow*>**)UnitySDK::FromName("", "EKFBAELOJMC")->GetStaticField(0x1D88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EKFBAELOJMC")->GetStaticField(0x1D90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EKFBAELOJMC")->GetStaticField(0x1C90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EKFBAELOJMC")->GetStaticField(0x1C91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKFBAELOJMC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersIngredientRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersIngredientRow*>*(*)())((::PBYTE)hIl2Cpp + EKFBAELOJMC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKFBAELOJMC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersIngredientRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersIngredientRow*>(*)())((::PBYTE)hIl2Cpp + EKFBAELOJMC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCheersIngredientRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCheersIngredientRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EKFBAELOJMC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKFBAELOJMC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKFBAELOJMC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKFBAELOJMC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EKFBAELOJMC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EKFBAELOJMC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EKFBAELOJMC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCheersIngredientRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersIngredientRow*))((::PBYTE)hIl2Cpp + EKFBAELOJMC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

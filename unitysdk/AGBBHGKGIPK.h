#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGBBHGKGIPK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCB8F40)
#define AGBBHGKGIPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCB94C0)
#define AGBBHGKGIPK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCB90B0)
#define AGBBHGKGIPK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCB8A30)
#define AGBBHGKGIPK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCB8CC0)
#define AGBBHGKGIPK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCB9150)
#define AGBBHGKGIPK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCB91A0)
#define AGBBHGKGIPK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCB8F80)
#define AGBBHGKGIPK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCB8C60)
#define AGBBHGKGIPK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCB8DF0)
#define AGBBHGKGIPK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCB9010)
#define AGBBHGKGIPK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCB89B0)

inline static constexpr unsigned int AGBBHGKGIPK_TypeDefinitionIndex = 13171;

	class AGBBHGKGIPK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AGBBHGKGIPK")->GetStaticField(0x37D60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIngredientRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIngredientRow*>**)UnitySDK::FromName("", "AGBBHGKGIPK")->GetStaticField(0x37D68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGBBHGKGIPK")->GetStaticField(0x37D70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGBBHGKGIPK")->GetStaticField(0xBE50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGBBHGKGIPK")->GetStaticField(0xBE51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBBHGKGIPK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIngredientRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIngredientRow*>*(*)())((::PBYTE)hIl2Cpp + AGBBHGKGIPK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGBBHGKGIPK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIngredientRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIngredientRow*>(*)())((::PBYTE)hIl2Cpp + AGBBHGKGIPK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerIngredientRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGBBHGKGIPK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGBBHGKGIPK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBBHGKGIPK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBBHGKGIPK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGBBHGKGIPK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBBHGKGIPK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGBBHGKGIPK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerIngredientRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerIngredientRow*))((::PBYTE)hIl2Cpp + AGBBHGKGIPK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

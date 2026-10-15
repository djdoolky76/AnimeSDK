#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerFormulaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHCCGNKKBKD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D802060)
#define BHCCGNKKBKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8025E0)
#define BHCCGNKKBKD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D8021D0)
#define BHCCGNKKBKD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D801B50)
#define BHCCGNKKBKD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D801DE0)
#define BHCCGNKKBKD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D802270)
#define BHCCGNKKBKD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D8022C0)
#define BHCCGNKKBKD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D8020A0)
#define BHCCGNKKBKD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D801D80)
#define BHCCGNKKBKD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D801F10)
#define BHCCGNKKBKD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D802130)
#define BHCCGNKKBKD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D801AD0)

inline static constexpr unsigned int BHCCGNKKBKD_TypeDefinitionIndex = 13188;

	class BHCCGNKKBKD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BHCCGNKKBKD")->GetStaticField(0x354B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BHCCGNKKBKD")->GetStaticField(0x354B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerFormulaRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerFormulaRow*>**)UnitySDK::FromName("", "BHCCGNKKBKD")->GetStaticField(0x354C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BHCCGNKKBKD")->GetStaticField(0xB330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BHCCGNKKBKD")->GetStaticField(0xB331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHCCGNKKBKD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerFormulaRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerFormulaRow*>*(*)())((::PBYTE)hIl2Cpp + BHCCGNKKBKD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHCCGNKKBKD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerFormulaRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerFormulaRow*>(*)())((::PBYTE)hIl2Cpp + BHCCGNKKBKD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerFormulaRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerFormulaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BHCCGNKKBKD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHCCGNKKBKD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHCCGNKKBKD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHCCGNKKBKD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BHCCGNKKBKD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHCCGNKKBKD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BHCCGNKKBKD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerFormulaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerFormulaRow*))((::PBYTE)hIl2Cpp + BHCCGNKKBKD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

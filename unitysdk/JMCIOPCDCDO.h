#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersFormulaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMCIOPCDCDO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D01ABB0)
#define JMCIOPCDCDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D01B180)
#define JMCIOPCDCDO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D01AD20)
#define JMCIOPCDCDO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D01A620)
#define JMCIOPCDCDO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D01A8B0)
#define JMCIOPCDCDO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D01ADC0)
#define JMCIOPCDCDO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D01AE10)
#define JMCIOPCDCDO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D01ABF0)
#define JMCIOPCDCDO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D01A850)
#define JMCIOPCDCDO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D01AA20)
#define JMCIOPCDCDO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D01AC80)
#define JMCIOPCDCDO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D01A5A0)

inline static constexpr unsigned int JMCIOPCDCDO_TypeDefinitionIndex = 13198;

	class JMCIOPCDCDO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>**)UnitySDK::FromName("", "JMCIOPCDCDO")->GetStaticField(0x2F890);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JMCIOPCDCDO")->GetStaticField(0x2F898);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JMCIOPCDCDO")->GetStaticField(0x2F8A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JMCIOPCDCDO")->GetStaticField(0x9CD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JMCIOPCDCDO")->GetStaticField(0x9CD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMCIOPCDCDO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>*(*)())((::PBYTE)hIl2Cpp + JMCIOPCDCDO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMCIOPCDCDO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersFormulaRow*>(*)())((::PBYTE)hIl2Cpp + JMCIOPCDCDO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCheersFormulaRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCheersFormulaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JMCIOPCDCDO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMCIOPCDCDO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMCIOPCDCDO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMCIOPCDCDO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JMCIOPCDCDO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JMCIOPCDCDO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JMCIOPCDCDO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCheersFormulaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersFormulaRow*))((::PBYTE)hIl2Cpp + JMCIOPCDCDO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

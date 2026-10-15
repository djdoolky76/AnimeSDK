#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerLayerRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGGCBFOMONN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD1DD70)
#define DGGCBFOMONN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD1E2F0)
#define DGGCBFOMONN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD1DEE0)
#define DGGCBFOMONN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD1D820)
#define DGGCBFOMONN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD1DAB0)
#define DGGCBFOMONN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD1DF80)
#define DGGCBFOMONN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD1DFD0)
#define DGGCBFOMONN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD1DDB0)
#define DGGCBFOMONN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD1DA50)
#define DGGCBFOMONN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD1DC20)
#define DGGCBFOMONN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD1DE40)
#define DGGCBFOMONN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD1D7A0)

inline static constexpr unsigned int DGGCBFOMONN_TypeDefinitionIndex = 13169;

	class DGGCBFOMONN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLayerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLayerRow*>**)UnitySDK::FromName("", "DGGCBFOMONN")->GetStaticField(0x4C410);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DGGCBFOMONN")->GetStaticField(0x4C418);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DGGCBFOMONN")->GetStaticField(0x4C420);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DGGCBFOMONN")->GetStaticField(0x119C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DGGCBFOMONN")->GetStaticField(0x119C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGGCBFOMONN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLayerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLayerRow*>*(*)())((::PBYTE)hIl2Cpp + DGGCBFOMONN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGGCBFOMONN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLayerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLayerRow*>(*)())((::PBYTE)hIl2Cpp + DGGCBFOMONN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerLayerRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerLayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DGGCBFOMONN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGGCBFOMONN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGGCBFOMONN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGGCBFOMONN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DGGCBFOMONN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGGCBFOMONN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DGGCBFOMONN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerLayerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerLayerRow*))((::PBYTE)hIl2Cpp + DGGCBFOMONN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

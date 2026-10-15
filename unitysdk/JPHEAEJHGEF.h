#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersTypeTextmapRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPHEAEJHGEF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D05C080)
#define JPHEAEJHGEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D05C680)
#define JPHEAEJHGEF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D05C1F0)
#define JPHEAEJHGEF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D05BAA0)
#define JPHEAEJHGEF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D05BD30)
#define JPHEAEJHGEF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D05C290)
#define JPHEAEJHGEF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D05C2E0)
#define JPHEAEJHGEF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D05C0C0)
#define JPHEAEJHGEF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D05BCD0)
#define JPHEAEJHGEF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D05BEA0)
#define JPHEAEJHGEF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D05C150)
#define JPHEAEJHGEF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D05BA20)

inline static constexpr unsigned int JPHEAEJHGEF_TypeDefinitionIndex = 13206;

	class JPHEAEJHGEF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>**)UnitySDK::FromName("", "JPHEAEJHGEF")->GetStaticField(0x313F0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JPHEAEJHGEF")->GetStaticField(0x313F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JPHEAEJHGEF")->GetStaticField(0x31400);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JPHEAEJHGEF")->GetStaticField(0xA590);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JPHEAEJHGEF")->GetStaticField(0xA591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPHEAEJHGEF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>*(*)())((::PBYTE)hIl2Cpp + JPHEAEJHGEF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPHEAEJHGEF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>(*)())((::PBYTE)hIl2Cpp + JPHEAEJHGEF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::DrinkMakerQuantifyTagType a2)
		{
			return ((::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*(*)(::System::UInt32, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + JPHEAEJHGEF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPHEAEJHGEF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPHEAEJHGEF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPHEAEJHGEF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JPHEAEJHGEF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPHEAEJHGEF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JPHEAEJHGEF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*))((::PBYTE)hIl2Cpp + JPHEAEJHGEF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

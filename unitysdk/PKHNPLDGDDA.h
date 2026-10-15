#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotWikiChangeInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKHNPLDGDDA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2CC160)
#define PKHNPLDGDDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2CCD40)
#define PKHNPLDGDDA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2CC500)
#define PKHNPLDGDDA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2CC1A0)
#define PKHNPLDGDDA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2CCA40)
#define PKHNPLDGDDA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2CC5A0)
#define PKHNPLDGDDA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2CC5F0)
#define PKHNPLDGDDA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2CC3D0)
#define PKHNPLDGDDA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2CC9E0)
#define PKHNPLDGDDA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2CCBB0)
#define PKHNPLDGDDA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2CC460)
#define PKHNPLDGDDA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2CC960)

inline static constexpr unsigned int PKHNPLDGDDA_TypeDefinitionIndex = 15268;

	class PKHNPLDGDDA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PKHNPLDGDDA")->GetStaticField(0x51130);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PKHNPLDGDDA")->GetStaticField(0x51138);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiChangeInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiChangeInfoRow*>**)UnitySDK::FromName("", "PKHNPLDGDDA")->GetStaticField(0x51140);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PKHNPLDGDDA")->GetStaticField(0x12420);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKHNPLDGDDA")->GetStaticField(0x12421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKHNPLDGDDA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PKHNPLDGDDA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKHNPLDGDDA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKHNPLDGDDA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PKHNPLDGDDA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKHNPLDGDDA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PKHNPLDGDDA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotWikiChangeInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotWikiChangeInfoRow*))((::PBYTE)hIl2Cpp + PKHNPLDGDDA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiChangeInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiChangeInfoRow*>*(*)())((::PBYTE)hIl2Cpp + PKHNPLDGDDA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PKHNPLDGDDA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiChangeInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiChangeInfoRow*>(*)())((::PBYTE)hIl2Cpp + PKHNPLDGDDA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotWikiChangeInfoRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotWikiChangeInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PKHNPLDGDDA_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

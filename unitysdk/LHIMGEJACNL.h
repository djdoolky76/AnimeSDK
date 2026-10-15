#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TravelBrochureDiaryGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHIMGEJACNL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C3FD0)
#define LHIMGEJACNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C4B20)
#define LHIMGEJACNL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C4370)
#define LHIMGEJACNL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C4010)
#define LHIMGEJACNL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C4860)
#define LHIMGEJACNL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C4410)
#define LHIMGEJACNL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C4460)
#define LHIMGEJACNL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C4240)
#define LHIMGEJACNL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C4800)
#define LHIMGEJACNL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C49D0)
#define LHIMGEJACNL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C42D0)
#define LHIMGEJACNL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C4780)

inline static constexpr unsigned int LHIMGEJACNL_TypeDefinitionIndex = 15377;

	class LHIMGEJACNL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryGroupRow*>**)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0x3B5F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0x3B5F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0x3B600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0xBF40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0xBF41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHIMGEJACNL_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHIMGEJACNL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHIMGEJACNL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHIMGEJACNL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LHIMGEJACNL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHIMGEJACNL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LHIMGEJACNL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TravelBrochureDiaryGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TravelBrochureDiaryGroupRow*))((::PBYTE)hIl2Cpp + LHIMGEJACNL_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryGroupRow*>*(*)())((::PBYTE)hIl2Cpp + LHIMGEJACNL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHIMGEJACNL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryGroupRow*>(*)())((::PBYTE)hIl2Cpp + LHIMGEJACNL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TravelBrochureDiaryGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TravelBrochureDiaryGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LHIMGEJACNL_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

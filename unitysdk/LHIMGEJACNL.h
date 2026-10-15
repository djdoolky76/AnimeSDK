#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TravelBrochureDiaryGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHIMGEJACNL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F1E20)
#define LHIMGEJACNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F2970)
#define LHIMGEJACNL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F21C0)
#define LHIMGEJACNL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F1E60)
#define LHIMGEJACNL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F26B0)
#define LHIMGEJACNL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F2260)
#define LHIMGEJACNL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F22B0)
#define LHIMGEJACNL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F2090)
#define LHIMGEJACNL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F2650)
#define LHIMGEJACNL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F2820)
#define LHIMGEJACNL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F2120)
#define LHIMGEJACNL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F25D0)

inline static constexpr unsigned int LHIMGEJACNL_TypeDefinitionIndex = 15377;

	class LHIMGEJACNL : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0x3D5E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryGroupRow*>**)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0x3D5E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0x3D5F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0xD280);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHIMGEJACNL")->GetStaticField(0xD281);
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

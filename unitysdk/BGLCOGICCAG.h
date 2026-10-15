#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGLCOGICCAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D648DD0)
#define BGLCOGICCAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6493A0)
#define BGLCOGICCAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D648F40)
#define BGLCOGICCAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D648840)
#define BGLCOGICCAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D648AD0)
#define BGLCOGICCAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D648FE0)
#define BGLCOGICCAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D649030)
#define BGLCOGICCAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D648E10)
#define BGLCOGICCAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D648A70)
#define BGLCOGICCAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D648C40)
#define BGLCOGICCAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D648EA0)
#define BGLCOGICCAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D6487C0)

inline static constexpr unsigned int BGLCOGICCAG_TypeDefinitionIndex = 11103;

	class BGLCOGICCAG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BGLCOGICCAG")->GetStaticField(0x409D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BGLCOGICCAG")->GetStaticField(0x409D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesTagRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesTagRow*>**)UnitySDK::FromName("", "BGLCOGICCAG")->GetStaticField(0x409E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BGLCOGICCAG")->GetStaticField(0xF5F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BGLCOGICCAG")->GetStaticField(0xF5F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLCOGICCAG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesTagRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesTagRow*>*(*)())((::PBYTE)hIl2Cpp + BGLCOGICCAG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BGLCOGICCAG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesTagRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesTagRow*>(*)())((::PBYTE)hIl2Cpp + BGLCOGICCAG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingFesTagRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingFesTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BGLCOGICCAG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BGLCOGICCAG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLCOGICCAG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLCOGICCAG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BGLCOGICCAG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BGLCOGICCAG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BGLCOGICCAG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingFesTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingFesTagRow*))((::PBYTE)hIl2Cpp + BGLCOGICCAG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

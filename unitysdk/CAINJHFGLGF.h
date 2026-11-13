#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidPerformanceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAINJHFGLGF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB0EDD0)
#define CAINJHFGLGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0F390)
#define CAINJHFGLGF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB0EF40)
#define CAINJHFGLGF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB0E830)
#define CAINJHFGLGF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB0EAC0)
#define CAINJHFGLGF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB0EFE0)
#define CAINJHFGLGF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB0F030)
#define CAINJHFGLGF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB0EE10)
#define CAINJHFGLGF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB0EA60)
#define CAINJHFGLGF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB0EC30)
#define CAINJHFGLGF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB0EEA0)
#define CAINJHFGLGF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB0E7B0)

inline static constexpr unsigned int CAINJHFGLGF_TypeDefinitionIndex = 14757;

	class CAINJHFGLGF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>**)UnitySDK::FromName("", "CAINJHFGLGF")->GetStaticField(0x4F970);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CAINJHFGLGF")->GetStaticField(0x4F978);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CAINJHFGLGF")->GetStaticField(0x4F980);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CAINJHFGLGF")->GetStaticField(0x11660);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CAINJHFGLGF")->GetStaticField(0x11661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAINJHFGLGF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CAINJHFGLGF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CAINJHFGLGF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + CAINJHFGLGF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RaidPerformanceConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RaidPerformanceConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CAINJHFGLGF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CAINJHFGLGF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAINJHFGLGF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAINJHFGLGF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CAINJHFGLGF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAINJHFGLGF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CAINJHFGLGF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RaidPerformanceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RaidPerformanceConfigRow*))((::PBYTE)hIl2Cpp + CAINJHFGLGF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

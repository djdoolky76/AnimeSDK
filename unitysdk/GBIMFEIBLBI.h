#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRogueAreaOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBIMFEIBLBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF7F30)
#define GBIMFEIBLBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF8530)
#define GBIMFEIBLBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF80A0)
#define GBIMFEIBLBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF7960)
#define GBIMFEIBLBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF7BF0)
#define GBIMFEIBLBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF8140)
#define GBIMFEIBLBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF8190)
#define GBIMFEIBLBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF7F70)
#define GBIMFEIBLBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF7B90)
#define GBIMFEIBLBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF7D60)
#define GBIMFEIBLBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF8000)
#define GBIMFEIBLBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF78E0)

inline static constexpr unsigned int GBIMFEIBLBI_TypeDefinitionIndex = 12342;

	class GBIMFEIBLBI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GBIMFEIBLBI")->GetStaticField(0x146D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaOverrideRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaOverrideRow*>**)UnitySDK::FromName("", "GBIMFEIBLBI")->GetStaticField(0x146D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GBIMFEIBLBI")->GetStaticField(0x146E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GBIMFEIBLBI")->GetStaticField(0x44E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBIMFEIBLBI")->GetStaticField(0x44E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBIMFEIBLBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaOverrideRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + GBIMFEIBLBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBIMFEIBLBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaOverrideRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaOverrideRow*>(*)())((::PBYTE)hIl2Cpp + GBIMFEIBLBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRogueAreaOverrideRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ActivityRogueAreaOverrideRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GBIMFEIBLBI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBIMFEIBLBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBIMFEIBLBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBIMFEIBLBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBIMFEIBLBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBIMFEIBLBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GBIMFEIBLBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRogueAreaOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRogueAreaOverrideRow*))((::PBYTE)hIl2Cpp + GBIMFEIBLBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

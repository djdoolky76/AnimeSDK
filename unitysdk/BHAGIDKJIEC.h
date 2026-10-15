#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRebateTriggerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHAGIDKJIEC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D7D2C50)
#define BHAGIDKJIEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7D31D0)
#define BHAGIDKJIEC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D7D2DC0)
#define BHAGIDKJIEC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D7D28D0)
#define BHAGIDKJIEC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D7D2760)
#define BHAGIDKJIEC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D7D2E60)
#define BHAGIDKJIEC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D7D2EB0)
#define BHAGIDKJIEC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D7D2C90)
#define BHAGIDKJIEC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D64A2A0)
#define BHAGIDKJIEC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D7D2B00)
#define BHAGIDKJIEC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D7D2D20)
#define BHAGIDKJIEC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D64A220)

inline static constexpr unsigned int BHAGIDKJIEC_TypeDefinitionIndex = 12332;

	class BHAGIDKJIEC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>**)UnitySDK::FromName("", "BHAGIDKJIEC")->GetStaticField(0x40B20);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BHAGIDKJIEC")->GetStaticField(0x40B28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BHAGIDKJIEC")->GetStaticField(0x40B30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BHAGIDKJIEC")->GetStaticField(0xF660);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BHAGIDKJIEC")->GetStaticField(0xF661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHAGIDKJIEC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BHAGIDKJIEC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHAGIDKJIEC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>(*)())((::PBYTE)hIl2Cpp + BHAGIDKJIEC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRebateTriggerConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRebateTriggerConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BHAGIDKJIEC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHAGIDKJIEC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHAGIDKJIEC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHAGIDKJIEC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BHAGIDKJIEC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHAGIDKJIEC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BHAGIDKJIEC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRebateTriggerConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRebateTriggerConfigRow*))((::PBYTE)hIl2Cpp + BHAGIDKJIEC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

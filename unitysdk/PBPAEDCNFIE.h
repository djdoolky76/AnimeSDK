#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DailyQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBPAEDCNFIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D29B660)
#define PBPAEDCNFIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D29BC30)
#define PBPAEDCNFIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D29B7D0)
#define PBPAEDCNFIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D29B0D0)
#define PBPAEDCNFIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D29B360)
#define PBPAEDCNFIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D29B870)
#define PBPAEDCNFIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D29B8C0)
#define PBPAEDCNFIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D29B6A0)
#define PBPAEDCNFIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D29B300)
#define PBPAEDCNFIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D29B4D0)
#define PBPAEDCNFIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D29B730)
#define PBPAEDCNFIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D29B050)

inline static constexpr unsigned int PBPAEDCNFIE_TypeDefinitionIndex = 13120;

	class PBPAEDCNFIE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>**)UnitySDK::FromName("", "PBPAEDCNFIE")->GetStaticField(0x4D010);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PBPAEDCNFIE")->GetStaticField(0x4D018);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PBPAEDCNFIE")->GetStaticField(0x4D020);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PBPAEDCNFIE")->GetStaticField(0x11990);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PBPAEDCNFIE")->GetStaticField(0x11991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBPAEDCNFIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>*(*)())((::PBYTE)hIl2Cpp + PBPAEDCNFIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBPAEDCNFIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyQuestRow*>(*)())((::PBYTE)hIl2Cpp + PBPAEDCNFIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DailyQuestRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DailyQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PBPAEDCNFIE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBPAEDCNFIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBPAEDCNFIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBPAEDCNFIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PBPAEDCNFIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBPAEDCNFIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PBPAEDCNFIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DailyQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DailyQuestRow*))((::PBYTE)hIl2Cpp + PBPAEDCNFIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

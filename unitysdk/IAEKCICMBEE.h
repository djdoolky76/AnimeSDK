#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingStatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAEKCICMBEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEAB6F0)
#define IAEKCICMBEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEABCC0)
#define IAEKCICMBEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEAB860)
#define IAEKCICMBEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEAB160)
#define IAEKCICMBEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEAB3F0)
#define IAEKCICMBEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEAB900)
#define IAEKCICMBEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEAB950)
#define IAEKCICMBEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEAB730)
#define IAEKCICMBEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEAB390)
#define IAEKCICMBEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEAB560)
#define IAEKCICMBEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEAB7C0)
#define IAEKCICMBEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEAB0E0)

inline static constexpr unsigned int IAEKCICMBEE_TypeDefinitionIndex = 10967;

	class IAEKCICMBEE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x1EE00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>**)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x1EE08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x1EE10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x6F90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IAEKCICMBEE")->GetStaticField(0x6F91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>*(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingStatRow* LMBKNCAIDLC(::RPG::GameCore::B51RacingStatType a1)
		{
			return ((::RPG::GameCore::B51RacingStatRow*(*)(::RPG::GameCore::B51RacingStatType))((::PBYTE)hIl2Cpp + IAEKCICMBEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAEKCICMBEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IAEKCICMBEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAEKCICMBEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IAEKCICMBEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingStatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingStatRow*))((::PBYTE)hIl2Cpp + IAEKCICMBEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

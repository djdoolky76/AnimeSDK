#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPassengerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAFCLFHLNEP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EEEB780)
#define DAFCLFHLNEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEEC2D0)
#define DAFCLFHLNEP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EEEBB20)
#define DAFCLFHLNEP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EEEB7C0)
#define DAFCLFHLNEP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EEEC010)
#define DAFCLFHLNEP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EEEBBC0)
#define DAFCLFHLNEP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EEEBC10)
#define DAFCLFHLNEP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EEEB9F0)
#define DAFCLFHLNEP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EEEBFB0)
#define DAFCLFHLNEP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EEEC140)
#define DAFCLFHLNEP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EEEBA80)
#define DAFCLFHLNEP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EEEBF30)

inline static constexpr unsigned int DAFCLFHLNEP_TypeDefinitionIndex = 15520;

	class DAFCLFHLNEP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPassengerConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPassengerConfigRow*>**)UnitySDK::FromName("", "DAFCLFHLNEP")->GetStaticField(0x373F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DAFCLFHLNEP")->GetStaticField(0x373F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DAFCLFHLNEP")->GetStaticField(0x37400);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DAFCLFHLNEP")->GetStaticField(0xBE70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DAFCLFHLNEP")->GetStaticField(0xBE71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAFCLFHLNEP_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAFCLFHLNEP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAFCLFHLNEP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAFCLFHLNEP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DAFCLFHLNEP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAFCLFHLNEP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DAFCLFHLNEP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPassengerConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPassengerConfigRow*))((::PBYTE)hIl2Cpp + DAFCLFHLNEP_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPassengerConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPassengerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DAFCLFHLNEP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAFCLFHLNEP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPassengerConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPassengerConfigRow*>(*)())((::PBYTE)hIl2Cpp + DAFCLFHLNEP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPassengerConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPassengerConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DAFCLFHLNEP_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

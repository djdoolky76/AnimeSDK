#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpecialChatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGBLLHPKHEP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D136FE0)
#define MGBLLHPKHEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1375B0)
#define MGBLLHPKHEP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D137150)
#define MGBLLHPKHEP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D136A50)
#define MGBLLHPKHEP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D136CE0)
#define MGBLLHPKHEP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1371F0)
#define MGBLLHPKHEP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D137240)
#define MGBLLHPKHEP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D137020)
#define MGBLLHPKHEP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D136C80)
#define MGBLLHPKHEP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D136E50)
#define MGBLLHPKHEP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1370B0)
#define MGBLLHPKHEP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1369D0)

inline static constexpr unsigned int MGBLLHPKHEP_TypeDefinitionIndex = 11785;

	class MGBLLHPKHEP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0x44470);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>**)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0x44478);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0x44480);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0x10250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0x10251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBLLHPKHEP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>*(*)())((::PBYTE)hIl2Cpp + MGBLLHPKHEP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGBLLHPKHEP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>(*)())((::PBYTE)hIl2Cpp + MGBLLHPKHEP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpecialChatRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSpecialChatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MGBLLHPKHEP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGBLLHPKHEP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBLLHPKHEP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBLLHPKHEP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MGBLLHPKHEP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBLLHPKHEP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MGBLLHPKHEP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpecialChatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpecialChatRow*))((::PBYTE)hIl2Cpp + MGBLLHPKHEP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

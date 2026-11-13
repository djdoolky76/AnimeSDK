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

#define MGBLLHPKHEP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1BBAD440)
#define MGBLLHPKHEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBADA10)
#define MGBLLHPKHEP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1BBAD5B0)
#define MGBLLHPKHEP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1BBACEB0)
#define MGBLLHPKHEP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1BBAD140)
#define MGBLLHPKHEP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1BBAD650)
#define MGBLLHPKHEP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1BBAD6A0)
#define MGBLLHPKHEP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1BBAD480)
#define MGBLLHPKHEP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1BBAD0E0)
#define MGBLLHPKHEP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1BBAD2B0)
#define MGBLLHPKHEP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1BBAD510)
#define MGBLLHPKHEP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1BBACE30)

inline static constexpr unsigned int MGBLLHPKHEP_TypeDefinitionIndex = 11842;

	class MGBLLHPKHEP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0x431E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0x431E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>**)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0x431F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0xD760);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MGBLLHPKHEP")->GetStaticField(0xD761);
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

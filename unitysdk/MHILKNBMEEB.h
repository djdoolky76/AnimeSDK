#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingAgendaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHILKNBMEEB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D17EC70)
#define MHILKNBMEEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D17F270)
#define MHILKNBMEEB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D17EDE0)
#define MHILKNBMEEB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D17E6A0)
#define MHILKNBMEEB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D17E930)
#define MHILKNBMEEB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D17EE80)
#define MHILKNBMEEB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D17EED0)
#define MHILKNBMEEB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D17ECB0)
#define MHILKNBMEEB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D17E8D0)
#define MHILKNBMEEB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D17EAA0)
#define MHILKNBMEEB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D17ED40)
#define MHILKNBMEEB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D17E620)

inline static constexpr unsigned int MHILKNBMEEB_TypeDefinitionIndex = 10955;

	class MHILKNBMEEB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingAgendaRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingAgendaRow*>**)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x466F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x466F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x46700);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x108B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x108B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHILKNBMEEB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingAgendaRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingAgendaRow*>*(*)())((::PBYTE)hIl2Cpp + MHILKNBMEEB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MHILKNBMEEB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingAgendaRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingAgendaRow*>(*)())((::PBYTE)hIl2Cpp + MHILKNBMEEB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingAgendaRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::B51RacingAgendaRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MHILKNBMEEB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MHILKNBMEEB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHILKNBMEEB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHILKNBMEEB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MHILKNBMEEB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MHILKNBMEEB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MHILKNBMEEB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingAgendaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingAgendaRow*))((::PBYTE)hIl2Cpp + MHILKNBMEEB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

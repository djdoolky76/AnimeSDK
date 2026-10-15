#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingAgendaRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHILKNBMEEB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1AC9C0)
#define MHILKNBMEEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1ACFC0)
#define MHILKNBMEEB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1ACB30)
#define MHILKNBMEEB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1AC3F0)
#define MHILKNBMEEB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1AC680)
#define MHILKNBMEEB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1ACBD0)
#define MHILKNBMEEB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1ACC20)
#define MHILKNBMEEB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1ACA00)
#define MHILKNBMEEB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1AC620)
#define MHILKNBMEEB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1AC7F0)
#define MHILKNBMEEB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1ACA90)
#define MHILKNBMEEB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1AC370)

	class MHILKNBMEEB : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x4CD90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingAgendaRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingAgendaRow*>**)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x4CD98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x4CDA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x11B20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MHILKNBMEEB")->GetStaticField(0x11B21);
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

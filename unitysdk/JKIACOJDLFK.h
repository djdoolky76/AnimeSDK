#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirContentConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKIACOJDLFK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D043410)
#define JKIACOJDLFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0439E0)
#define JKIACOJDLFK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D043580)
#define JKIACOJDLFK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D042E80)
#define JKIACOJDLFK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D043110)
#define JKIACOJDLFK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D043620)
#define JKIACOJDLFK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D043670)
#define JKIACOJDLFK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D043450)
#define JKIACOJDLFK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0430B0)
#define JKIACOJDLFK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D043280)
#define JKIACOJDLFK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0434E0)
#define JKIACOJDLFK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D042E00)

	class JKIACOJDLFK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JKIACOJDLFK")->GetStaticField(0x2F370);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JKIACOJDLFK")->GetStaticField(0x2F378);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirContentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirContentConfigRow*>**)UnitySDK::FromName("", "JKIACOJDLFK")->GetStaticField(0x2F380);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JKIACOJDLFK")->GetStaticField(0x9C90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JKIACOJDLFK")->GetStaticField(0x9C91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKIACOJDLFK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirContentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirContentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JKIACOJDLFK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKIACOJDLFK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirContentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirContentConfigRow*>(*)())((::PBYTE)hIl2Cpp + JKIACOJDLFK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirContentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirContentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JKIACOJDLFK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKIACOJDLFK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKIACOJDLFK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKIACOJDLFK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKIACOJDLFK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKIACOJDLFK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JKIACOJDLFK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirContentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirContentConfigRow*))((::PBYTE)hIl2Cpp + JKIACOJDLFK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

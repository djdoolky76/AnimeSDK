#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourLevelGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGKPKCOHHGP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDEEAD0)
#define FGKPKCOHHGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDEF050)
#define FGKPKCOHHGP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDEEC40)
#define FGKPKCOHHGP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDEE580)
#define FGKPKCOHHGP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDEE810)
#define FGKPKCOHHGP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDEECE0)
#define FGKPKCOHHGP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDEED30)
#define FGKPKCOHHGP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDEEB10)
#define FGKPKCOHHGP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDEE7B0)
#define FGKPKCOHHGP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDEE940)
#define FGKPKCOHHGP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDEEBA0)
#define FGKPKCOHHGP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDEE500)

	class FGKPKCOHHGP : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FGKPKCOHHGP")->GetStaticField(0x132A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FGKPKCOHHGP")->GetStaticField(0x132A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelGroupRow*>**)UnitySDK::FromName("", "FGKPKCOHHGP")->GetStaticField(0x132B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FGKPKCOHHGP")->GetStaticField(0x43A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FGKPKCOHHGP")->GetStaticField(0x43A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGKPKCOHHGP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelGroupRow*>*(*)())((::PBYTE)hIl2Cpp + FGKPKCOHHGP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGKPKCOHHGP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelGroupRow*>(*)())((::PBYTE)hIl2Cpp + FGKPKCOHHGP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourLevelGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourLevelGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FGKPKCOHHGP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGKPKCOHHGP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGKPKCOHHGP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGKPKCOHHGP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FGKPKCOHHGP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGKPKCOHHGP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FGKPKCOHHGP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourLevelGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourLevelGroupRow*))((::PBYTE)hIl2Cpp + FGKPKCOHHGP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

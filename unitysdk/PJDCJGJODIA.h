#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournCollectionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJDCJGJODIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C5B80)
#define PJDCJGJODIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C6100)
#define PJDCJGJODIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C5CF0)
#define PJDCJGJODIA_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D2C5990)
#define PJDCJGJODIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C55D0)
#define PJDCJGJODIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C5860)
#define PJDCJGJODIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C5D90)
#define PJDCJGJODIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C5DE0)
#define PJDCJGJODIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C5BC0)
#define PJDCJGJODIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C5800)
#define PJDCJGJODIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C59F0)
#define PJDCJGJODIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C5C50)
#define PJDCJGJODIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C5550)

inline static constexpr unsigned int PJDCJGJODIA_TypeDefinitionIndex = 14994;

	class PJDCJGJODIA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PJDCJGJODIA")->GetStaticField(0x50C80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PJDCJGJODIA")->GetStaticField(0x50C88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>**)UnitySDK::FromName("", "PJDCJGJODIA")->GetStaticField(0x50C90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PJDCJGJODIA")->GetStaticField(0x12360);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJDCJGJODIA")->GetStaticField(0x12361);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJDCJGJODIA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PJDCJGJODIA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJDCJGJODIA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>(*)())((::PBYTE)hIl2Cpp + PJDCJGJODIA_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>, ::RPG::GameCore::RogueTournCollectionConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>, ::RPG::GameCore::RogueTournCollectionConfigRow*>(*)())((::PBYTE)hIl2Cpp + PJDCJGJODIA_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournCollectionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournCollectionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PJDCJGJODIA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJDCJGJODIA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJDCJGJODIA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJDCJGJODIA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PJDCJGJODIA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJDCJGJODIA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PJDCJGJODIA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournCollectionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournCollectionConfigRow*))((::PBYTE)hIl2Cpp + PJDCJGJODIA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

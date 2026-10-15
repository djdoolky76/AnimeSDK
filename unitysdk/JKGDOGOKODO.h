#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournExhibitionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKGDOGOKODO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D041D10)
#define JKGDOGOKODO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D042290)
#define JKGDOGOKODO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D041E80)
#define JKGDOGOKODO_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D041B20)
#define JKGDOGOKODO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D041760)
#define JKGDOGOKODO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0419F0)
#define JKGDOGOKODO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D041F20)
#define JKGDOGOKODO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D041F70)
#define JKGDOGOKODO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D041D50)
#define JKGDOGOKODO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D041990)
#define JKGDOGOKODO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D041B80)
#define JKGDOGOKODO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D041DE0)
#define JKGDOGOKODO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0416E0)

inline static constexpr unsigned int JKGDOGOKODO_TypeDefinitionIndex = 14996;

	class JKGDOGOKODO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JKGDOGOKODO")->GetStaticField(0x2F120);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>**)UnitySDK::FromName("", "JKGDOGOKODO")->GetStaticField(0x2F128);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JKGDOGOKODO")->GetStaticField(0x2F130);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JKGDOGOKODO")->GetStaticField(0x9C70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JKGDOGOKODO")->GetStaticField(0x9C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKGDOGOKODO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JKGDOGOKODO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKGDOGOKODO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>(*)())((::PBYTE)hIl2Cpp + JKGDOGOKODO_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>, ::RPG::GameCore::RogueTournExhibitionConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExhibitionConfigRow*>, ::RPG::GameCore::RogueTournExhibitionConfigRow*>(*)())((::PBYTE)hIl2Cpp + JKGDOGOKODO_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournExhibitionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournExhibitionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JKGDOGOKODO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKGDOGOKODO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKGDOGOKODO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKGDOGOKODO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKGDOGOKODO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKGDOGOKODO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JKGDOGOKODO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournExhibitionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournExhibitionConfigRow*))((::PBYTE)hIl2Cpp + JKGDOGOKODO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

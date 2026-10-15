#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define HDAMHJEPFCJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE92050)
#define HDAMHJEPFCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE925D0)
#define HDAMHJEPFCJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE921C0)
#define HDAMHJEPFCJ_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE91E60)
#define HDAMHJEPFCJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE91AA0)
#define HDAMHJEPFCJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE91D30)
#define HDAMHJEPFCJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE92260)
#define HDAMHJEPFCJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE922B0)
#define HDAMHJEPFCJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE92090)
#define HDAMHJEPFCJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE91CD0)
#define HDAMHJEPFCJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE91EC0)
#define HDAMHJEPFCJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE92120)
#define HDAMHJEPFCJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE91A20)

inline static constexpr unsigned int HDAMHJEPFCJ_TypeDefinitionIndex = 11202;

	class HDAMHJEPFCJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HDAMHJEPFCJ")->GetStaticField(0x1C970);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HDAMHJEPFCJ")->GetStaticField(0x1C978);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>**)UnitySDK::FromName("", "HDAMHJEPFCJ")->GetStaticField(0x1C980);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HDAMHJEPFCJ")->GetStaticField(0x6630);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HDAMHJEPFCJ")->GetStaticField(0x6631);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>(*)())((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityConfigRow*))((::PBYTE)hIl2Cpp + HDAMHJEPFCJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

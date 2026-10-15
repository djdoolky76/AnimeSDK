#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class OAMKFGGIAIM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define LBCCCFNJLMP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D4BB0)
#define LBCCCFNJLMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D5180)
#define LBCCCFNJLMP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D4D20)
#define LBCCCFNJLMP_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D0D49A0)
#define LBCCCFNJLMP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D45A0)
#define LBCCCFNJLMP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D4830)
#define LBCCCFNJLMP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D4DC0)
#define LBCCCFNJLMP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D4E10)
#define LBCCCFNJLMP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D4BF0)
#define LBCCCFNJLMP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D47D0)
#define LBCCCFNJLMP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D4A20)
#define LBCCCFNJLMP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D4C80)
#define LBCCCFNJLMP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D4520)

inline static constexpr unsigned int LBCCCFNJLMP_TypeDefinitionIndex = 11287;

	class LBCCCFNJLMP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>**)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0x3B900);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0x3B908);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0x3B910);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0xCAB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0xCAB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>*(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_EHAFELPCLKB_OFFSET))();
		}

		static ::OAMKFGGIAIM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::OAMKFGGIAIM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LBCCCFNJLMP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LBCCCFNJLMP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LBCCCFNJLMP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LBCCCFNJLMP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OAMKFGGIAIM* a1)
		{
			return ((::System::Void(*)(::OAMKFGGIAIM*))((::PBYTE)hIl2Cpp + LBCCCFNJLMP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
class OAMKFGGIAIM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBCCCFNJLMP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2C9910)
#define LBCCCFNJLMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C9EE0)
#define LBCCCFNJLMP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E2C9A80)
#define LBCCCFNJLMP_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E2C9700)
#define LBCCCFNJLMP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E2C9300)
#define LBCCCFNJLMP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2C9590)
#define LBCCCFNJLMP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2C9B20)
#define LBCCCFNJLMP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E2C9B70)
#define LBCCCFNJLMP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E2C9950)
#define LBCCCFNJLMP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E2C9530)
#define LBCCCFNJLMP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2C9780)
#define LBCCCFNJLMP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2C99E0)
#define LBCCCFNJLMP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2C9280)

inline static constexpr unsigned int LBCCCFNJLMP_TypeDefinitionIndex = 11338;

	class LBCCCFNJLMP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>**)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0x30B90);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0x30B98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0x30BA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0xA4B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LBCCCFNJLMP")->GetStaticField(0xA4B1);
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

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>, ::OAMKFGGIAIM*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OAMKFGGIAIM*>, ::OAMKFGGIAIM*>(*)())((::PBYTE)hIl2Cpp + LBCCCFNJLMP_EHAFELPCLKB_OFFSET))();
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

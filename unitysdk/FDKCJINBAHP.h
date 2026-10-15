#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
class MGCJOCBHLBF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDKCJINBAHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDB0050)
#define FDKCJINBAHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDB0620)
#define FDKCJINBAHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDB01C0)
#define FDKCJINBAHP_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CDAFE40)
#define FDKCJINBAHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDAFA40)
#define FDKCJINBAHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDAFCD0)
#define FDKCJINBAHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDB0260)
#define FDKCJINBAHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDB02B0)
#define FDKCJINBAHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDB0090)
#define FDKCJINBAHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDAFC70)
#define FDKCJINBAHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDAFEC0)
#define FDKCJINBAHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDB0120)
#define FDKCJINBAHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDAF9C0)

inline static constexpr unsigned int FDKCJINBAHP_TypeDefinitionIndex = 11581;

	class FDKCJINBAHP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x10310);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>**)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x10318);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x10320);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x3450);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x3451);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>*(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>, ::MGCJOCBHLBF*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>, ::MGCJOCBHLBF*>(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_EHAFELPCLKB_OFFSET))();
		}

		static ::MGCJOCBHLBF* LMBKNCAIDLC(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::MGCJOCBHLBF*(*)(::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + FDKCJINBAHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FDKCJINBAHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDKCJINBAHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FDKCJINBAHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MGCJOCBHLBF* a1)
		{
			return ((::System::Void(*)(::MGCJOCBHLBF*))((::PBYTE)hIl2Cpp + FDKCJINBAHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class CONJABFPPOD;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIMLABDOAGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2859A0)
#define OIMLABDOAGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D285F20)
#define OIMLABDOAGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D285B10)
#define OIMLABDOAGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D285450)
#define OIMLABDOAGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2856E0)
#define OIMLABDOAGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D285BB0)
#define OIMLABDOAGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D285C00)
#define OIMLABDOAGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2859E0)
#define OIMLABDOAGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D285680)
#define OIMLABDOAGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D285850)
#define OIMLABDOAGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D285A70)
#define OIMLABDOAGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2853D0)

	class OIMLABDOAGA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OIMLABDOAGA")->GetStaticField(0x37590);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OIMLABDOAGA")->GetStaticField(0x37598);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CONJABFPPOD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CONJABFPPOD*>**)UnitySDK::FromName("", "OIMLABDOAGA")->GetStaticField(0x375A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OIMLABDOAGA")->GetStaticField(0xBBC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OIMLABDOAGA")->GetStaticField(0xBBC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMLABDOAGA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CONJABFPPOD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CONJABFPPOD*>*(*)())((::PBYTE)hIl2Cpp + OIMLABDOAGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIMLABDOAGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CONJABFPPOD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CONJABFPPOD*>(*)())((::PBYTE)hIl2Cpp + OIMLABDOAGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::CONJABFPPOD* LMBKNCAIDLC(::RPG::GameCore::FateRinHouguRarityType a1)
		{
			return ((::CONJABFPPOD*(*)(::RPG::GameCore::FateRinHouguRarityType))((::PBYTE)hIl2Cpp + OIMLABDOAGA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIMLABDOAGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMLABDOAGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMLABDOAGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OIMLABDOAGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OIMLABDOAGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OIMLABDOAGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CONJABFPPOD* a1)
		{
			return ((::System::Void(*)(::CONJABFPPOD*))((::PBYTE)hIl2Cpp + OIMLABDOAGA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

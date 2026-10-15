#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinDeckRecommendTiming.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class OFHBIFPNNBH;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBLKFJMEAIP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD5F9A0)
#define EBLKFJMEAIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5FFA0)
#define EBLKFJMEAIP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD5FB10)
#define EBLKFJMEAIP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5F3C0)
#define EBLKFJMEAIP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5F650)
#define EBLKFJMEAIP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD5FBB0)
#define EBLKFJMEAIP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD5FC00)
#define EBLKFJMEAIP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD5F9E0)
#define EBLKFJMEAIP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5F5F0)
#define EBLKFJMEAIP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5F7C0)
#define EBLKFJMEAIP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD5FA70)
#define EBLKFJMEAIP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5F340)

	class EBLKFJMEAIP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OFHBIFPNNBH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OFHBIFPNNBH*>**)UnitySDK::FromName("", "EBLKFJMEAIP")->GetStaticField(0x52F80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EBLKFJMEAIP")->GetStaticField(0x52F88);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EBLKFJMEAIP")->GetStaticField(0x52F90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EBLKFJMEAIP")->GetStaticField(0x126B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EBLKFJMEAIP")->GetStaticField(0x126B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBLKFJMEAIP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OFHBIFPNNBH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OFHBIFPNNBH*>*(*)())((::PBYTE)hIl2Cpp + EBLKFJMEAIP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBLKFJMEAIP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OFHBIFPNNBH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OFHBIFPNNBH*>(*)())((::PBYTE)hIl2Cpp + EBLKFJMEAIP_FPHGMAMDFHE_OFFSET))();
		}

		static ::OFHBIFPNNBH* LMBKNCAIDLC(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::FateRinDeckRecommendTiming a2)
		{
			return ((::OFHBIFPNNBH*(*)(::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::FateRinDeckRecommendTiming))((::PBYTE)hIl2Cpp + EBLKFJMEAIP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBLKFJMEAIP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBLKFJMEAIP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBLKFJMEAIP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBLKFJMEAIP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBLKFJMEAIP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EBLKFJMEAIP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OFHBIFPNNBH* a1)
		{
			return ((::System::Void(*)(::OFHBIFPNNBH*))((::PBYTE)hIl2Cpp + EBLKFJMEAIP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

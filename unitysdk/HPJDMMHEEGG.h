#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HANKGJILHLF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPJDMMHEEGG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CED2DC0)
#define HPJDMMHEEGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED3390)
#define HPJDMMHEEGG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CED2F30)
#define HPJDMMHEEGG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CED2830)
#define HPJDMMHEEGG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CED2AC0)
#define HPJDMMHEEGG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CED2FD0)
#define HPJDMMHEEGG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CED3020)
#define HPJDMMHEEGG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CED2E00)
#define HPJDMMHEEGG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CED2A60)
#define HPJDMMHEEGG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CED2C30)
#define HPJDMMHEEGG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CED2E90)
#define HPJDMMHEEGG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CED27B0)

	class HPJDMMHEEGG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HPJDMMHEEGG")->GetStaticField(0x20420);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HPJDMMHEEGG")->GetStaticField(0x20428);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HANKGJILHLF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HANKGJILHLF*>**)UnitySDK::FromName("", "HPJDMMHEEGG")->GetStaticField(0x20430);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HPJDMMHEEGG")->GetStaticField(0x75C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HPJDMMHEEGG")->GetStaticField(0x75C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJDMMHEEGG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HANKGJILHLF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HANKGJILHLF*>*(*)())((::PBYTE)hIl2Cpp + HPJDMMHEEGG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPJDMMHEEGG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HANKGJILHLF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HANKGJILHLF*>(*)())((::PBYTE)hIl2Cpp + HPJDMMHEEGG_FPHGMAMDFHE_OFFSET))();
		}

		static ::HANKGJILHLF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HANKGJILHLF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HPJDMMHEEGG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPJDMMHEEGG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJDMMHEEGG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJDMMHEEGG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HPJDMMHEEGG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPJDMMHEEGG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HPJDMMHEEGG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HANKGJILHLF* a1)
		{
			return ((::System::Void(*)(::HANKGJILHLF*))((::PBYTE)hIl2Cpp + HPJDMMHEEGG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NDDDCIEFCNJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALINMCHDHEF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCAB670)
#define ALINMCHDHEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCABC40)
#define ALINMCHDHEF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCAB7E0)
#define ALINMCHDHEF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCAB0E0)
#define ALINMCHDHEF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCAB370)
#define ALINMCHDHEF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCAB880)
#define ALINMCHDHEF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCAB8D0)
#define ALINMCHDHEF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCAB6B0)
#define ALINMCHDHEF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCAB310)
#define ALINMCHDHEF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCAB4E0)
#define ALINMCHDHEF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCAB740)
#define ALINMCHDHEF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCAB060)

inline static constexpr unsigned int ALINMCHDHEF_TypeDefinitionIndex = 14439;

	class ALINMCHDHEF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDDDCIEFCNJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDDDCIEFCNJ*>**)UnitySDK::FromName("", "ALINMCHDHEF")->GetStaticField(0x41C70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ALINMCHDHEF")->GetStaticField(0x41C78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ALINMCHDHEF")->GetStaticField(0x41C80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ALINMCHDHEF")->GetStaticField(0xFA50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ALINMCHDHEF")->GetStaticField(0xFA51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALINMCHDHEF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDDDCIEFCNJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDDDCIEFCNJ*>*(*)())((::PBYTE)hIl2Cpp + ALINMCHDHEF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALINMCHDHEF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NDDDCIEFCNJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NDDDCIEFCNJ*>(*)())((::PBYTE)hIl2Cpp + ALINMCHDHEF_FPHGMAMDFHE_OFFSET))();
		}

		static ::NDDDCIEFCNJ* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NDDDCIEFCNJ*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ALINMCHDHEF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALINMCHDHEF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALINMCHDHEF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALINMCHDHEF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ALINMCHDHEF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ALINMCHDHEF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ALINMCHDHEF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NDDDCIEFCNJ* a1)
		{
			return ((::System::Void(*)(::NDDDCIEFCNJ*))((::PBYTE)hIl2Cpp + ALINMCHDHEF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

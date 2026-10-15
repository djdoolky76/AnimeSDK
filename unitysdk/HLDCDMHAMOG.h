#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DMHNMEJKELL;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLDCDMHAMOG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEBF3C0)
#define HLDCDMHAMOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBF990)
#define HLDCDMHAMOG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEBF530)
#define HLDCDMHAMOG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEBEE30)
#define HLDCDMHAMOG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEBF0C0)
#define HLDCDMHAMOG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEBF5D0)
#define HLDCDMHAMOG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEBF620)
#define HLDCDMHAMOG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEBF400)
#define HLDCDMHAMOG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEBF060)
#define HLDCDMHAMOG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEBF230)
#define HLDCDMHAMOG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEBF490)
#define HLDCDMHAMOG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEBEDB0)

inline static constexpr unsigned int HLDCDMHAMOG_TypeDefinitionIndex = 13932;

	class HLDCDMHAMOG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMHNMEJKELL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMHNMEJKELL*>**)UnitySDK::FromName("", "HLDCDMHAMOG")->GetStaticField(0x1EDA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HLDCDMHAMOG")->GetStaticField(0x1EDA8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HLDCDMHAMOG")->GetStaticField(0x1EDB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HLDCDMHAMOG")->GetStaticField(0x7130);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HLDCDMHAMOG")->GetStaticField(0x7131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLDCDMHAMOG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMHNMEJKELL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMHNMEJKELL*>*(*)())((::PBYTE)hIl2Cpp + HLDCDMHAMOG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLDCDMHAMOG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DMHNMEJKELL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DMHNMEJKELL*>(*)())((::PBYTE)hIl2Cpp + HLDCDMHAMOG_FPHGMAMDFHE_OFFSET))();
		}

		static ::DMHNMEJKELL* LMBKNCAIDLC(::RPG::GameCore::LimaoNewsOfficeSurveyType a1)
		{
			return ((::DMHNMEJKELL*(*)(::RPG::GameCore::LimaoNewsOfficeSurveyType))((::PBYTE)hIl2Cpp + HLDCDMHAMOG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLDCDMHAMOG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLDCDMHAMOG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLDCDMHAMOG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HLDCDMHAMOG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLDCDMHAMOG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HLDCDMHAMOG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DMHNMEJKELL* a1)
		{
			return ((::System::Void(*)(::DMHNMEJKELL*))((::PBYTE)hIl2Cpp + HLDCDMHAMOG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

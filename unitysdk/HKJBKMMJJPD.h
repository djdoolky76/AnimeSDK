#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAssistantMessageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKJBKMMJJPD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE8CBC0)
#define HKJBKMMJJPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE8D190)
#define HKJBKMMJJPD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE8CD30)
#define HKJBKMMJJPD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE8C630)
#define HKJBKMMJJPD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE8C8C0)
#define HKJBKMMJJPD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE8CDD0)
#define HKJBKMMJJPD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE8CE20)
#define HKJBKMMJJPD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE8CC00)
#define HKJBKMMJJPD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE8C860)
#define HKJBKMMJJPD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE8CA30)
#define HKJBKMMJJPD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE8CC90)
#define HKJBKMMJJPD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE8C5B0)

inline static constexpr unsigned int HKJBKMMJJPD_TypeDefinitionIndex = 12273;

	class HKJBKMMJJPD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAssistantMessageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAssistantMessageRow*>**)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x1C9C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x1C9C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x1C9D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x62A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x62A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKJBKMMJJPD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAssistantMessageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAssistantMessageRow*>*(*)())((::PBYTE)hIl2Cpp + HKJBKMMJJPD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKJBKMMJJPD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAssistantMessageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAssistantMessageRow*>(*)())((::PBYTE)hIl2Cpp + HKJBKMMJJPD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAssistantMessageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesAssistantMessageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HKJBKMMJJPD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKJBKMMJJPD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKJBKMMJJPD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKJBKMMJJPD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKJBKMMJJPD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKJBKMMJJPD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HKJBKMMJJPD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesAssistantMessageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAssistantMessageRow*))((::PBYTE)hIl2Cpp + HKJBKMMJJPD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

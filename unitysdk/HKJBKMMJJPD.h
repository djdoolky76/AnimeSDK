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

#define HKJBKMMJJPD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E09B8F0)
#define HKJBKMMJJPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09BEC0)
#define HKJBKMMJJPD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E09BA60)
#define HKJBKMMJJPD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E09B360)
#define HKJBKMMJJPD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E09B5F0)
#define HKJBKMMJJPD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E09BB00)
#define HKJBKMMJJPD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E09BB50)
#define HKJBKMMJJPD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E09B930)
#define HKJBKMMJJPD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E09B590)
#define HKJBKMMJJPD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E09B760)
#define HKJBKMMJJPD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E09B9C0)
#define HKJBKMMJJPD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E09B2E0)

inline static constexpr unsigned int HKJBKMMJJPD_TypeDefinitionIndex = 12330;

	class HKJBKMMJJPD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x16850);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAssistantMessageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAssistantMessageRow*>**)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x16858);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x16860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x4A70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HKJBKMMJJPD")->GetStaticField(0x4A71);
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

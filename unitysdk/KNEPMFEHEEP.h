#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNEPMFEHEEP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1ECECF00)
#define KNEPMFEHEEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECED4D0)
#define KNEPMFEHEEP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1ECED070)
#define KNEPMFEHEEP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1ECEC970)
#define KNEPMFEHEEP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1ECECC00)
#define KNEPMFEHEEP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1ECED110)
#define KNEPMFEHEEP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1ECED160)
#define KNEPMFEHEEP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1ECECF40)
#define KNEPMFEHEEP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1ECECBA0)
#define KNEPMFEHEEP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1ECECD70)
#define KNEPMFEHEEP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1ECECFD0)
#define KNEPMFEHEEP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1ECEC8F0)

inline static constexpr unsigned int KNEPMFEHEEP_TypeDefinitionIndex = 12279;

	class KNEPMFEHEEP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestRow*>**)UnitySDK::FromName("", "KNEPMFEHEEP")->GetStaticField(0x39A00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KNEPMFEHEEP")->GetStaticField(0x39A08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KNEPMFEHEEP")->GetStaticField(0x39A10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KNEPMFEHEEP")->GetStaticField(0xB6D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KNEPMFEHEEP")->GetStaticField(0xB6D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNEPMFEHEEP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestRow*>*(*)())((::PBYTE)hIl2Cpp + KNEPMFEHEEP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNEPMFEHEEP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesQuestRow*>(*)())((::PBYTE)hIl2Cpp + KNEPMFEHEEP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesQuestRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KNEPMFEHEEP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNEPMFEHEEP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNEPMFEHEEP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNEPMFEHEEP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KNEPMFEHEEP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KNEPMFEHEEP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KNEPMFEHEEP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesQuestRow*))((::PBYTE)hIl2Cpp + KNEPMFEHEEP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

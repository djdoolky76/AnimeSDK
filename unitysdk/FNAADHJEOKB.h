#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildCardTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNAADHJEOKB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDDDBE0)
#define FNAADHJEOKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDDE1E0)
#define FNAADHJEOKB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDDDD50)
#define FNAADHJEOKB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDDD600)
#define FNAADHJEOKB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDDD890)
#define FNAADHJEOKB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDDDDF0)
#define FNAADHJEOKB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDDDE40)
#define FNAADHJEOKB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDDDC20)
#define FNAADHJEOKB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDDD830)
#define FNAADHJEOKB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDDDA00)
#define FNAADHJEOKB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDDDCB0)
#define FNAADHJEOKB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDDD580)

inline static constexpr unsigned int FNAADHJEOKB_TypeDefinitionIndex = 11437;

	class FNAADHJEOKB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNAADHJEOKB")->GetStaticField(0x12EE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FNAADHJEOKB")->GetStaticField(0x12EE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>**)UnitySDK::FromName("", "FNAADHJEOKB")->GetStaticField(0x12EF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNAADHJEOKB")->GetStaticField(0x3DC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNAADHJEOKB")->GetStaticField(0x3DC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAADHJEOKB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>*(*)())((::PBYTE)hIl2Cpp + FNAADHJEOKB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNAADHJEOKB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>(*)())((::PBYTE)hIl2Cpp + FNAADHJEOKB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildCardTypeRow* LMBKNCAIDLC(::RPG::GameCore::EvolveBuildCardType a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::RPG::GameCore::EvolveBuildCardTypeRow*(*)(::RPG::GameCore::EvolveBuildCardType, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + FNAADHJEOKB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNAADHJEOKB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAADHJEOKB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAADHJEOKB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FNAADHJEOKB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNAADHJEOKB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNAADHJEOKB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::EvolveBuildCardTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildCardTypeRow*))((::PBYTE)hIl2Cpp + FNAADHJEOKB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

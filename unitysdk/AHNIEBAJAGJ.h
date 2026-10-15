#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/SpaceZooSpicalEventState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooSpecialEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHNIEBAJAGJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCC90B0)
#define AHNIEBAJAGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC96B0)
#define AHNIEBAJAGJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCC9220)
#define AHNIEBAJAGJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCC8AD0)
#define AHNIEBAJAGJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCC8D60)
#define AHNIEBAJAGJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCC92C0)
#define AHNIEBAJAGJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCC9310)
#define AHNIEBAJAGJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCC90F0)
#define AHNIEBAJAGJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCC8D00)
#define AHNIEBAJAGJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCC8ED0)
#define AHNIEBAJAGJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCC9180)
#define AHNIEBAJAGJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCC8A50)

inline static constexpr unsigned int AHNIEBAJAGJ_TypeDefinitionIndex = 12372;

	class AHNIEBAJAGJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AHNIEBAJAGJ")->GetStaticField(0x38E80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>**)UnitySDK::FromName("", "AHNIEBAJAGJ")->GetStaticField(0x38E88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AHNIEBAJAGJ")->GetStaticField(0x38E90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AHNIEBAJAGJ")->GetStaticField(0xC240);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AHNIEBAJAGJ")->GetStaticField(0xC241);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>*(*)())((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>(*)())((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooSpecialEventRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::SpaceZooSpicalEventState a2)
		{
			return ((::RPG::GameCore::SpaceZooSpecialEventRow*(*)(::System::UInt32, ::RPG::GameCore::SpaceZooSpicalEventState))((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SpaceZooSpecialEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooSpecialEventRow*))((::PBYTE)hIl2Cpp + AHNIEBAJAGJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

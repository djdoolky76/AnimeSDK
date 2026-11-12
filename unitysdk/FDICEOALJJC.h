#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2LevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDICEOALJJC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFB54E0)
#define FDICEOALJJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB5A60)
#define FDICEOALJJC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFB5650)
#define FDICEOALJJC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFB4FD0)
#define FDICEOALJJC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFB5260)
#define FDICEOALJJC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFB56F0)
#define FDICEOALJJC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFB5740)
#define FDICEOALJJC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFB5520)
#define FDICEOALJJC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFB5200)
#define FDICEOALJJC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFB5390)
#define FDICEOALJJC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFB55B0)
#define FDICEOALJJC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFB4F50)

inline static constexpr unsigned int FDICEOALJJC_TypeDefinitionIndex = 11990;

	class FDICEOALJJC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>**)UnitySDK::FromName("", "FDICEOALJJC")->GetStaticField(0x41740);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FDICEOALJJC")->GetStaticField(0x41748);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FDICEOALJJC")->GetStaticField(0x41750);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDICEOALJJC")->GetStaticField(0xDF80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FDICEOALJJC")->GetStaticField(0xDF81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDICEOALJJC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>*(*)())((::PBYTE)hIl2Cpp + FDICEOALJJC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDICEOALJJC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>(*)())((::PBYTE)hIl2Cpp + FDICEOALJJC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2LevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2LevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FDICEOALJJC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDICEOALJJC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDICEOALJJC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDICEOALJJC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FDICEOALJJC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDICEOALJJC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FDICEOALJJC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2LevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2LevelRow*))((::PBYTE)hIl2Cpp + FDICEOALJJC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

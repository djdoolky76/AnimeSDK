#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeRobotInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMOJCBANBOE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9B8420)
#define BMOJCBANBOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9B89F0)
#define BMOJCBANBOE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9B8590)
#define BMOJCBANBOE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9B7E90)
#define BMOJCBANBOE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9B8120)
#define BMOJCBANBOE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9B8630)
#define BMOJCBANBOE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9B8680)
#define BMOJCBANBOE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9B8460)
#define BMOJCBANBOE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9B80C0)
#define BMOJCBANBOE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9B8290)
#define BMOJCBANBOE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9B84F0)
#define BMOJCBANBOE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9B7E10)

inline static constexpr unsigned int BMOJCBANBOE_TypeDefinitionIndex = 11920;

	class BMOJCBANBOE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRobotInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRobotInfoRow*>**)UnitySDK::FromName("", "BMOJCBANBOE")->GetStaticField(0x38A60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMOJCBANBOE")->GetStaticField(0x38A68);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BMOJCBANBOE")->GetStaticField(0x38A70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BMOJCBANBOE")->GetStaticField(0xB600);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BMOJCBANBOE")->GetStaticField(0xB601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOJCBANBOE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRobotInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRobotInfoRow*>*(*)())((::PBYTE)hIl2Cpp + BMOJCBANBOE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMOJCBANBOE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRobotInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRobotInfoRow*>(*)())((::PBYTE)hIl2Cpp + BMOJCBANBOE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeRobotInfoRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeRobotInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BMOJCBANBOE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMOJCBANBOE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOJCBANBOE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOJCBANBOE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BMOJCBANBOE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMOJCBANBOE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BMOJCBANBOE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeRobotInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeRobotInfoRow*))((::PBYTE)hIl2Cpp + BMOJCBANBOE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

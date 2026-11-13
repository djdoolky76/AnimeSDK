#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourRailBallConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKHMKJOKKNN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA08FA0)
#define OKHMKJOKKNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA09520)
#define OKHMKJOKKNN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA09110)
#define OKHMKJOKKNN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA08A50)
#define OKHMKJOKKNN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA08CE0)
#define OKHMKJOKKNN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA091B0)
#define OKHMKJOKKNN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA09200)
#define OKHMKJOKKNN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA08FE0)
#define OKHMKJOKKNN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA08C80)
#define OKHMKJOKKNN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA08E10)
#define OKHMKJOKKNN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA09070)
#define OKHMKJOKKNN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA089D0)

inline static constexpr unsigned int OKHMKJOKKNN_TypeDefinitionIndex = 12157;

	class OKHMKJOKKNN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallConfigRow*>**)UnitySDK::FromName("", "OKHMKJOKKNN")->GetStaticField(0x585D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OKHMKJOKKNN")->GetStaticField(0x585D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OKHMKJOKKNN")->GetStaticField(0x585E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OKHMKJOKKNN")->GetStaticField(0x12C70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OKHMKJOKKNN")->GetStaticField(0x12C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKHMKJOKKNN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OKHMKJOKKNN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKHMKJOKKNN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallConfigRow*>(*)())((::PBYTE)hIl2Cpp + OKHMKJOKKNN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourRailBallConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourRailBallConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OKHMKJOKKNN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKHMKJOKKNN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKHMKJOKKNN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKHMKJOKKNN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OKHMKJOKKNN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKHMKJOKKNN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OKHMKJOKKNN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourRailBallConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourRailBallConfigRow*))((::PBYTE)hIl2Cpp + OKHMKJOKKNN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

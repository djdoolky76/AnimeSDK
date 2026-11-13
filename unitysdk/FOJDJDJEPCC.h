#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideActivityQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOJDJDJEPCC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA35BD0)
#define FOJDJDJEPCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA36150)
#define FOJDJDJEPCC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA35D40)
#define FOJDJDJEPCC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA356C0)
#define FOJDJDJEPCC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA35950)
#define FOJDJDJEPCC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA35DE0)
#define FOJDJDJEPCC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA35E30)
#define FOJDJDJEPCC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA35C10)
#define FOJDJDJEPCC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA358F0)
#define FOJDJDJEPCC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA35A80)
#define FOJDJDJEPCC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA35CA0)
#define FOJDJDJEPCC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA35640)

inline static constexpr unsigned int FOJDJDJEPCC_TypeDefinitionIndex = 10947;

	class FOJDJDJEPCC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FOJDJDJEPCC")->GetStaticField(0xABB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>**)UnitySDK::FromName("", "FOJDJDJEPCC")->GetStaticField(0xABB8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FOJDJDJEPCC")->GetStaticField(0xABC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOJDJDJEPCC")->GetStaticField(0x12D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FOJDJDJEPCC")->GetStaticField(0x12D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJDJDJEPCC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>*(*)())((::PBYTE)hIl2Cpp + FOJDJDJEPCC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOJDJDJEPCC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>(*)())((::PBYTE)hIl2Cpp + FOJDJDJEPCC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideActivityQuestRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideActivityQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOJDJDJEPCC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOJDJDJEPCC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJDJDJEPCC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJDJDJEPCC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOJDJDJEPCC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOJDJDJEPCC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FOJDJDJEPCC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AetherDivideActivityQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideActivityQuestRow*))((::PBYTE)hIl2Cpp + FOJDJDJEPCC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

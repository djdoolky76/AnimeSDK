#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyRankingsNPCRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEDHBDOLNNI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6079F0)
#define OEDHBDOLNNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E607FC0)
#define OEDHBDOLNNI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E607B60)
#define OEDHBDOLNNI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E607460)
#define OEDHBDOLNNI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6076F0)
#define OEDHBDOLNNI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E607C00)
#define OEDHBDOLNNI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E607C50)
#define OEDHBDOLNNI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E607A30)
#define OEDHBDOLNNI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E607690)
#define OEDHBDOLNNI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E607860)
#define OEDHBDOLNNI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E607AC0)
#define OEDHBDOLNNI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6073E0)

inline static constexpr unsigned int OEDHBDOLNNI_TypeDefinitionIndex = 14267;

	class OEDHBDOLNNI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OEDHBDOLNNI")->GetStaticField(0x56020);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEDHBDOLNNI")->GetStaticField(0x56028);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>**)UnitySDK::FromName("", "OEDHBDOLNNI")->GetStaticField(0x56030);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEDHBDOLNNI")->GetStaticField(0x12590);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEDHBDOLNNI")->GetStaticField(0x12591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDHBDOLNNI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>*(*)())((::PBYTE)hIl2Cpp + OEDHBDOLNNI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEDHBDOLNNI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>(*)())((::PBYTE)hIl2Cpp + OEDHBDOLNNI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OEDHBDOLNNI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEDHBDOLNNI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDHBDOLNNI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDHBDOLNNI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OEDHBDOLNNI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEDHBDOLNNI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OEDHBDOLNNI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*))((::PBYTE)hIl2Cpp + OEDHBDOLNNI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

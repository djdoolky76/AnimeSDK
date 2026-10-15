#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDiceBranchTagRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBOPDIKDACE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE8A550)
#define HBOPDIKDACE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE8AB20)
#define HBOPDIKDACE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE8A6C0)
#define HBOPDIKDACE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE89FC0)
#define HBOPDIKDACE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE8A250)
#define HBOPDIKDACE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE8A760)
#define HBOPDIKDACE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE8A7B0)
#define HBOPDIKDACE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE8A590)
#define HBOPDIKDACE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE8A1F0)
#define HBOPDIKDACE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE8A3C0)
#define HBOPDIKDACE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE8A620)
#define HBOPDIKDACE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE89F40)

inline static constexpr unsigned int HBOPDIKDACE_TypeDefinitionIndex = 14904;

	class HBOPDIKDACE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>**)UnitySDK::FromName("", "HBOPDIKDACE")->GetStaticField(0x1BAB0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HBOPDIKDACE")->GetStaticField(0x1BAB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HBOPDIKDACE")->GetStaticField(0x1BAC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HBOPDIKDACE")->GetStaticField(0x6390);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HBOPDIKDACE")->GetStaticField(0x6391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBOPDIKDACE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>*(*)())((::PBYTE)hIl2Cpp + HBOPDIKDACE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBOPDIKDACE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchTagRow*>(*)())((::PBYTE)hIl2Cpp + HBOPDIKDACE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousDiceBranchTagRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousDiceBranchTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HBOPDIKDACE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBOPDIKDACE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBOPDIKDACE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBOPDIKDACE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HBOPDIKDACE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBOPDIKDACE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HBOPDIKDACE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueNousDiceBranchTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceBranchTagRow*))((::PBYTE)hIl2Cpp + HBOPDIKDACE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

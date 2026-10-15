#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDiceBranchRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGEFCJFJJFB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D270760)
#define OGEFCJFJJFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D270CE0)
#define OGEFCJFJJFB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2708D0)
#define OGEFCJFJJFB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D270250)
#define OGEFCJFJJFB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2704E0)
#define OGEFCJFJJFB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D270970)
#define OGEFCJFJJFB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2709C0)
#define OGEFCJFJJFB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2707A0)
#define OGEFCJFJJFB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D270480)
#define OGEFCJFJJFB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D270610)
#define OGEFCJFJJFB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D270830)
#define OGEFCJFJJFB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2701D0)

inline static constexpr unsigned int OGEFCJFJJFB_TypeDefinitionIndex = 14900;

	class OGEFCJFJJFB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OGEFCJFJJFB")->GetStaticField(0x35120);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>**)UnitySDK::FromName("", "OGEFCJFJJFB")->GetStaticField(0x35128);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OGEFCJFJJFB")->GetStaticField(0x35130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OGEFCJFJJFB")->GetStaticField(0xB250);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OGEFCJFJJFB")->GetStaticField(0xB251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGEFCJFJJFB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>*(*)())((::PBYTE)hIl2Cpp + OGEFCJFJJFB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGEFCJFJJFB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceBranchRow*>(*)())((::PBYTE)hIl2Cpp + OGEFCJFJJFB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousDiceBranchRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousDiceBranchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OGEFCJFJJFB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGEFCJFJJFB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGEFCJFJJFB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGEFCJFJJFB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OGEFCJFJJFB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGEFCJFJJFB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OGEFCJFJJFB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueNousDiceBranchRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceBranchRow*))((::PBYTE)hIl2Cpp + OGEFCJFJJFB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

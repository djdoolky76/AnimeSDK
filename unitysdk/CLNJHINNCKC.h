#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCMainStoryBranchRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLNJHINNCKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB7E9E0)
#define CLNJHINNCKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7EFB0)
#define CLNJHINNCKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB7EB50)
#define CLNJHINNCKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB7E450)
#define CLNJHINNCKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB7E6E0)
#define CLNJHINNCKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB7EBF0)
#define CLNJHINNCKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB7EC40)
#define CLNJHINNCKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB7EA20)
#define CLNJHINNCKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB7E680)
#define CLNJHINNCKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB7E850)
#define CLNJHINNCKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB7EAB0)
#define CLNJHINNCKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB7E3D0)

inline static constexpr unsigned int CLNJHINNCKC_TypeDefinitionIndex = 14950;

	class CLNJHINNCKC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>**)UnitySDK::FromName("", "CLNJHINNCKC")->GetStaticField(0x355F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLNJHINNCKC")->GetStaticField(0x355F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CLNJHINNCKC")->GetStaticField(0x35600);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLNJHINNCKC")->GetStaticField(0xA710);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLNJHINNCKC")->GetStaticField(0xA711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLNJHINNCKC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>*(*)())((::PBYTE)hIl2Cpp + CLNJHINNCKC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLNJHINNCKC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>(*)())((::PBYTE)hIl2Cpp + CLNJHINNCKC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCMainStoryBranchRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCMainStoryBranchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLNJHINNCKC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLNJHINNCKC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLNJHINNCKC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLNJHINNCKC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLNJHINNCKC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLNJHINNCKC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CLNJHINNCKC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCMainStoryBranchRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCMainStoryBranchRow*))((::PBYTE)hIl2Cpp + CLNJHINNCKC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGuideQuestGoToWikiConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHPFEHIKCPC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2EC6E0)
#define PHPFEHIKCPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2ECCB0)
#define PHPFEHIKCPC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2EC850)
#define PHPFEHIKCPC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2EC150)
#define PHPFEHIKCPC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2EC3E0)
#define PHPFEHIKCPC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2EC8F0)
#define PHPFEHIKCPC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2EC940)
#define PHPFEHIKCPC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2EC720)
#define PHPFEHIKCPC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2EC380)
#define PHPFEHIKCPC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2EC550)
#define PHPFEHIKCPC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2EC7B0)
#define PHPFEHIKCPC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2EC0D0)

	class PHPFEHIKCPC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*>**)UnitySDK::FromName("", "PHPFEHIKCPC")->GetStaticField(0x43ED0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHPFEHIKCPC")->GetStaticField(0x43ED8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PHPFEHIKCPC")->GetStaticField(0x43EE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHPFEHIKCPC")->GetStaticField(0x103A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHPFEHIKCPC")->GetStaticField(0x103A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHPFEHIKCPC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PHPFEHIKCPC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHPFEHIKCPC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*>(*)())((::PBYTE)hIl2Cpp + PHPFEHIKCPC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHPFEHIKCPC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHPFEHIKCPC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHPFEHIKCPC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHPFEHIKCPC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHPFEHIKCPC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHPFEHIKCPC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHPFEHIKCPC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightGuideQuestGoToWikiConfigRow*))((::PBYTE)hIl2Cpp + PHPFEHIKCPC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

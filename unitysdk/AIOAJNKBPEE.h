#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialDialogueRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIOAJNKBPEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCCA1E0)
#define AIOAJNKBPEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCCA760)
#define AIOAJNKBPEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCCA350)
#define AIOAJNKBPEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCC9C90)
#define AIOAJNKBPEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCC9F20)
#define AIOAJNKBPEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCCA3F0)
#define AIOAJNKBPEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCCA440)
#define AIOAJNKBPEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCCA220)
#define AIOAJNKBPEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCC9EC0)
#define AIOAJNKBPEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCCA050)
#define AIOAJNKBPEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCCA2B0)
#define AIOAJNKBPEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCC9C10)

	class AIOAJNKBPEE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0x39010);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0x39018);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>**)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0x39020);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0xC2B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AIOAJNKBPEE")->GetStaticField(0xC2B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialDialogueRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOAJNKBPEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeartDialDialogueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialDialogueRow*))((::PBYTE)hIl2Cpp + AIOAJNKBPEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueDynamicDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIPLJPNOHKB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE24F10)
#define GIPLJPNOHKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE254E0)
#define GIPLJPNOHKB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE25080)
#define GIPLJPNOHKB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE24980)
#define GIPLJPNOHKB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE24C10)
#define GIPLJPNOHKB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE25120)
#define GIPLJPNOHKB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE25170)
#define GIPLJPNOHKB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE24F50)
#define GIPLJPNOHKB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE24BB0)
#define GIPLJPNOHKB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE24D80)
#define GIPLJPNOHKB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE24FE0)
#define GIPLJPNOHKB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE24900)

inline static constexpr unsigned int GIPLJPNOHKB_TypeDefinitionIndex = 14823;

	class GIPLJPNOHKB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x15DB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x15DB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>**)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x15DC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x4A80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x4A81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPLJPNOHKB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + GIPLJPNOHKB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIPLJPNOHKB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>(*)())((::PBYTE)hIl2Cpp + GIPLJPNOHKB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDialogueDynamicDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDialogueDynamicDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GIPLJPNOHKB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIPLJPNOHKB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPLJPNOHKB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPLJPNOHKB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GIPLJPNOHKB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPLJPNOHKB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GIPLJPNOHKB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDialogueDynamicDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDialogueDynamicDisplayRow*))((::PBYTE)hIl2Cpp + GIPLJPNOHKB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

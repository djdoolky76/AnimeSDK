#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueDynamicDisplayRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIPLJPNOHKB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE53010)
#define GIPLJPNOHKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE535E0)
#define GIPLJPNOHKB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE53180)
#define GIPLJPNOHKB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE52A80)
#define GIPLJPNOHKB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE52D10)
#define GIPLJPNOHKB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE53220)
#define GIPLJPNOHKB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE53270)
#define GIPLJPNOHKB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE53050)
#define GIPLJPNOHKB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE52CB0)
#define GIPLJPNOHKB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE52E80)
#define GIPLJPNOHKB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE530E0)
#define GIPLJPNOHKB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE52A00)

inline static constexpr unsigned int GIPLJPNOHKB_TypeDefinitionIndex = 14823;

	class GIPLJPNOHKB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueDynamicDisplayRow*>**)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x17C00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x17C08);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x17C10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x58B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIPLJPNOHKB")->GetStaticField(0x58B1);
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

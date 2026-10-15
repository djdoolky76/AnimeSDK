#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousStoryDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBFBNHJPHJA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEAF870)
#define IBFBNHJPHJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAFE40)
#define IBFBNHJPHJA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEAF9E0)
#define IBFBNHJPHJA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEAF2E0)
#define IBFBNHJPHJA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEAF570)
#define IBFBNHJPHJA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEAFA80)
#define IBFBNHJPHJA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEAFAD0)
#define IBFBNHJPHJA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEAF8B0)
#define IBFBNHJPHJA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEAF510)
#define IBFBNHJPHJA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEAF6E0)
#define IBFBNHJPHJA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEAF940)
#define IBFBNHJPHJA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEAF260)

inline static constexpr unsigned int IBFBNHJPHJA_TypeDefinitionIndex = 14916;

	class IBFBNHJPHJA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IBFBNHJPHJA")->GetStaticField(0x1F090);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IBFBNHJPHJA")->GetStaticField(0x1F098);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryDisplayRow*>**)UnitySDK::FromName("", "IBFBNHJPHJA")->GetStaticField(0x1F0A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IBFBNHJPHJA")->GetStaticField(0x6FF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IBFBNHJPHJA")->GetStaticField(0x6FF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFBNHJPHJA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + IBFBNHJPHJA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBFBNHJPHJA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryDisplayRow*>(*)())((::PBYTE)hIl2Cpp + IBFBNHJPHJA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousStoryDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousStoryDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IBFBNHJPHJA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBFBNHJPHJA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFBNHJPHJA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFBNHJPHJA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IBFBNHJPHJA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBFBNHJPHJA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IBFBNHJPHJA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueNousStoryDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousStoryDisplayRow*))((::PBYTE)hIl2Cpp + IBFBNHJPHJA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotMailGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONFIJPOGCJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D273D50)
#define ONFIJPOGCJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D274930)
#define ONFIJPOGCJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2740F0)
#define ONFIJPOGCJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D273D90)
#define ONFIJPOGCJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D274630)
#define ONFIJPOGCJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D274190)
#define ONFIJPOGCJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2741E0)
#define ONFIJPOGCJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D273FC0)
#define ONFIJPOGCJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2745D0)
#define ONFIJPOGCJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2747A0)
#define ONFIJPOGCJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D274050)
#define ONFIJPOGCJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D274550)

inline static constexpr unsigned int ONFIJPOGCJF_TypeDefinitionIndex = 15269;

	class ONFIJPOGCJF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ONFIJPOGCJF")->GetStaticField(0x4A3E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailGroupRow*>**)UnitySDK::FromName("", "ONFIJPOGCJF")->GetStaticField(0x4A3E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONFIJPOGCJF")->GetStaticField(0x4A3F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONFIJPOGCJF")->GetStaticField(0x111A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONFIJPOGCJF")->GetStaticField(0x111A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONFIJPOGCJF_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONFIJPOGCJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONFIJPOGCJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONFIJPOGCJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONFIJPOGCJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONFIJPOGCJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONFIJPOGCJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotMailGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotMailGroupRow*))((::PBYTE)hIl2Cpp + ONFIJPOGCJF_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailGroupRow*>*(*)())((::PBYTE)hIl2Cpp + ONFIJPOGCJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONFIJPOGCJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailGroupRow*>(*)())((::PBYTE)hIl2Cpp + ONFIJPOGCJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotMailGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotMailGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ONFIJPOGCJF_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

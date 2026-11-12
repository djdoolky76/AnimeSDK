#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightClaraLinkRelationConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CIHCCDHGMNE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EDD3180)
#define CIHCCDHGMNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDD3750)
#define CIHCCDHGMNE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EDD32F0)
#define CIHCCDHGMNE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EDD2BF0)
#define CIHCCDHGMNE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EDD2E80)
#define CIHCCDHGMNE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EDD3390)
#define CIHCCDHGMNE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EDD33E0)
#define CIHCCDHGMNE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EDD31C0)
#define CIHCCDHGMNE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EDD2E20)
#define CIHCCDHGMNE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EDD2FF0)
#define CIHCCDHGMNE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EDD3250)
#define CIHCCDHGMNE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EDD2B70)

inline static constexpr unsigned int CIHCCDHGMNE_TypeDefinitionIndex = 13867;

	class CIHCCDHGMNE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraLinkRelationConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraLinkRelationConfigRow*>**)UnitySDK::FromName("", "CIHCCDHGMNE")->GetStaticField(0x33D70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CIHCCDHGMNE")->GetStaticField(0x33D78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CIHCCDHGMNE")->GetStaticField(0x33D80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CIHCCDHGMNE")->GetStaticField(0xAEE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CIHCCDHGMNE")->GetStaticField(0xAEE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIHCCDHGMNE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraLinkRelationConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraLinkRelationConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CIHCCDHGMNE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CIHCCDHGMNE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraLinkRelationConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraLinkRelationConfigRow*>(*)())((::PBYTE)hIl2Cpp + CIHCCDHGMNE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightClaraLinkRelationConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightClaraLinkRelationConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CIHCCDHGMNE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CIHCCDHGMNE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIHCCDHGMNE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIHCCDHGMNE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CIHCCDHGMNE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CIHCCDHGMNE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CIHCCDHGMNE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightClaraLinkRelationConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightClaraLinkRelationConfigRow*))((::PBYTE)hIl2Cpp + CIHCCDHGMNE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

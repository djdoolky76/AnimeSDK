#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestTreeTabRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHNCOIHOOKL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCC8340)
#define AHNCOIHOOKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC88C0)
#define AHNCOIHOOKL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCC84B0)
#define AHNCOIHOOKL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCC7DF0)
#define AHNCOIHOOKL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCC8080)
#define AHNCOIHOOKL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCC8550)
#define AHNCOIHOOKL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCC85A0)
#define AHNCOIHOOKL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCC8380)
#define AHNCOIHOOKL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCC8020)
#define AHNCOIHOOKL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCC81B0)
#define AHNCOIHOOKL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCC8410)
#define AHNCOIHOOKL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCC7D70)

inline static constexpr unsigned int AHNCOIHOOKL_TypeDefinitionIndex = 11734;

	class AHNCOIHOOKL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>**)UnitySDK::FromName("", "AHNCOIHOOKL")->GetStaticField(0x38E10);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AHNCOIHOOKL")->GetStaticField(0x38E18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AHNCOIHOOKL")->GetStaticField(0x38E20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AHNCOIHOOKL")->GetStaticField(0xC210);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AHNCOIHOOKL")->GetStaticField(0xC211);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNCOIHOOKL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>*(*)())((::PBYTE)hIl2Cpp + AHNCOIHOOKL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHNCOIHOOKL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestTreeTabRow*>(*)())((::PBYTE)hIl2Cpp + AHNCOIHOOKL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveQuestTreeTabRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveQuestTreeTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AHNCOIHOOKL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHNCOIHOOKL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNCOIHOOKL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHNCOIHOOKL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AHNCOIHOOKL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AHNCOIHOOKL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AHNCOIHOOKL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveQuestTreeTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestTreeTabRow*))((::PBYTE)hIl2Cpp + AHNCOIHOOKL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

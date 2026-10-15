#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCharacterLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGIDENJBFLJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D062250)
#define KGIDENJBFLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D062EA0)
#define KGIDENJBFLJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0625F0)
#define KGIDENJBFLJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D062290)
#define KGIDENJBFLJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D062B60)
#define KGIDENJBFLJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D062690)
#define KGIDENJBFLJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0626E0)
#define KGIDENJBFLJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0624C0)
#define KGIDENJBFLJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D062B00)
#define KGIDENJBFLJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D062CD0)
#define KGIDENJBFLJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D062550)
#define KGIDENJBFLJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D062A80)

inline static constexpr unsigned int KGIDENJBFLJ_TypeDefinitionIndex = 15257;

	class KGIDENJBFLJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KGIDENJBFLJ")->GetStaticField(0x34750);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KGIDENJBFLJ")->GetStaticField(0x34758);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>**)UnitySDK::FromName("", "KGIDENJBFLJ")->GetStaticField(0x34760);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KGIDENJBFLJ")->GetStaticField(0xAA20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KGIDENJBFLJ")->GetStaticField(0xAA21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGIDENJBFLJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KGIDENJBFLJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGIDENJBFLJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGIDENJBFLJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KGIDENJBFLJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KGIDENJBFLJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KGIDENJBFLJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookCharacterLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookCharacterLevelRow*))((::PBYTE)hIl2Cpp + KGIDENJBFLJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>*(*)())((::PBYTE)hIl2Cpp + KGIDENJBFLJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KGIDENJBFLJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>(*)())((::PBYTE)hIl2Cpp + KGIDENJBFLJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookCharacterLevelRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TarotBookCharacterLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KGIDENJBFLJ_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};

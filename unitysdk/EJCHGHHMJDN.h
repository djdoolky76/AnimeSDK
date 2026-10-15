#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameModeGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJCHGHHMJDN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD5F390)
#define EJCHGHHMJDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5F960)
#define EJCHGHHMJDN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD5F500)
#define EJCHGHHMJDN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5EE00)
#define EJCHGHHMJDN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5F090)
#define EJCHGHHMJDN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD5F5A0)
#define EJCHGHHMJDN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD5F5F0)
#define EJCHGHHMJDN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD5F3D0)
#define EJCHGHHMJDN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5F030)
#define EJCHGHHMJDN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5F200)
#define EJCHGHHMJDN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD5F460)
#define EJCHGHHMJDN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5ED80)

inline static constexpr unsigned int EJCHGHHMJDN_TypeDefinitionIndex = 12887;

	class EJCHGHHMJDN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EJCHGHHMJDN")->GetStaticField(0x4DFA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>**)UnitySDK::FromName("", "EJCHGHHMJDN")->GetStaticField(0x4DFA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EJCHGHHMJDN")->GetStaticField(0x4DFB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EJCHGHHMJDN")->GetStaticField(0x11D20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EJCHGHHMJDN")->GetStaticField(0x11D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJCHGHHMJDN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>*(*)())((::PBYTE)hIl2Cpp + EJCHGHHMJDN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJCHGHHMJDN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>(*)())((::PBYTE)hIl2Cpp + EJCHGHHMJDN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GameModeGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameModeGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EJCHGHHMJDN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJCHGHHMJDN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJCHGHHMJDN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJCHGHHMJDN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EJCHGHHMJDN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJCHGHHMJDN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EJCHGHHMJDN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GameModeGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameModeGroupRow*))((::PBYTE)hIl2Cpp + EJCHGHHMJDN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

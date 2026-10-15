#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAeonListConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OINCDKCGBML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D258A50)
#define OINCDKCGBML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D258FD0)
#define OINCDKCGBML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D258BC0)
#define OINCDKCGBML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D258500)
#define OINCDKCGBML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D258790)
#define OINCDKCGBML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D258C60)
#define OINCDKCGBML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D258CB0)
#define OINCDKCGBML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D258A90)
#define OINCDKCGBML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D258730)
#define OINCDKCGBML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2588C0)
#define OINCDKCGBML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D258B20)
#define OINCDKCGBML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D258480)

inline static constexpr unsigned int OINCDKCGBML_TypeDefinitionIndex = 14846;

	class OINCDKCGBML : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OINCDKCGBML")->GetStaticField(0x47890);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>**)UnitySDK::FromName("", "OINCDKCGBML")->GetStaticField(0x47898);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OINCDKCGBML")->GetStaticField(0x478A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OINCDKCGBML")->GetStaticField(0x10B90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OINCDKCGBML")->GetStaticField(0x10B91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINCDKCGBML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OINCDKCGBML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OINCDKCGBML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>(*)())((::PBYTE)hIl2Cpp + OINCDKCGBML_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueAeonListConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueAeonListConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OINCDKCGBML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OINCDKCGBML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINCDKCGBML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINCDKCGBML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OINCDKCGBML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OINCDKCGBML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OINCDKCGBML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueAeonListConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueAeonListConfigRow*))((::PBYTE)hIl2Cpp + OINCDKCGBML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicScoreRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHDCFEHCBKA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCC3CA0)
#define AHDCFEHCBKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC42D0)
#define AHDCFEHCBKA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCC3E10)
#define AHDCFEHCBKA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCC3690)
#define AHDCFEHCBKA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCC3920)
#define AHDCFEHCBKA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCC3EB0)
#define AHDCFEHCBKA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCC3F00)
#define AHDCFEHCBKA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCC3CE0)
#define AHDCFEHCBKA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCC38C0)
#define AHDCFEHCBKA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCC3A90)
#define AHDCFEHCBKA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCC3D70)
#define AHDCFEHCBKA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCC3610)

	class AHDCFEHCBKA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>**)UnitySDK::FromName("", "AHDCFEHCBKA")->GetStaticField(0x38830);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AHDCFEHCBKA")->GetStaticField(0x38838);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AHDCFEHCBKA")->GetStaticField(0x38840);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AHDCFEHCBKA")->GetStaticField(0xC0E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AHDCFEHCBKA")->GetStaticField(0xC0E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHDCFEHCBKA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>*(*)())((::PBYTE)hIl2Cpp + AHDCFEHCBKA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHDCFEHCBKA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>(*)())((::PBYTE)hIl2Cpp + AHDCFEHCBKA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicScoreRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::RogueMagicScoreRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AHDCFEHCBKA_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHDCFEHCBKA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHDCFEHCBKA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHDCFEHCBKA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AHDCFEHCBKA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AHDCFEHCBKA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AHDCFEHCBKA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicScoreRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicScoreRow*))((::PBYTE)hIl2Cpp + AHDCFEHCBKA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEnchantLevelRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCOPOELIDBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDD86E0)
#define FCOPOELIDBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD8CE0)
#define FCOPOELIDBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDD8850)
#define FCOPOELIDBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDD8110)
#define FCOPOELIDBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDD83A0)
#define FCOPOELIDBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDD88F0)
#define FCOPOELIDBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDD8940)
#define FCOPOELIDBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDD8720)
#define FCOPOELIDBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDD8340)
#define FCOPOELIDBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDD8510)
#define FCOPOELIDBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDD87B0)
#define FCOPOELIDBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDD8090)

	class FCOPOELIDBD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCOPOELIDBD")->GetStaticField(0x10560);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantLevelRow*>**)UnitySDK::FromName("", "FCOPOELIDBD")->GetStaticField(0x10568);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FCOPOELIDBD")->GetStaticField(0x10570);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCOPOELIDBD")->GetStaticField(0x3740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCOPOELIDBD")->GetStaticField(0x3741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOPOELIDBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantLevelRow*>*(*)())((::PBYTE)hIl2Cpp + FCOPOELIDBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCOPOELIDBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantLevelRow*>(*)())((::PBYTE)hIl2Cpp + FCOPOELIDBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingEnchantLevelRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChenLingEnchantLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FCOPOELIDBD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCOPOELIDBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOPOELIDBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOPOELIDBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCOPOELIDBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCOPOELIDBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCOPOELIDBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingEnchantLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingEnchantLevelRow*))((::PBYTE)hIl2Cpp + FCOPOELIDBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

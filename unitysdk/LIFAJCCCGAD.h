#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIFAJCCCGAD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F7090)
#define LIFAJCCCGAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F7610)
#define LIFAJCCCGAD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F7200)
#define LIFAJCCCGAD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F6B40)
#define LIFAJCCCGAD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F6DD0)
#define LIFAJCCCGAD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F72A0)
#define LIFAJCCCGAD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F72F0)
#define LIFAJCCCGAD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F70D0)
#define LIFAJCCCGAD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F6D70)
#define LIFAJCCCGAD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F6F40)
#define LIFAJCCCGAD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F7160)
#define LIFAJCCCGAD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F6AC0)

	class LIFAJCCCGAD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIFAJCCCGAD")->GetStaticField(0x3DF40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleEffectRow*>**)UnitySDK::FromName("", "LIFAJCCCGAD")->GetStaticField(0x3DF48);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LIFAJCCCGAD")->GetStaticField(0x3DF50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIFAJCCCGAD")->GetStaticField(0xD410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIFAJCCCGAD")->GetStaticField(0xD411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIFAJCCCGAD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleEffectRow*>*(*)())((::PBYTE)hIl2Cpp + LIFAJCCCGAD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIFAJCCCGAD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleEffectRow*>(*)())((::PBYTE)hIl2Cpp + LIFAJCCCGAD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMiracleEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMiracleEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIFAJCCCGAD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIFAJCCCGAD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIFAJCCCGAD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIFAJCCCGAD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIFAJCCCGAD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIFAJCCCGAD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIFAJCCCGAD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMiracleEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + LIFAJCCCGAD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

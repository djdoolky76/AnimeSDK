#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleSwitchConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGIIIDBBGLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF0DAB0)
#define IGIIIDBBGLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF0E080)
#define IGIIIDBBGLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF0DC20)
#define IGIIIDBBGLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF0D520)
#define IGIIIDBBGLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF0D7B0)
#define IGIIIDBBGLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF0DCC0)
#define IGIIIDBBGLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF0DD10)
#define IGIIIDBBGLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF0DAF0)
#define IGIIIDBBGLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF0D750)
#define IGIIIDBBGLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF0D920)
#define IGIIIDBBGLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF0DB80)
#define IGIIIDBBGLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF0D4A0)

	class IGIIIDBBGLG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IGIIIDBBGLG")->GetStaticField(0x235C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>**)UnitySDK::FromName("", "IGIIIDBBGLG")->GetStaticField(0x235C8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IGIIIDBBGLG")->GetStaticField(0x235D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IGIIIDBBGLG")->GetStaticField(0x7DA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IGIIIDBBGLG")->GetStaticField(0x7DA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGIIIDBBGLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IGIIIDBBGLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGIIIDBBGLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>(*)())((::PBYTE)hIl2Cpp + IGIIIDBBGLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleSwitchConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRoleSwitchConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IGIIIDBBGLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGIIIDBBGLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGIIIDBBGLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGIIIDBBGLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IGIIIDBBGLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGIIIDBBGLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IGIIIDBBGLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleSwitchConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleSwitchConfigRow*))((::PBYTE)hIl2Cpp + IGIIIDBBGLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournTitanTalentRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAAAILGEAKP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D247E00)
#define OAAAILGEAKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D248380)
#define OAAAILGEAKP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D247F70)
#define OAAAILGEAKP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2478F0)
#define OAAAILGEAKP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D247B80)
#define OAAAILGEAKP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D248010)
#define OAAAILGEAKP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D248060)
#define OAAAILGEAKP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D247E40)
#define OAAAILGEAKP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D247B20)
#define OAAAILGEAKP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D247CB0)
#define OAAAILGEAKP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D247ED0)
#define OAAAILGEAKP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D247870)

	class OAAAILGEAKP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OAAAILGEAKP")->GetStaticField(0x31820);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OAAAILGEAKP")->GetStaticField(0x31828);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTalentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTalentRow*>**)UnitySDK::FromName("", "OAAAILGEAKP")->GetStaticField(0x31830);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OAAAILGEAKP")->GetStaticField(0xA690);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OAAAILGEAKP")->GetStaticField(0xA691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAAAILGEAKP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTalentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTalentRow*>*(*)())((::PBYTE)hIl2Cpp + OAAAILGEAKP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAAAILGEAKP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTalentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTalentRow*>(*)())((::PBYTE)hIl2Cpp + OAAAILGEAKP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournTitanTalentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournTitanTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OAAAILGEAKP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAAAILGEAKP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAAAILGEAKP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAAAILGEAKP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OAAAILGEAKP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAAAILGEAKP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OAAAILGEAKP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournTitanTalentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournTitanTalentRow*))((::PBYTE)hIl2Cpp + OAAAILGEAKP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

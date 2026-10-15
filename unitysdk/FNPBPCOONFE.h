#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEquipRecommendRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNPBPCOONFE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE120C0)
#define FNPBPCOONFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE12690)
#define FNPBPCOONFE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE12230)
#define FNPBPCOONFE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE11B30)
#define FNPBPCOONFE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE11DC0)
#define FNPBPCOONFE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE122D0)
#define FNPBPCOONFE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE12320)
#define FNPBPCOONFE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE12100)
#define FNPBPCOONFE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE11D60)
#define FNPBPCOONFE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE11F30)
#define FNPBPCOONFE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE12190)
#define FNPBPCOONFE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE11AB0)

	class FNPBPCOONFE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>**)UnitySDK::FromName("", "FNPBPCOONFE")->GetStaticField(0x15050);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FNPBPCOONFE")->GetStaticField(0x15058);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNPBPCOONFE")->GetStaticField(0x15060);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNPBPCOONFE")->GetStaticField(0x50B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNPBPCOONFE")->GetStaticField(0x50B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNPBPCOONFE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>*(*)())((::PBYTE)hIl2Cpp + FNPBPCOONFE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNPBPCOONFE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>(*)())((::PBYTE)hIl2Cpp + FNPBPCOONFE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarEquipRecommendRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarEquipRecommendRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FNPBPCOONFE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNPBPCOONFE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNPBPCOONFE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNPBPCOONFE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FNPBPCOONFE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNPBPCOONFE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNPBPCOONFE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarEquipRecommendRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarEquipRecommendRow*))((::PBYTE)hIl2Cpp + FNPBPCOONFE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

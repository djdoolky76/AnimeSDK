#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfferingLevelUnlockConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CELFDPLMKBJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC09490)
#define CELFDPLMKBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC09A60)
#define CELFDPLMKBJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC09600)
#define CELFDPLMKBJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC08F00)
#define CELFDPLMKBJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC09190)
#define CELFDPLMKBJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC096A0)
#define CELFDPLMKBJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC096F0)
#define CELFDPLMKBJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC094D0)
#define CELFDPLMKBJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC09130)
#define CELFDPLMKBJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC09300)
#define CELFDPLMKBJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC09560)
#define CELFDPLMKBJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC08E80)

inline static constexpr unsigned int CELFDPLMKBJ_TypeDefinitionIndex = 14296;

	class CELFDPLMKBJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CELFDPLMKBJ")->GetStaticField(0x42C10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelUnlockConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelUnlockConfigRow*>**)UnitySDK::FromName("", "CELFDPLMKBJ")->GetStaticField(0x42C18);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CELFDPLMKBJ")->GetStaticField(0x42C20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CELFDPLMKBJ")->GetStaticField(0x100D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CELFDPLMKBJ")->GetStaticField(0x100D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CELFDPLMKBJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelUnlockConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelUnlockConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CELFDPLMKBJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CELFDPLMKBJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelUnlockConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingLevelUnlockConfigRow*>(*)())((::PBYTE)hIl2Cpp + CELFDPLMKBJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::OfferingLevelUnlockConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::OfferingLevelUnlockConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CELFDPLMKBJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CELFDPLMKBJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CELFDPLMKBJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CELFDPLMKBJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CELFDPLMKBJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CELFDPLMKBJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CELFDPLMKBJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::OfferingLevelUnlockConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::OfferingLevelUnlockConfigRow*))((::PBYTE)hIl2Cpp + CELFDPLMKBJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

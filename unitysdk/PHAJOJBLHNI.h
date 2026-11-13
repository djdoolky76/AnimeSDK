#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamBuildGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHAJOJBLHNI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E722070)
#define PHAJOJBLHNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E722C50)
#define PHAJOJBLHNI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E722410)
#define PHAJOJBLHNI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7220B0)
#define PHAJOJBLHNI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E722950)
#define PHAJOJBLHNI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7224B0)
#define PHAJOJBLHNI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E722500)
#define PHAJOJBLHNI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7222E0)
#define PHAJOJBLHNI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7228F0)
#define PHAJOJBLHNI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E722AC0)
#define PHAJOJBLHNI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E722370)
#define PHAJOJBLHNI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E722870)

inline static constexpr unsigned int PHAJOJBLHNI_TypeDefinitionIndex = 15432;

	class PHAJOJBLHNI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>**)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0x3F810);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0x3F818);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0x3F820);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0xCBE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0xCBE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHAJOJBLHNI_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHAJOJBLHNI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHAJOJBLHNI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHAJOJBLHNI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHAJOJBLHNI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHAJOJBLHNI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHAJOJBLHNI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TeamBuildGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TeamBuildGroupConfigRow*))((::PBYTE)hIl2Cpp + PHAJOJBLHNI_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PHAJOJBLHNI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHAJOJBLHNI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + PHAJOJBLHNI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TeamBuildGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TeamBuildGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHAJOJBLHNI_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

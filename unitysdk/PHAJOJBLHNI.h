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

#define PHAJOJBLHNI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2B6690)
#define PHAJOJBLHNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2B7270)
#define PHAJOJBLHNI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2B6A30)
#define PHAJOJBLHNI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2B66D0)
#define PHAJOJBLHNI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2B6F70)
#define PHAJOJBLHNI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2B6AD0)
#define PHAJOJBLHNI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2B6B20)
#define PHAJOJBLHNI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2B6900)
#define PHAJOJBLHNI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2B6F10)
#define PHAJOJBLHNI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2B70E0)
#define PHAJOJBLHNI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2B6990)
#define PHAJOJBLHNI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2B6E90)

inline static constexpr unsigned int PHAJOJBLHNI_TypeDefinitionIndex = 15276;

	class PHAJOJBLHNI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0x4EE00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>**)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0x4EE08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0x4EE10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0x11F70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHAJOJBLHNI")->GetStaticField(0x11F71);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNENDGPPGIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0ECBF0)
#define LNENDGPPGIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0ED1C0)
#define LNENDGPPGIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0ECD60)
#define LNENDGPPGIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0EC660)
#define LNENDGPPGIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0EC8F0)
#define LNENDGPPGIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0ECE00)
#define LNENDGPPGIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0ECE50)
#define LNENDGPPGIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0ECC30)
#define LNENDGPPGIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0EC890)
#define LNENDGPPGIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0ECA60)
#define LNENDGPPGIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0ECCC0)
#define LNENDGPPGIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0EC5E0)

inline static constexpr unsigned int LNENDGPPGIE_TypeDefinitionIndex = 11864;

	class LNENDGPPGIE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>**)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0x3EE90);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0x3EE98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0x3EEA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0xED30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LNENDGPPGIE")->GetStaticField(0xED31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleMatchLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNENDGPPGIE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNENDGPPGIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LNENDGPPGIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNENDGPPGIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LNENDGPPGIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleMatchLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleMatchLevelConfigRow*))((::PBYTE)hIl2Cpp + LNENDGPPGIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

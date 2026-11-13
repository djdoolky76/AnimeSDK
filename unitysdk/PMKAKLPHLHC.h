#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournUseBuffTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMKAKLPHLHC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E7A9440)
#define PMKAKLPHLHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A99C0)
#define PMKAKLPHLHC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7A95B0)
#define PMKAKLPHLHC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7A8EF0)
#define PMKAKLPHLHC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E7A9180)
#define PMKAKLPHLHC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7A9650)
#define PMKAKLPHLHC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7A96A0)
#define PMKAKLPHLHC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7A9480)
#define PMKAKLPHLHC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7A9120)
#define PMKAKLPHLHC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7A92F0)
#define PMKAKLPHLHC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E7A9510)
#define PMKAKLPHLHC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E7A8E70)

inline static constexpr unsigned int PMKAKLPHLHC_TypeDefinitionIndex = 15176;

	class PMKAKLPHLHC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>**)UnitySDK::FromName("", "PMKAKLPHLHC")->GetStaticField(0x42280);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMKAKLPHLHC")->GetStaticField(0x42288);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PMKAKLPHLHC")->GetStaticField(0x42290);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMKAKLPHLHC")->GetStaticField(0xD480);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMKAKLPHLHC")->GetStaticField(0xD481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMKAKLPHLHC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>*(*)())((::PBYTE)hIl2Cpp + PMKAKLPHLHC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMKAKLPHLHC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + PMKAKLPHLHC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournUseBuffTypeRow* LMBKNCAIDLC(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::RPG::GameCore::RogueTournUseBuffTypeRow*(*)(::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + PMKAKLPHLHC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMKAKLPHLHC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMKAKLPHLHC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMKAKLPHLHC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMKAKLPHLHC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMKAKLPHLHC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMKAKLPHLHC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournUseBuffTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournUseBuffTypeRow*))((::PBYTE)hIl2Cpp + PMKAKLPHLHC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

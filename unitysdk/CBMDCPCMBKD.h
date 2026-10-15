#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournDifficultyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBMDCPCMBKD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9D7F30)
#define CBMDCPCMBKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9D8500)
#define CBMDCPCMBKD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9D80A0)
#define CBMDCPCMBKD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9D79A0)
#define CBMDCPCMBKD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9D7C30)
#define CBMDCPCMBKD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9D8140)
#define CBMDCPCMBKD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9D8190)
#define CBMDCPCMBKD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9D7F70)
#define CBMDCPCMBKD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9D7BD0)
#define CBMDCPCMBKD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9D7DA0)
#define CBMDCPCMBKD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9D8000)
#define CBMDCPCMBKD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9D7920)

inline static constexpr unsigned int CBMDCPCMBKD_TypeDefinitionIndex = 14955;

	class CBMDCPCMBKD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBMDCPCMBKD")->GetStaticField(0x38E70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>**)UnitySDK::FromName("", "CBMDCPCMBKD")->GetStaticField(0x38E78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CBMDCPCMBKD")->GetStaticField(0x38E80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CBMDCPCMBKD")->GetStaticField(0xB7E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CBMDCPCMBKD")->GetStaticField(0xB7E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBMDCPCMBKD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>*(*)())((::PBYTE)hIl2Cpp + CBMDCPCMBKD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBMDCPCMBKD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>(*)())((::PBYTE)hIl2Cpp + CBMDCPCMBKD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournDifficultyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournDifficultyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CBMDCPCMBKD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBMDCPCMBKD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBMDCPCMBKD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBMDCPCMBKD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CBMDCPCMBKD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CBMDCPCMBKD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CBMDCPCMBKD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournDifficultyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournDifficultyRow*))((::PBYTE)hIl2Cpp + CBMDCPCMBKD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

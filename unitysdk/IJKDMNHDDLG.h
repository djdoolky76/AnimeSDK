#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpotLightConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJKDMNHDDLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0xC98E690)
#define IJKDMNHDDLG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC98EC60)
#define IJKDMNHDDLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0xC98E800)
#define IJKDMNHDDLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0xC98E100)
#define IJKDMNHDDLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0xC98E390)
#define IJKDMNHDDLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0xC98E8A0)
#define IJKDMNHDDLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0xC98E8F0)
#define IJKDMNHDDLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0xC98E6D0)
#define IJKDMNHDDLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0xC98E330)
#define IJKDMNHDDLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xC98E500)
#define IJKDMNHDDLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0xC98E760)
#define IJKDMNHDDLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0xC98E080)

inline static constexpr unsigned int IJKDMNHDDLG_TypeDefinitionIndex = 13718;

	class IJKDMNHDDLG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IJKDMNHDDLG")->GetStaticField(0x20A40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightConfigRow*>**)UnitySDK::FromName("", "IJKDMNHDDLG")->GetStaticField(0x20A48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IJKDMNHDDLG")->GetStaticField(0x20A50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IJKDMNHDDLG")->GetStaticField(0x7010);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IJKDMNHDDLG")->GetStaticField(0x7011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKDMNHDDLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IJKDMNHDDLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IJKDMNHDDLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpotLightConfigRow*>(*)())((::PBYTE)hIl2Cpp + IJKDMNHDDLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSpotLightConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSpotLightConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IJKDMNHDDLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IJKDMNHDDLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKDMNHDDLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKDMNHDDLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IJKDMNHDDLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJKDMNHDDLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IJKDMNHDDLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSpotLightConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSpotLightConfigRow*))((::PBYTE)hIl2Cpp + IJKDMNHDDLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

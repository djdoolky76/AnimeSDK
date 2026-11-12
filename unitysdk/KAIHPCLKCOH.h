#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCampSeasonConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAIHPCLKCOH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E24E9B0)
#define KAIHPCLKCOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24EFB0)
#define KAIHPCLKCOH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E24EB20)
#define KAIHPCLKCOH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E24E3E0)
#define KAIHPCLKCOH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E24E670)
#define KAIHPCLKCOH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E24EBC0)
#define KAIHPCLKCOH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E24EC10)
#define KAIHPCLKCOH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E24E9F0)
#define KAIHPCLKCOH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E24E610)
#define KAIHPCLKCOH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E24E7E0)
#define KAIHPCLKCOH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E24EA80)
#define KAIHPCLKCOH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E24E360)

inline static constexpr unsigned int KAIHPCLKCOH_TypeDefinitionIndex = 13750;

	class KAIHPCLKCOH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KAIHPCLKCOH")->GetStaticField(0x2A2E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KAIHPCLKCOH")->GetStaticField(0x2A2E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampSeasonConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampSeasonConfigRow*>**)UnitySDK::FromName("", "KAIHPCLKCOH")->GetStaticField(0x2A2F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KAIHPCLKCOH")->GetStaticField(0x8800);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KAIHPCLKCOH")->GetStaticField(0x8801);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAIHPCLKCOH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampSeasonConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampSeasonConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KAIHPCLKCOH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KAIHPCLKCOH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampSeasonConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampSeasonConfigRow*>(*)())((::PBYTE)hIl2Cpp + KAIHPCLKCOH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightCampSeasonConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightCampSeasonConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KAIHPCLKCOH_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KAIHPCLKCOH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAIHPCLKCOH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAIHPCLKCOH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KAIHPCLKCOH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KAIHPCLKCOH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KAIHPCLKCOH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightCampSeasonConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCampSeasonConfigRow*))((::PBYTE)hIl2Cpp + KAIHPCLKCOH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

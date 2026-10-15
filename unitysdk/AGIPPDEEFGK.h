#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitGameRefConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGIPPDEEFGK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC90B40)
#define AGIPPDEEFGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC91110)
#define AGIPPDEEFGK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC90CB0)
#define AGIPPDEEFGK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC905B0)
#define AGIPPDEEFGK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC90840)
#define AGIPPDEEFGK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC90D50)
#define AGIPPDEEFGK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC90DA0)
#define AGIPPDEEFGK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC90B80)
#define AGIPPDEEFGK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC907E0)
#define AGIPPDEEFGK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC909B0)
#define AGIPPDEEFGK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC90C10)
#define AGIPPDEEFGK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC90530)

inline static constexpr unsigned int AGIPPDEEFGK_TypeDefinitionIndex = 13698;

	class AGIPPDEEFGK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>**)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0x3F2A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0x3F2A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0x3F2B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0xEE10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0xEE11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitGameRefConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitGameRefConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitGameRefConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitGameRefConfigRow*))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

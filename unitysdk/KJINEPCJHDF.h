#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCMonsterMarkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJINEPCJHDF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D097C30)
#define KJINEPCJHDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D098200)
#define KJINEPCJHDF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D097DA0)
#define KJINEPCJHDF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0976A0)
#define KJINEPCJHDF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D097930)
#define KJINEPCJHDF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D097E40)
#define KJINEPCJHDF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D097E90)
#define KJINEPCJHDF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D097C70)
#define KJINEPCJHDF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0978D0)
#define KJINEPCJHDF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D097AA0)
#define KJINEPCJHDF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D097D00)
#define KJINEPCJHDF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D097620)

inline static constexpr unsigned int KJINEPCJHDF_TypeDefinitionIndex = 14289;

	class KJINEPCJHDF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterMarkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterMarkRow*>**)UnitySDK::FromName("", "KJINEPCJHDF")->GetStaticField(0x35250);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KJINEPCJHDF")->GetStaticField(0x35258);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KJINEPCJHDF")->GetStaticField(0x35260);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KJINEPCJHDF")->GetStaticField(0xB2B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KJINEPCJHDF")->GetStaticField(0xB2B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJINEPCJHDF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterMarkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterMarkRow*>*(*)())((::PBYTE)hIl2Cpp + KJINEPCJHDF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KJINEPCJHDF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterMarkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCMonsterMarkRow*>(*)())((::PBYTE)hIl2Cpp + KJINEPCJHDF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::NPCMonsterMarkRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::NPCMonsterMarkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KJINEPCJHDF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KJINEPCJHDF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJINEPCJHDF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJINEPCJHDF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KJINEPCJHDF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KJINEPCJHDF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KJINEPCJHDF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::NPCMonsterMarkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::NPCMonsterMarkRow*))((::PBYTE)hIl2Cpp + KJINEPCJHDF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

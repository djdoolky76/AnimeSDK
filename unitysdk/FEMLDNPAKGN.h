#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleSpecSkillRemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEMLDNPAKGN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFBBD40)
#define FEMLDNPAKGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBC370)
#define FEMLDNPAKGN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFBBEB0)
#define FEMLDNPAKGN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFBB730)
#define FEMLDNPAKGN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFBB9C0)
#define FEMLDNPAKGN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFBBF50)
#define FEMLDNPAKGN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFBBFA0)
#define FEMLDNPAKGN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFBBD80)
#define FEMLDNPAKGN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFBB960)
#define FEMLDNPAKGN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFBBB30)
#define FEMLDNPAKGN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFBBE10)
#define FEMLDNPAKGN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFBB6B0)

inline static constexpr unsigned int FEMLDNPAKGN_TypeDefinitionIndex = 13665;

	class FEMLDNPAKGN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*>**)UnitySDK::FromName("", "FEMLDNPAKGN")->GetStaticField(0x41FC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FEMLDNPAKGN")->GetStaticField(0x41FC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FEMLDNPAKGN")->GetStaticField(0x41FD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FEMLDNPAKGN")->GetStaticField(0xE090);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FEMLDNPAKGN")->GetStaticField(0xE091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEMLDNPAKGN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FEMLDNPAKGN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEMLDNPAKGN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*>(*)())((::PBYTE)hIl2Cpp + FEMLDNPAKGN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightSkillType a3)
		{
			return ((::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + FEMLDNPAKGN_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEMLDNPAKGN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEMLDNPAKGN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEMLDNPAKGN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEMLDNPAKGN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEMLDNPAKGN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FEMLDNPAKGN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*))((::PBYTE)hIl2Cpp + FEMLDNPAKGN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

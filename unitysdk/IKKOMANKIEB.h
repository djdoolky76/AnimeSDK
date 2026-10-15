#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillComeFrom.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSkillSubIconConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKKOMANKIEB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF1D020)
#define IKKOMANKIEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF1D620)
#define IKKOMANKIEB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF1D190)
#define IKKOMANKIEB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF1CA40)
#define IKKOMANKIEB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF1CCD0)
#define IKKOMANKIEB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF1D230)
#define IKKOMANKIEB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF1D280)
#define IKKOMANKIEB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF1D060)
#define IKKOMANKIEB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF1CC70)
#define IKKOMANKIEB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF1CE40)
#define IKKOMANKIEB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF1D0F0)
#define IKKOMANKIEB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF1C9C0)

inline static constexpr unsigned int IKKOMANKIEB_TypeDefinitionIndex = 13541;

	class IKKOMANKIEB : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IKKOMANKIEB")->GetStaticField(0x240A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>**)UnitySDK::FromName("", "IKKOMANKIEB")->GetStaticField(0x240A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IKKOMANKIEB")->GetStaticField(0x240B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IKKOMANKIEB")->GetStaticField(0x7F00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IKKOMANKIEB")->GetStaticField(0x7F01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKKOMANKIEB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IKKOMANKIEB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKKOMANKIEB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>(*)())((::PBYTE)hIl2Cpp + IKKOMANKIEB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSkillSubIconConfigRow* LMBKNCAIDLC(::RPG::GameCore::GridFightRoleSkillComeFrom a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSkillSubIconConfigRow*(*)(::RPG::GameCore::GridFightRoleSkillComeFrom, ::System::UInt32))((::PBYTE)hIl2Cpp + IKKOMANKIEB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKKOMANKIEB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKKOMANKIEB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKKOMANKIEB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IKKOMANKIEB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKKOMANKIEB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IKKOMANKIEB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSkillSubIconConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSkillSubIconConfigRow*))((::PBYTE)hIl2Cpp + IKKOMANKIEB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

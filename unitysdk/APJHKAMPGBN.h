#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSkillDescModConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APJHKAMPGBN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCEDFB0)
#define APJHKAMPGBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCEE5B0)
#define APJHKAMPGBN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCEE120)
#define APJHKAMPGBN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCED9D0)
#define APJHKAMPGBN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCEDC60)
#define APJHKAMPGBN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCEE1C0)
#define APJHKAMPGBN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCEE210)
#define APJHKAMPGBN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCEDFF0)
#define APJHKAMPGBN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCEDC00)
#define APJHKAMPGBN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCEDDD0)
#define APJHKAMPGBN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCEE080)
#define APJHKAMPGBN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCED950)

inline static constexpr unsigned int APJHKAMPGBN_TypeDefinitionIndex = 13557;

	class APJHKAMPGBN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "APJHKAMPGBN")->GetStaticField(0x3C9F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "APJHKAMPGBN")->GetStaticField(0x3C9F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>**)UnitySDK::FromName("", "APJHKAMPGBN")->GetStaticField(0x3CA00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "APJHKAMPGBN")->GetStaticField(0xCFD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "APJHKAMPGBN")->GetStaticField(0xCFD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APJHKAMPGBN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>*(*)())((::PBYTE)hIl2Cpp + APJHKAMPGBN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + APJHKAMPGBN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>(*)())((::PBYTE)hIl2Cpp + APJHKAMPGBN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSkillDescModConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GridFightSkillType a2)
		{
			return ((::RPG::GameCore::GridFightSkillDescModConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + APJHKAMPGBN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + APJHKAMPGBN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APJHKAMPGBN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APJHKAMPGBN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + APJHKAMPGBN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + APJHKAMPGBN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + APJHKAMPGBN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSkillDescModConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSkillDescModConfigRow*))((::PBYTE)hIl2Cpp + APJHKAMPGBN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

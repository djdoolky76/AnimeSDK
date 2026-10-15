#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleTagInfoConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFGJEFAIDAB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D024A40)
#define JFGJEFAIDAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D025010)
#define JFGJEFAIDAB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D024BB0)
#define JFGJEFAIDAB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0244B0)
#define JFGJEFAIDAB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D024740)
#define JFGJEFAIDAB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D024C50)
#define JFGJEFAIDAB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D024CA0)
#define JFGJEFAIDAB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D024A80)
#define JFGJEFAIDAB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0246E0)
#define JFGJEFAIDAB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0248B0)
#define JFGJEFAIDAB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D024B10)
#define JFGJEFAIDAB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D024430)

	class JFGJEFAIDAB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JFGJEFAIDAB")->GetStaticField(0x2D610);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>**)UnitySDK::FromName("", "JFGJEFAIDAB")->GetStaticField(0x2D618);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JFGJEFAIDAB")->GetStaticField(0x2D620);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JFGJEFAIDAB")->GetStaticField(0x93E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFGJEFAIDAB")->GetStaticField(0x93E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGJEFAIDAB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JFGJEFAIDAB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JFGJEFAIDAB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>(*)())((::PBYTE)hIl2Cpp + JFGJEFAIDAB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleTagInfoConfigRow* LMBKNCAIDLC(::RPG::GameCore::GridFightRoleSkillTag a1)
		{
			return ((::RPG::GameCore::GridFightRoleTagInfoConfigRow*(*)(::RPG::GameCore::GridFightRoleSkillTag))((::PBYTE)hIl2Cpp + JFGJEFAIDAB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JFGJEFAIDAB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGJEFAIDAB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGJEFAIDAB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JFGJEFAIDAB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JFGJEFAIDAB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JFGJEFAIDAB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleTagInfoConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleTagInfoConfigRow*))((::PBYTE)hIl2Cpp + JFGJEFAIDAB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

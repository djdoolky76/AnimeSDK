#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBonusAddRuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEEEANGJGJJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D122670)
#define MEEEANGJGJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D122C40)
#define MEEEANGJGJJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1227E0)
#define MEEEANGJGJJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1220E0)
#define MEEEANGJGJJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D122370)
#define MEEEANGJGJJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D122880)
#define MEEEANGJGJJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1228D0)
#define MEEEANGJGJJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1226B0)
#define MEEEANGJGJJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D122310)
#define MEEEANGJGJJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1224E0)
#define MEEEANGJGJJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D122740)
#define MEEEANGJGJJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D122060)

inline static constexpr unsigned int MEEEANGJGJJ_TypeDefinitionIndex = 13679;

	class MEEEANGJGJJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0x42BC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>**)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0x42BC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0x42BD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0xFD70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MEEEANGJGJJ")->GetStaticField(0xFD71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEEANGJGJJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*))((::PBYTE)hIl2Cpp + MEEEANGJGJJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonusRuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFEPJFNDCEC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E80F6B0)
#define HFEPJFNDCEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80FCB0)
#define HFEPJFNDCEC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E80F820)
#define HFEPJFNDCEC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E80F0E0)
#define HFEPJFNDCEC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E80F370)
#define HFEPJFNDCEC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E80F8C0)
#define HFEPJFNDCEC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E80F910)
#define HFEPJFNDCEC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E80F6F0)
#define HFEPJFNDCEC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E80F310)
#define HFEPJFNDCEC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E80F4E0)
#define HFEPJFNDCEC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E80F780)
#define HFEPJFNDCEC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E80F060)

inline static constexpr unsigned int HFEPJFNDCEC_TypeDefinitionIndex = 13742;

	class HFEPJFNDCEC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HFEPJFNDCEC")->GetStaticField(0x16850);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HFEPJFNDCEC")->GetStaticField(0x16858);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>**)UnitySDK::FromName("", "HFEPJFNDCEC")->GetStaticField(0x16860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HFEPJFNDCEC")->GetStaticField(0x4FF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HFEPJFNDCEC")->GetStaticField(0x4FF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFEPJFNDCEC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HFEPJFNDCEC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HFEPJFNDCEC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + HFEPJFNDCEC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBonusRuleConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightBonusRuleConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HFEPJFNDCEC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HFEPJFNDCEC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFEPJFNDCEC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFEPJFNDCEC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HFEPJFNDCEC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFEPJFNDCEC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HFEPJFNDCEC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBonusRuleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBonusRuleConfigRow*))((::PBYTE)hIl2Cpp + HFEPJFNDCEC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

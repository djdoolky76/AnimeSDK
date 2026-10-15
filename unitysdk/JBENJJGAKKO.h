#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBENJJGAKKO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CFE5250)
#define JBENJJGAKKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFE5790)
#define JBENJJGAKKO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CFE5330)
#define JBENJJGAKKO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF22460)
#define JBENJJGAKKO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CFE4F50)
#define JBENJJGAKKO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CFE53D0)
#define JBENJJGAKKO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CFE5420)
#define JBENJJGAKKO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFA89A0)
#define JBENJJGAKKO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CFE4EF0)
#define JBENJJGAKKO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CFE50C0)
#define JBENJJGAKKO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CFE5290)
#define JBENJJGAKKO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CFE4E70)

inline static constexpr unsigned int JBENJJGAKKO_TypeDefinitionIndex = 11725;

	class JBENJJGAKKO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JBENJJGAKKO")->GetStaticField(0x2BA90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>**)UnitySDK::FromName("", "JBENJJGAKKO")->GetStaticField(0x2BA98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JBENJJGAKKO")->GetStaticField(0x2BAA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JBENJJGAKKO")->GetStaticField(0x9230);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JBENJJGAKKO")->GetStaticField(0x9231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBENJJGAKKO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>*(*)())((::PBYTE)hIl2Cpp + JBENJJGAKKO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBENJJGAKKO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>(*)())((::PBYTE)hIl2Cpp + JBENJJGAKKO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveTeamSlotTypeRow* LMBKNCAIDLC(::RPG::GameCore::ILBattleCharacterLocation a1)
		{
			return ((::RPG::GameCore::IdleLiveTeamSlotTypeRow*(*)(::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + JBENJJGAKKO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBENJJGAKKO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBENJJGAKKO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBENJJGAKKO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JBENJJGAKKO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JBENJJGAKKO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JBENJJGAKKO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveTeamSlotTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamSlotTypeRow*))((::PBYTE)hIl2Cpp + JBENJJGAKKO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

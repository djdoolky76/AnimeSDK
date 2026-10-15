#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotLevelLimitRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNNKMOBIEOB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D055D50)
#define JNNKMOBIEOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D056320)
#define JNNKMOBIEOB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D055EC0)
#define JNNKMOBIEOB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0557C0)
#define JNNKMOBIEOB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D055A50)
#define JNNKMOBIEOB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D055F60)
#define JNNKMOBIEOB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D055FB0)
#define JNNKMOBIEOB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D055D90)
#define JNNKMOBIEOB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0559F0)
#define JNNKMOBIEOB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D055BC0)
#define JNNKMOBIEOB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D055E20)
#define JNNKMOBIEOB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D055740)

inline static constexpr unsigned int JNNKMOBIEOB_TypeDefinitionIndex = 11721;

	class JNNKMOBIEOB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>**)UnitySDK::FromName("", "JNNKMOBIEOB")->GetStaticField(0x300E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNNKMOBIEOB")->GetStaticField(0x300E8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JNNKMOBIEOB")->GetStaticField(0x300F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNNKMOBIEOB")->GetStaticField(0xA2F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNNKMOBIEOB")->GetStaticField(0xA2F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNNKMOBIEOB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>*(*)())((::PBYTE)hIl2Cpp + JNNKMOBIEOB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNNKMOBIEOB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>(*)())((::PBYTE)hIl2Cpp + JNNKMOBIEOB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JNNKMOBIEOB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNNKMOBIEOB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNNKMOBIEOB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNNKMOBIEOB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNNKMOBIEOB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNNKMOBIEOB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNNKMOBIEOB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*))((::PBYTE)hIl2Cpp + JNNKMOBIEOB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

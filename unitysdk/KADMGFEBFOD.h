#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonTalentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KADMGFEBFOD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F93C0D0)
#define KADMGFEBFOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F93C650)
#define KADMGFEBFOD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F93C240)
#define KADMGFEBFOD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F93BB80)
#define KADMGFEBFOD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F93BE10)
#define KADMGFEBFOD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F93C2E0)
#define KADMGFEBFOD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F93C330)
#define KADMGFEBFOD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F93C110)
#define KADMGFEBFOD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F93BDB0)
#define KADMGFEBFOD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F93BF40)
#define KADMGFEBFOD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F93C1A0)
#define KADMGFEBFOD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F93BB00)

inline static constexpr unsigned int KADMGFEBFOD_TypeDefinitionIndex = 13683;

	class KADMGFEBFOD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KADMGFEBFOD")->GetStaticField(0x30660);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KADMGFEBFOD")->GetStaticField(0x30668);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>**)UnitySDK::FromName("", "KADMGFEBFOD")->GetStaticField(0x30670);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KADMGFEBFOD")->GetStaticField(0x9760);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KADMGFEBFOD")->GetStaticField(0x9761);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KADMGFEBFOD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KADMGFEBFOD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KADMGFEBFOD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>(*)())((::PBYTE)hIl2Cpp + KADMGFEBFOD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonTalentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSeasonTalentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KADMGFEBFOD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KADMGFEBFOD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KADMGFEBFOD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KADMGFEBFOD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KADMGFEBFOD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KADMGFEBFOD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KADMGFEBFOD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonTalentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonTalentConfigRow*))((::PBYTE)hIl2Cpp + KADMGFEBFOD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

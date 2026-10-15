#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingActionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNDEOLCHBJD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCB2450)
#define CNDEOLCHBJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB2A50)
#define CNDEOLCHBJD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCB25C0)
#define CNDEOLCHBJD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCB1E80)
#define CNDEOLCHBJD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCB2110)
#define CNDEOLCHBJD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCB2660)
#define CNDEOLCHBJD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCB26B0)
#define CNDEOLCHBJD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCB2490)
#define CNDEOLCHBJD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCB20B0)
#define CNDEOLCHBJD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCB2280)
#define CNDEOLCHBJD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCB2520)
#define CNDEOLCHBJD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCB1E00)

inline static constexpr unsigned int CNDEOLCHBJD_TypeDefinitionIndex = 12434;

	class CNDEOLCHBJD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0x44CA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>**)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0x44CA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0x44CB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0x105C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0x105C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNDEOLCHBJD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>*(*)())((::PBYTE)hIl2Cpp + CNDEOLCHBJD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNDEOLCHBJD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>(*)())((::PBYTE)hIl2Cpp + CNDEOLCHBJD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingActionRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SwordTrainingActionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CNDEOLCHBJD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNDEOLCHBJD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNDEOLCHBJD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNDEOLCHBJD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CNDEOLCHBJD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CNDEOLCHBJD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CNDEOLCHBJD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingActionRow*))((::PBYTE)hIl2Cpp + CNDEOLCHBJD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

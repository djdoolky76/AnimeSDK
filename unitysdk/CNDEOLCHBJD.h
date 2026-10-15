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

#define CNDEOLCHBJD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC84BE0)
#define CNDEOLCHBJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC851E0)
#define CNDEOLCHBJD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC84D50)
#define CNDEOLCHBJD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC84610)
#define CNDEOLCHBJD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC848A0)
#define CNDEOLCHBJD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC84DF0)
#define CNDEOLCHBJD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC84E40)
#define CNDEOLCHBJD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC84C20)
#define CNDEOLCHBJD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC84840)
#define CNDEOLCHBJD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC84A10)
#define CNDEOLCHBJD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC84CB0)
#define CNDEOLCHBJD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC84590)

inline static constexpr unsigned int CNDEOLCHBJD_TypeDefinitionIndex = 12434;

	class CNDEOLCHBJD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingActionRow*>**)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0x3F300);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0x3F308);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0x3F310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0xEE30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CNDEOLCHBJD")->GetStaticField(0xEE31);
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

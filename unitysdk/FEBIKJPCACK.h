#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRelicBoxQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEBIKJPCACK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDB1DD0)
#define FEBIKJPCACK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDB2350)
#define FEBIKJPCACK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDB1F40)
#define FEBIKJPCACK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDB1880)
#define FEBIKJPCACK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDB1B10)
#define FEBIKJPCACK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDB1FE0)
#define FEBIKJPCACK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDB2030)
#define FEBIKJPCACK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDB1E10)
#define FEBIKJPCACK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDB1AB0)
#define FEBIKJPCACK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDB1C40)
#define FEBIKJPCACK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDB1EA0)
#define FEBIKJPCACK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDB1800)

inline static constexpr unsigned int FEBIKJPCACK_TypeDefinitionIndex = 12336;

	class FEBIKJPCACK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>**)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x10400);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x10408);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x10410);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x3480);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FEBIKJPCACK")->GetStaticField(0x3481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRelicBoxQuestConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRelicBoxQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FEBIKJPCACK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEBIKJPCACK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEBIKJPCACK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEBIKJPCACK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FEBIKJPCACK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRelicBoxQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRelicBoxQuestConfigRow*))((::PBYTE)hIl2Cpp + FEBIKJPCACK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

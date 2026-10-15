#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGuideQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBCOBAHLEAC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD9C0F0)
#define FBCOBAHLEAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9C670)
#define FBCOBAHLEAC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD9C260)
#define FBCOBAHLEAC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD9BBA0)
#define FBCOBAHLEAC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD9BE30)
#define FBCOBAHLEAC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD9C300)
#define FBCOBAHLEAC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD9C350)
#define FBCOBAHLEAC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD9C130)
#define FBCOBAHLEAC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD9BDD0)
#define FBCOBAHLEAC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD9BF60)
#define FBCOBAHLEAC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD9C1C0)
#define FBCOBAHLEAC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD9BB20)

inline static constexpr unsigned int FBCOBAHLEAC_TypeDefinitionIndex = 13580;

	class FBCOBAHLEAC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FBCOBAHLEAC")->GetStaticField(0xF350);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>**)UnitySDK::FromName("", "FBCOBAHLEAC")->GetStaticField(0xF358);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FBCOBAHLEAC")->GetStaticField(0xF360);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FBCOBAHLEAC")->GetStaticField(0x31C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FBCOBAHLEAC")->GetStaticField(0x31C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCOBAHLEAC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FBCOBAHLEAC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBCOBAHLEAC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + FBCOBAHLEAC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightGuideQuestConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightGuideQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FBCOBAHLEAC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FBCOBAHLEAC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCOBAHLEAC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCOBAHLEAC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBCOBAHLEAC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBCOBAHLEAC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FBCOBAHLEAC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightGuideQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + FBCOBAHLEAC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeStageIntroRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIMDBLCOGOK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD8AB90)
#define EIMDBLCOGOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD8B190)
#define EIMDBLCOGOK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD8AD00)
#define EIMDBLCOGOK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD8A5C0)
#define EIMDBLCOGOK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD8A850)
#define EIMDBLCOGOK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD8ADA0)
#define EIMDBLCOGOK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD8ADF0)
#define EIMDBLCOGOK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD8ABD0)
#define EIMDBLCOGOK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD8A7F0)
#define EIMDBLCOGOK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD8A9C0)
#define EIMDBLCOGOK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD8AC60)
#define EIMDBLCOGOK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD8A540)

inline static constexpr unsigned int EIMDBLCOGOK_TypeDefinitionIndex = 12839;

	class EIMDBLCOGOK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x541E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>**)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x541E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x541F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x12AC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x12AC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMDBLCOGOK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>*(*)())((::PBYTE)hIl2Cpp + EIMDBLCOGOK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIMDBLCOGOK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>(*)())((::PBYTE)hIl2Cpp + EIMDBLCOGOK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleCollegeStageIntroRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::BattleCollegeStageIntroRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EIMDBLCOGOK_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIMDBLCOGOK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMDBLCOGOK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMDBLCOGOK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EIMDBLCOGOK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMDBLCOGOK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EIMDBLCOGOK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleCollegeStageIntroRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleCollegeStageIntroRow*))((::PBYTE)hIl2Cpp + EIMDBLCOGOK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

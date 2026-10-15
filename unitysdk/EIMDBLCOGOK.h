#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeStageIntroRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIMDBLCOGOK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD5CB50)
#define EIMDBLCOGOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5D150)
#define EIMDBLCOGOK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD5CCC0)
#define EIMDBLCOGOK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5C580)
#define EIMDBLCOGOK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5C810)
#define EIMDBLCOGOK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD5CD60)
#define EIMDBLCOGOK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD5CDB0)
#define EIMDBLCOGOK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD5CB90)
#define EIMDBLCOGOK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5C7B0)
#define EIMDBLCOGOK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5C980)
#define EIMDBLCOGOK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD5CC20)
#define EIMDBLCOGOK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5C500)

inline static constexpr unsigned int EIMDBLCOGOK_TypeDefinitionIndex = 12839;

	class EIMDBLCOGOK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>**)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x4DD20);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x4DD28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x4DD30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x11CA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EIMDBLCOGOK")->GetStaticField(0x11CA1);
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

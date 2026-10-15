#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleMapConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IADCNDFLONI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEAA9C0)
#define IADCNDFLONI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAAF90)
#define IADCNDFLONI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEAAB30)
#define IADCNDFLONI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEAA430)
#define IADCNDFLONI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEAA6C0)
#define IADCNDFLONI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEAABD0)
#define IADCNDFLONI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEAAC20)
#define IADCNDFLONI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEAAA00)
#define IADCNDFLONI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEAA660)
#define IADCNDFLONI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEAA830)
#define IADCNDFLONI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEAAA90)
#define IADCNDFLONI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEAA3B0)

inline static constexpr unsigned int IADCNDFLONI_TypeDefinitionIndex = 11443;

	class IADCNDFLONI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IADCNDFLONI")->GetStaticField(0x1ED60);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IADCNDFLONI")->GetStaticField(0x1ED68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleMapConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleMapConfigRow*>**)UnitySDK::FromName("", "IADCNDFLONI")->GetStaticField(0x1ED70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IADCNDFLONI")->GetStaticField(0x6F70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IADCNDFLONI")->GetStaticField(0x6F71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IADCNDFLONI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleMapConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleMapConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IADCNDFLONI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IADCNDFLONI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleMapConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleMapConfigRow*>(*)())((::PBYTE)hIl2Cpp + IADCNDFLONI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionBattleMapConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionBattleMapConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IADCNDFLONI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IADCNDFLONI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IADCNDFLONI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IADCNDFLONI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IADCNDFLONI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IADCNDFLONI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IADCNDFLONI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ExpeditionBattleMapConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionBattleMapConfigRow*))((::PBYTE)hIl2Cpp + IADCNDFLONI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

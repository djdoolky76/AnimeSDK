#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAreaUnifiedConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LAEFALCGFMG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0A3B80)
#define LAEFALCGFMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4150)
#define LAEFALCGFMG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0A3CF0)
#define LAEFALCGFMG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0A35F0)
#define LAEFALCGFMG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0A3880)
#define LAEFALCGFMG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0A3D90)
#define LAEFALCGFMG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0A3DE0)
#define LAEFALCGFMG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0A3BC0)
#define LAEFALCGFMG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0A3820)
#define LAEFALCGFMG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0A39F0)
#define LAEFALCGFMG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0A3C50)
#define LAEFALCGFMG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0A3570)

inline static constexpr unsigned int LAEFALCGFMG_TypeDefinitionIndex = 12835;

	class LAEFALCGFMG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>**)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0x37C10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0x37C18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0x37C20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0xB4A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LAEFALCGFMG")->GetStaticField(0xB4A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaUnifiedConfigRow*>(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleAreaUnifiedConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleAreaUnifiedConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LAEFALCGFMG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAEFALCGFMG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LAEFALCGFMG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LAEFALCGFMG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LAEFALCGFMG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleAreaUnifiedConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleAreaUnifiedConfigRow*))((::PBYTE)hIl2Cpp + LAEFALCGFMG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

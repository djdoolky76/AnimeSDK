#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFOGLEGJOLK.h"
#include "unitysdk/BLCOMJIAAHP_ODJCADDMDCL.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
namespace RPG::GameCore { class BattleEventSkillRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLCOMJIAAHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D7F4FD0)
#define BLCOMJIAAHP_BHDOMIGFBCJ_OFFSET UNITYSDK_OFFSET(0x1D7F4770)
#define BLCOMJIAAHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7F5840)
#define BLCOMJIAAHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D7F5310)
#define BLCOMJIAAHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D7F4860)
#define BLCOMJIAAHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D7F4A80)
#define BLCOMJIAAHP_HLPLHCPAKNF_OFFSET UNITYSDK_OFFSET(0x1D7F46C0)
#define BLCOMJIAAHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D7F5370)
#define BLCOMJIAAHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D7F53C0)
#define BLCOMJIAAHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D7F5010)
#define BLCOMJIAAHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D7F4A10)
#define BLCOMJIAAHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D7F4CD0)
#define BLCOMJIAAHP_MDDEBCEINEJ_OFFSET UNITYSDK_OFFSET(0x1D7F5200)
#define BLCOMJIAAHP_OKONOOJEJMJ_OFFSET UNITYSDK_OFFSET(0x1D7F4D60)
#define BLCOMJIAAHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D7F51A0)
#define BLCOMJIAAHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D7F47E0)

inline static constexpr unsigned int BLCOMJIAAHP_TypeDefinitionIndex = 12860;

	class BLCOMJIAAHP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x442B0);
		}

		static ::OFLIAAOJPJC** StaticGet_MLGLBKACPBD()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x442B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_KGADENKPMFA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x442C0);
		}

		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>** StaticGet_LMHLKOHMNAL()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x442C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x442D0);
		}

		static ::System::String** StaticGet_PCJBKGCDGPO()
		{
			return (::System::String**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x442D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x442E0);
		}

		static ::System::Boolean* StaticGet_GDOFOFOCOLC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x101F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x101F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLCOMJIAAHP_CCTOR_OFFSET))();
		}

		static ::BFOGLEGJOLK HLPLHCPAKNF()
		{
			return ((::BFOGLEGJOLK(*)())((::PBYTE)hIl2Cpp + BLCOMJIAAHP_HLPLHCPAKNF_OFFSET))();
		}

		static ::System::Void BHDOMIGFBCJ(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_BHDOMIGFBCJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>*(*)())((::PBYTE)hIl2Cpp + BLCOMJIAAHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLCOMJIAAHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>(*)())((::PBYTE)hIl2Cpp + BLCOMJIAAHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleEventSkillRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleEventSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BLCOMJIAAHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLCOMJIAAHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLCOMJIAAHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void MDDEBCEINEJ(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::BattleEventSkillRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_MDDEBCEINEJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean OKONOOJEJMJ(::BLCOMJIAAHP_ODJCADDMDCL a1, ::RPG::GameCore::BattleEventSkillRow* a2)
		{
			return ((::System::Boolean(*)(::BLCOMJIAAHP_ODJCADDMDCL, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_OKONOOJEJMJ_OFFSET))(a1, a2);
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleEventSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

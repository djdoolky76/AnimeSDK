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

#define BLCOMJIAAHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9D5A90)
#define BLCOMJIAAHP_BHDOMIGFBCJ_OFFSET UNITYSDK_OFFSET(0x1E9D5230)
#define BLCOMJIAAHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D6300)
#define BLCOMJIAAHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9D5DD0)
#define BLCOMJIAAHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9D5320)
#define BLCOMJIAAHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9D5540)
#define BLCOMJIAAHP_HLPLHCPAKNF_OFFSET UNITYSDK_OFFSET(0x1E9D5180)
#define BLCOMJIAAHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9D5E30)
#define BLCOMJIAAHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9D5E80)
#define BLCOMJIAAHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9D5AD0)
#define BLCOMJIAAHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9D54D0)
#define BLCOMJIAAHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9D5790)
#define BLCOMJIAAHP_MDDEBCEINEJ_OFFSET UNITYSDK_OFFSET(0x1E9D5CC0)
#define BLCOMJIAAHP_OKONOOJEJMJ_OFFSET UNITYSDK_OFFSET(0x1E9D5820)
#define BLCOMJIAAHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9D5C60)
#define BLCOMJIAAHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9D52A0)

inline static constexpr unsigned int BLCOMJIAAHP_TypeDefinitionIndex = 12932;

	class BLCOMJIAAHP : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>** StaticGet_LMHLKOHMNAL()
		{
			return (::RPG::GameCore::TableLRUCache_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x47920);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x47928);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::GameCore::BattleEventSkillRow*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x47930);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x47938);
		}

		static ::OFLIAAOJPJC** StaticGet_MLGLBKACPBD()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x47940);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_KGADENKPMFA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x47948);
		}

		static ::System::String** StaticGet_PCJBKGCDGPO()
		{
			return (::System::String**)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0x47950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0xED50);
		}

		static ::System::Boolean* StaticGet_GDOFOFOCOLC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLCOMJIAAHP")->GetStaticField(0xED51);
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

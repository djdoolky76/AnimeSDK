#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class FJJHCDGNDPD;
class FNGKJFAMKLI;
class GDAACOIKPFC;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class JJKOHCPBGAL;
class PDDKPMPNFPG;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelItemData; }
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewMutationEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDDKPMPNFPG_ALCDAFHLOFH_OFFSET UNITYSDK_OFFSET(0xC00F620)
#define PDDKPMPNFPG_BGCCHLOGOGP_OFFSET UNITYSDK_OFFSET(0xC0107B0)
#define PDDKPMPNFPG_CTOR_OFFSET UNITYSDK_OFFSET(0xC00F6C0)
#define PDDKPMPNFPG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC010A90)
#define PDDKPMPNFPG_GMAMFLJOKIM_1_OFFSET UNITYSDK_OFFSET(0xC010850)
#define PDDKPMPNFPG_GMAMFLJOKIM_OFFSET UNITYSDK_OFFSET(0xC010740)
#define PDDKPMPNFPG_HHPBDKOOLLO_OFFSET UNITYSDK_OFFSET(0xC00FA00)
#define PDDKPMPNFPG_HKFMDOBOCPJ_OFFSET UNITYSDK_OFFSET(0xC00F070)
#define PDDKPMPNFPG_IONANLNGMBE_OFFSET UNITYSDK_OFFSET(0xC00F430)
#define PDDKPMPNFPG_KOJEGCPCOLO_OFFSET UNITYSDK_OFFSET(0xC00F6D0)
#define PDDKPMPNFPG_LIMGNIKGJJH_OFFSET UNITYSDK_OFFSET(0xC00FCB0)
#define PDDKPMPNFPG_TICK_OFFSET UNITYSDK_OFFSET(0xC010C60)

inline static constexpr unsigned int PDDKPMPNFPG_TypeDefinitionIndex = 78346;

	class PDDKPMPNFPG : public ::System::Object
	{
	public:
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x10
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_CTOR_OFFSET))(this, a1);
		}

		static ::PDDKPMPNFPG* HKFMDOBOCPJ(::JJKOHCPBGAL* a1)
		{
			return ((::PDDKPMPNFPG*(*)(::JJKOHCPBGAL*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_HKFMDOBOCPJ_OFFSET))(a1);
		}

		static ::PDDKPMPNFPG* KOJEGCPCOLO(::System::UInt32 a1, ::RPG::Client::ChimeraDuelItemData* a2)
		{
			return ((::PDDKPMPNFPG*(*)(::System::UInt32, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_KOJEGCPCOLO_OFFSET))(a1, a2);
		}

		static ::System::Boolean IONANLNGMBE(::JJKOHCPBGAL* a1, ::RPG::Client::IChimeraDuelSkillData* a2)
		{
			return ((::System::Boolean(*)(::JJKOHCPBGAL*, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_IONANLNGMBE_OFFSET))(a1, a2);
		}

		static ::GDAACOIKPFC* ALCDAFHLOFH(::JJKOHCPBGAL* a1)
		{
			return ((::GDAACOIKPFC*(*)(::JJKOHCPBGAL*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_ALCDAFHLOFH_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*>* HHPBDKOOLLO(::JJKOHCPBGAL* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*>*(*)(::JJKOHCPBGAL*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_HHPBDKOOLLO_OFFSET))(a1);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* LIMGNIKGJJH(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::JJKOHCPBGAL* a2, ::FNGKJFAMKLI* a3)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::JJKOHCPBGAL*, ::FNGKJFAMKLI*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_LIMGNIKGJJH_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* GMAMFLJOKIM(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_GMAMFLJOKIM_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* GMAMFLJOKIM_1(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::FJJHCDGNDPD* a2, ::FNGKJFAMKLI* a3)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::FJJHCDGNDPD*, ::FNGKJFAMKLI*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_GMAMFLJOKIM_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewMutationEffect* BGCCHLOGOGP(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewMutationEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_BGCCHLOGOGP_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDDKPMPNFPG_TICK_OFFSET))(this, a1);
		}

	};

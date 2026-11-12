#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNKMEFBKE;
class IJFIHJJPHNA;
class PLAJONHLDJN;
namespace RPG::GameCore { class DiceCombatPresetConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorAddLimitedDiceConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLNHPBBCIPH_BHLFNKEHHPG_OFFSET UNITYSDK_OFFSET(0x1D8C23B0)
#define LLNHPBBCIPH_BPGECPAPGKH_OFFSET UNITYSDK_OFFSET(0x1D8C1FE0)
#define LLNHPBBCIPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C1850)
#define LLNHPBBCIPH_DKMHOALHILI_OFFSET UNITYSDK_OFFSET(0x1D8C2310)
#define LLNHPBBCIPH_EDALHNFEPMI_OFFSET UNITYSDK_OFFSET(0x1D8C1860)
#define LLNHPBBCIPH_FGONPJMLOAI_OFFSET UNITYSDK_OFFSET(0x1D8C1F60)
#define LLNHPBBCIPH_HJOAOHGPHAJ_OFFSET UNITYSDK_OFFSET(0x1D8C2430)
#define LLNHPBBCIPH_ICINHGDKHJG_OFFSET UNITYSDK_OFFSET(0x1D8C2270)
#define LLNHPBBCIPH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D8C1ED0)
#define LLNHPBBCIPH_LMDIONHEJLI_OFFSET UNITYSDK_OFFSET(0x1D8C1BA0)
#define LLNHPBBCIPH_OCLLLHOJFPC_OFFSET UNITYSDK_OFFSET(0x1D8C2060)

inline static constexpr unsigned int LLNHPBBCIPH_TypeDefinitionIndex = 37423;

	class LLNHPBBCIPH : public ::System::Object
	{
	public:
		::PLAJONHLDJN* FLMODBLFAGD; // 0x10
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::DiceCombatPresetConfig* ACCJFFIIJFE; // 0x20
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EDALHNFEPMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_EDALHNFEPMI_OFFSET))(this);
		}

		::System::Void LMDIONHEJLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_LMDIONHEJLI_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_INITIALIZE_OFFSET))(this);
		}

		::System::Boolean FGONPJMLOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_FGONPJMLOAI_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatPresetTurnConfig* BPGECPAPGKH(::System::Int32 a1)
		{
			return ((::RPG::GameCore::DiceCombatPresetTurnConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_BPGECPAPGKH_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatPresetTurnActorConfig* OCLLLHOJFPC(::System::Int32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::RPG::GameCore::DiceCombatPresetTurnActorConfig*(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_OCLLLHOJFPC_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::DiceCombatPresetTurnActorRollConfig* ICINHGDKHJG(::System::Int32 a1, ::IJFIHJJPHNA* a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_ICINHGDKHJG_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Int32>* DKMHOALHILI(::System::Int32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_DKMHOALHILI_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig* BHLFNKEHHPG(::System::Int32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig*(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_BHLFNKEHHPG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* HJOAOHGPHAJ(::System::Int32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + LLNHPBBCIPH_HJOAOHGPHAJ_OFFSET))(this, a1, a2);
		}

	};

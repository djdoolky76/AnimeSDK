#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"
class AIMNKMEFBKE;
class IJFIHJJPHNA;
class PLAJONHLDJN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MGJHLLCENKL_AONMHJHDCCC_OFFSET UNITYSDK_OFFSET(0x1C74BB70)
#define MGJHLLCENKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74B210)
#define MGJHLLCENKL_DALKGJPIBDO_OFFSET UNITYSDK_OFFSET(0x1C74B8C0)
#define MGJHLLCENKL_DCMJACCNOGP_OFFSET UNITYSDK_OFFSET(0x1C74BA40)
#define MGJHLLCENKL_EOHINMCGKAO_OFFSET UNITYSDK_OFFSET(0x1C74BF40)
#define MGJHLLCENKL_LHFJJJCONCB_OFFSET UNITYSDK_OFFSET(0x1C74B2B0)

inline static constexpr unsigned int MGJHLLCENKL_TypeDefinitionIndex = 36490;

	class MGJHLLCENKL : public ::System::Object
	{
	public:
		::PLAJONHLDJN* FLMODBLFAGD; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* IHBMAPBBILJ; // 0x18
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + MGJHLLCENKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LHFJJJCONCB(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::IJFIHJJPHNA*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::IJFIHJJPHNA*>*))((::PBYTE)hIl2Cpp + MGJHLLCENKL_LHFJJJCONCB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DCMJACCNOGP(::IJFIHJJPHNA* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + MGJHLLCENKL_DCMJACCNOGP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AONMHJHDCCC(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + MGJHLLCENKL_AONMHJHDCCC_OFFSET))(this, a1, a2);
		}

		::System::Boolean DALKGJPIBDO(::IJFIHJJPHNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + MGJHLLCENKL_DALKGJPIBDO_OFFSET))(this, a1);
		}

		::System::Void EOHINMCGKAO(::IJFIHJJPHNA* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + MGJHLLCENKL_EOHINMCGKAO_OFFSET))(this, a1, a2, a3);
		}

	};

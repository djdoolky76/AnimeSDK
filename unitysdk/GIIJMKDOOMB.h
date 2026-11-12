#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ListenPropInAnimState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GIIJMKDOOMB_ANIOHCLHMKL_OFFSET UNITYSDK_OFFSET(0x16976B80)
#define GIIJMKDOOMB_CTOR_OFFSET UNITYSDK_OFFSET(0x16976760)
#define GIIJMKDOOMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16976930)
#define GIIJMKDOOMB_KKHAEKMFIOC_OFFSET UNITYSDK_OFFSET(0x16977120)
#define GIIJMKDOOMB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16976BD0)
#define GIIJMKDOOMB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16976D10)
#define GIIJMKDOOMB_TICK_OFFSET UNITYSDK_OFFSET(0x16976EB0)

inline static constexpr unsigned int GIIJMKDOOMB_TypeDefinitionIndex = 56321;

	class GIIJMKDOOMB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ListenPropInAnimState* OFKGLJOAMLD; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* HFHILHOCPNL; // 0x28
		::KFELGAIGHAP* NMPLHCJKEOI; // 0x30
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x38
		::KFELGAIGHAP* FFKBFPKEPEN; // 0x40
		::System::Boolean CFDILKDNDPO; // 0x48
		::System::Boolean KLHLDDIKAMB; // 0x49
		::System::Byte _padding0[0x2];
		::System::UInt32 NJGMBIDODOC; // 0x4C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ListenPropInAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ListenPropInAnimState*))((::PBYTE)hIl2Cpp + GIIJMKDOOMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJMKDOOMB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJMKDOOMB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJMKDOOMB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIIJMKDOOMB_TICK_OFFSET))(this, a1);
		}

		::System::Void KKHAEKMFIOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIIJMKDOOMB_KKHAEKMFIOC_OFFSET))(this, a1);
		}

		::System::Void ANIOHCLHMKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJMKDOOMB_ANIOHCLHMKL_OFFSET))(this);
		}

	};

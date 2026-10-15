#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ListenPropInAnimState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GIIJMKDOOMB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A3BBF0)
#define GIIJMKDOOMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A3BDB0)
#define GIIJMKDOOMB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A3BF10)
#define GIIJMKDOOMB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A3BF60)
#define GIIJMKDOOMB_TICK_OFFSET UNITYSDK_OFFSET(0x15A3C030)

inline static constexpr unsigned int GIIJMKDOOMB_TypeDefinitionIndex = 55140;

	class GIIJMKDOOMB : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* HFHILHOCPNL; // 0x18
		::KFELGAIGHAP* NMPLHCJKEOI; // 0x20
		::RPG::GameCore::ListenPropInAnimState* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* FFKBFPKEPEN; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Boolean CFDILKDNDPO; // 0x40
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

	};

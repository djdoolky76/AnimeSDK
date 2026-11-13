#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CheckUIMode; }
namespace RPG::GameCore { class TaskContext; }

#define LAJADHHCIHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B27F0C0)
#define LAJADHHCIHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B27F0D0)
#define LAJADHHCIHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B27F1A0)
#define LAJADHHCIHN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B27F3F0)
#define LAJADHHCIHN_TICK_OFFSET UNITYSDK_OFFSET(0x1B27F470)

inline static constexpr unsigned int LAJADHHCIHN_TypeDefinitionIndex = 56123;

	class LAJADHHCIHN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CheckUIMode* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* FDEKPPBCMLO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckUIMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckUIMode*))((::PBYTE)hIl2Cpp + LAJADHHCIHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJADHHCIHN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJADHHCIHN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJADHHCIHN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAJADHHCIHN_TICK_OFFSET))(this, a1);
		}

	};

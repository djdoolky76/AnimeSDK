#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KJKLEHGFIHI;
namespace RPG::GameCore { class TaskContext; }

#define LJGPCIFGILK_CCBKPHLOMOA_OFFSET UNITYSDK_OFFSET(0xBFB4D90)
#define LJGPCIFGILK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB4B00)
#define LJGPCIFGILK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFB4E90)
#define LJGPCIFGILK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFB4B10)
#define LJGPCIFGILK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFB4E40)
#define LJGPCIFGILK_TICK_OFFSET UNITYSDK_OFFSET(0xBFB4DE0)

inline static constexpr unsigned int LJGPCIFGILK_TypeDefinitionIndex = 59934;

	class LJGPCIFGILK : public ::GELIALJDFBL
	{
	public:
		::KJKLEHGFIHI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::String* FNHBHOPGFBH; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KJKLEHGFIHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KJKLEHGFIHI*))((::PBYTE)hIl2Cpp + LJGPCIFGILK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGPCIFGILK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJGPCIFGILK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGPCIFGILK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGPCIFGILK_DISPOSE_OFFSET))(this);
		}

		::System::Void CCBKPHLOMOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGPCIFGILK_CCBKPHLOMOA_OFFSET))(this);
		}

	};

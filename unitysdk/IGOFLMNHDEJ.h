#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DELLLJFOGIN;
namespace RPG::GameCore { class TaskContext; }

#define IGOFLMNHDEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16408B00)
#define IGOFLMNHDEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16408B10)
#define IGOFLMNHDEJ_FCOFMNEHHOG_OFFSET UNITYSDK_OFFSET(0x16408D60)
#define IGOFLMNHDEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16408B50)
#define IGOFLMNHDEJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16408CB0)
#define IGOFLMNHDEJ_TICK_OFFSET UNITYSDK_OFFSET(0x16408D00)

inline static constexpr unsigned int IGOFLMNHDEJ_TypeDefinitionIndex = 56381;

	class IGOFLMNHDEJ : public ::GELIALJDFBL
	{
	public:
		::DELLLJFOGIN* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DELLLJFOGIN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DELLLJFOGIN*))((::PBYTE)hIl2Cpp + IGOFLMNHDEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLMNHDEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLMNHDEJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLMNHDEJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGOFLMNHDEJ_TICK_OFFSET))(this, a1);
		}

		::System::Void FCOFMNEHHOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLMNHDEJ_FCOFMNEHHOG_OFFSET))(this);
		}

	};

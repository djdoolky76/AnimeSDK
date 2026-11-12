#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LEONLENJNJH;
namespace RPG::GameCore { class TaskContext; }

#define OMAMPDAFFHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC8158E0)
#define OMAMPDAFFHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC815B30)
#define OMAMPDAFFHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC8158F0)
#define OMAMPDAFFHD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC815A80)
#define OMAMPDAFFHD_TICK_OFFSET UNITYSDK_OFFSET(0xC815AD0)

inline static constexpr unsigned int OMAMPDAFFHD_TypeDefinitionIndex = 59383;

	class OMAMPDAFFHD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::LEONLENJNJH* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LEONLENJNJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LEONLENJNJH*))((::PBYTE)hIl2Cpp + OMAMPDAFFHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAMPDAFFHD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAMPDAFFHD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMAMPDAFFHD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAMPDAFFHD_DISPOSE_OFFSET))(this);
		}

	};

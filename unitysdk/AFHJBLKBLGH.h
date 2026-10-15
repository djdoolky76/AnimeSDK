#pragma once
#include "unitysdk/unitysdk.h"
class DHNANCPBEPK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define AFHJBLKBLGH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0C650)
#define AFHJBLKBLGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF0C680)
#define AFHJBLKBLGH__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xCF0C820)
#define AFHJBLKBLGH__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xCF0C830)

inline static constexpr unsigned int AFHJBLKBLGH_TypeDefinitionIndex = 52799;

	class AFHJBLKBLGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DHNANCPBEPK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DHNANCPBEPK*))((::PBYTE)hIl2Cpp + AFHJBLKBLGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHJBLKBLGH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHJBLKBLGH__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + AFHJBLKBLGH__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};

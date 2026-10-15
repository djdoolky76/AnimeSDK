#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DMPOEAEMPFO;
namespace RPG::GameCore { class TaskContext; }

#define OHHAAKKHMEH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE637D0)
#define OHHAAKKHMEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE637E0)
#define OHHAAKKHMEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE63820)
#define OHHAAKKHMEH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE63B50)
#define OHHAAKKHMEH_TICK_OFFSET UNITYSDK_OFFSET(0xBE63BA0)
#define OHHAAKKHMEH__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xBE63C00)

inline static constexpr unsigned int OHHAAKKHMEH_TypeDefinitionIndex = 52947;

	class OHHAAKKHMEH : public ::GELIALJDFBL
	{
	public:
		::DMPOEAEMPFO* OFKGLJOAMLD; // 0x18
		// static const ::System::Object LIPFAOMFIFC; // 0x0
		// static const ::System::Object MBGPANJHJJP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DMPOEAEMPFO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DMPOEAEMPFO*))((::PBYTE)hIl2Cpp + OHHAAKKHMEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHAAKKHMEH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHAAKKHMEH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHAAKKHMEH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHHAAKKHMEH_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHAAKKHMEH__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};

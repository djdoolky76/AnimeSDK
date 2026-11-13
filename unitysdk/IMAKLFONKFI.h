#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowMainPageHint; }
namespace RPG::GameCore { class TaskContext; }

#define IMAKLFONKFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CBF20)
#define IMAKLFONKFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5CBF30)
#define IMAKLFONKFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5CBF70)
#define IMAKLFONKFI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A5CBFD0)
#define IMAKLFONKFI_TICK_OFFSET UNITYSDK_OFFSET(0x1A5CC020)

inline static constexpr unsigned int IMAKLFONKFI_TypeDefinitionIndex = 59936;

	class IMAKLFONKFI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowMainPageHint* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMainPageHint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMainPageHint*))((::PBYTE)hIl2Cpp + IMAKLFONKFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAKLFONKFI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAKLFONKFI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAKLFONKFI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMAKLFONKFI_TICK_OFFSET))(this, a1);
		}

	};

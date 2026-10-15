#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ShowDeleteMissionDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define APDIKADKOPG_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0x15B9ACA0)
#define APDIKADKOPG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9A340)
#define APDIKADKOPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9A4B0)
#define APDIKADKOPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B9A750)
#define APDIKADKOPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B9AB10)
#define APDIKADKOPG_TICK_OFFSET UNITYSDK_OFFSET(0x15B9AC40)

inline static constexpr unsigned int APDIKADKOPG_TypeDefinitionIndex = 53266;

	class APDIKADKOPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowDeleteMissionDialog* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* JBCCBPBBAIJ; // 0x28
		::KFELGAIGHAP* HBLGHOCOHAL; // 0x30
		::KFELGAIGHAP* OMODOLBKBNA; // 0x38
		// static const ::System::String* HKBOGHBKDCN; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowDeleteMissionDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowDeleteMissionDialog*))((::PBYTE)hIl2Cpp + APDIKADKOPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDIKADKOPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDIKADKOPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDIKADKOPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APDIKADKOPG_TICK_OFFSET))(this, a1);
		}

		::System::Void BKGCGEEDHDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APDIKADKOPG_BKGCGEEDHDI_OFFSET))(this, a1);
		}

	};

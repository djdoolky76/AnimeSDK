#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LensGlitchEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CKPNHJKHBHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD52760)
#define CKPNHJKHBHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD52770)
#define CKPNHJKHBHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AD527B0)
#define CKPNHJKHBHH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AD52A60)
#define CKPNHJKHBHH_TICK_OFFSET UNITYSDK_OFFSET(0x1AD52AB0)

inline static constexpr unsigned int CKPNHJKHBHH_TypeDefinitionIndex = 56317;

	class CKPNHJKHBHH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LensGlitchEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LensGlitchEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LensGlitchEffect*))((::PBYTE)hIl2Cpp + CKPNHJKHBHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNHJKHBHH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNHJKHBHH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNHJKHBHH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKPNHJKHBHH_TICK_OFFSET))(this, a1);
		}

	};

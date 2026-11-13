#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class PKLHDDGKKOC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropAnimState; }

#define EFJKDMPHNGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3388D0)
#define EFJKDMPHNGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A338A10)
#define EFJKDMPHNGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A338B70)
#define EFJKDMPHNGO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A338C10)
#define EFJKDMPHNGO_TICK_OFFSET UNITYSDK_OFFSET(0x1A338CE0)

inline static constexpr unsigned int EFJKDMPHNGO_TypeDefinitionIndex = 57015;

	class EFJKDMPHNGO : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* PIKHPDDHLHO; // 0x18
		::RPG::GameCore::WaitPropAnimState* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* FOFLNCAEEOM; // 0x30
		::PKLHDDGKKOC* ODHAMLOAKEE; // 0x38
		::System::Boolean CFDILKDNDPO; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single JFKEJBNEINL; // 0x44
		::System::Int32 HFHILHOCPNL; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropAnimState*))((::PBYTE)hIl2Cpp + EFJKDMPHNGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKDMPHNGO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKDMPHNGO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKDMPHNGO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFJKDMPHNGO_TICK_OFFSET))(this, a1);
		}

	};

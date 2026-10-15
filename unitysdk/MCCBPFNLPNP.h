#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class OPLFEKDONFO;
namespace RPG::GameCore { class TaskContext; }

#define MCCBPFNLPNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB874230)
#define MCCBPFNLPNP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB874530)
#define MCCBPFNLPNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB874290)
#define MCCBPFNLPNP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB874240)
#define MCCBPFNLPNP_TICK_OFFSET UNITYSDK_OFFSET(0xB8744D0)
#define MCCBPFNLPNP__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0xB874630)

inline static constexpr unsigned int MCCBPFNLPNP_TypeDefinitionIndex = 52313;

	class MCCBPFNLPNP : public ::GELIALJDFBL
	{
	public:
		::OPLFEKDONFO* IGHAHBNLIJA; // 0x18
		::System::Boolean PPIGLCIEIIM; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OPLFEKDONFO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OPLFEKDONFO*))((::PBYTE)hIl2Cpp + MCCBPFNLPNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCBPFNLPNP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCBPFNLPNP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCCBPFNLPNP_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCBPFNLPNP_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__4_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCCBPFNLPNP__ONTASKBEGIN_B__4_0_OFFSET))(this, a1);
		}

	};

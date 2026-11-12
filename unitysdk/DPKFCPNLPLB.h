#pragma once
#include "unitysdk/unitysdk.h"
class FPHCKGCLMAF;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define DPKFCPNLPLB_CTOR_OFFSET UNITYSDK_OFFSET(0x134479C0)
#define DPKFCPNLPLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13447BB0)
#define DPKFCPNLPLB_HPBEPPEAMNP_OFFSET UNITYSDK_OFFSET(0x13447A40)
#define DPKFCPNLPLB_LCJNDBDPFDN_OFFSET UNITYSDK_OFFSET(0x13447C40)
#define DPKFCPNLPLB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134479F0)
#define DPKFCPNLPLB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13447BF0)
#define DPKFCPNLPLB_TICK_OFFSET UNITYSDK_OFFSET(0x13447D30)

inline static constexpr unsigned int DPKFCPNLPLB_TypeDefinitionIndex = 53332;

	class DPKFCPNLPLB
	{
	public:
		::System::String* AAHFBNOIJCG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FPHCKGCLMAF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FPHCKGCLMAF*))((::PBYTE)hIl2Cpp + DPKFCPNLPLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKFCPNLPLB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKFCPNLPLB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKFCPNLPLB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPKFCPNLPLB_TICK_OFFSET))(this, a1);
		}

		::System::Void HPBEPPEAMNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKFCPNLPLB_HPBEPPEAMNP_OFFSET))(this);
		}

		::System::Void LCJNDBDPFDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKFCPNLPLB_LCJNDBDPFDN_OFFSET))(this);
		}

	};

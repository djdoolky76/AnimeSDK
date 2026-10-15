#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKOLIMBFFBD;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define HPNAKDOGIAD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAC9510)
#define HPNAKDOGIAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC9AC0)
#define HPNAKDOGIAD_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0x1CAC9A20)
#define HPNAKDOGIAD_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CAC9820)
#define HPNAKDOGIAD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CAC9890)
#define HPNAKDOGIAD_PMFEDGBNHGO_OFFSET UNITYSDK_OFFSET(0x1CAC98D0)

inline static constexpr unsigned int HPNAKDOGIAD_TypeDefinitionIndex = 43358;

	class HPNAKDOGIAD : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::UInt32>*>* IOBFEDODDGN; // 0x10
		::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolList_1<::System::UInt32>*>* HGJHCMAIBKI; // 0x18
		::RPG::PoolDictionary_2<::System::UInt32, ::CKOLIMBFFBD*>* FJGGIKFIOOF; // 0x20
		::System::UInt32 OMLGICHPKON; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNAKDOGIAD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNAKDOGIAD_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNAKDOGIAD_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNAKDOGIAD_ONRECYCLE_OFFSET))(this);
		}

		::System::Boolean PMFEDGBNHGO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HPNAKDOGIAD_PMFEDGBNHGO_OFFSET))(this, a1, a2);
		}

		::CKOLIMBFFBD* EBHNJMPEILL()
		{
			return ((::CKOLIMBFFBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNAKDOGIAD_EBHNJMPEILL_OFFSET))(this);
		}

	};

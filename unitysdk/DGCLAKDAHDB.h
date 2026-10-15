#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFFHEPEBJFE;

#define DGCLAKDAHDB_CTOR_OFFSET UNITYSDK_OFFSET(0xE8391B0)
#define DGCLAKDAHDB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE839170)
#define DGCLAKDAHDB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE839110)
#define DGCLAKDAHDB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE8390C0)
#define DGCLAKDAHDB_NCBGDCINJEB_OFFSET UNITYSDK_OFFSET(0xE8390B0)

inline static constexpr unsigned int DGCLAKDAHDB_TypeDefinitionIndex = 60193;

	class DGCLAKDAHDB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCLAKDAHDB_CTOR_OFFSET))(this);
		}

		::System::Boolean NCBGDCINJEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCLAKDAHDB_NCBGDCINJEB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFFHEPEBJFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFFHEPEBJFE*))((::PBYTE)hIl2Cpp + DGCLAKDAHDB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGCLAKDAHDB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCLAKDAHDB_HADOHLNHHGB_OFFSET))(this);
		}

	};

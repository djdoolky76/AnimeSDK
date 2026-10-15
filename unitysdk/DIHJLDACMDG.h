#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGGOOHNIBNN.h"

#define DIHJLDACMDG_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xF20AC60)
#define DIHJLDACMDG_CLEAR_OFFSET UNITYSDK_OFFSET(0xF20AD00)
#define DIHJLDACMDG_CTOR_OFFSET UNITYSDK_OFFSET(0xF20AD40)
#define DIHJLDACMDG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xF20ACA0)
#define DIHJLDACMDG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xF20AC20)

inline static constexpr unsigned int DIHJLDACMDG_TypeDefinitionIndex = 76941;

	class DIHJLDACMDG : public ::GGGOOHNIBNN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHJLDACMDG_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHJLDACMDG_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHJLDACMDG_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIHJLDACMDG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHJLDACMDG_CLEAR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOEPPCHKFPB.h"
namespace System { class String; }

#define DMIABMPOOPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C8ED0)
#define DMIABMPOOPC_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1C5C8FA0)
#define DMIABMPOOPC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5C8EF0)

inline static constexpr unsigned int DMIABMPOOPC_TypeDefinitionIndex = 36966;

	class DMIABMPOOPC : public ::DOEPPCHKFPB
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DMIABMPOOPC_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMIABMPOOPC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMIABMPOOPC_FHAPPCADGCE_OFFSET))(this, a1);
		}

	};

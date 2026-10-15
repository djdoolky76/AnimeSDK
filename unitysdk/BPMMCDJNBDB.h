#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPMMCDJNBDB;
class FCOEMCEDLNL;
namespace System { class String; }

#define BPMMCDJNBDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FB1B0)
#define BPMMCDJNBDB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FB000)

inline static constexpr unsigned int BPMMCDJNBDB_TypeDefinitionIndex = 13953;

	class BPMMCDJNBDB : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::String* OOOAGMPJPGG; // 0x18
		::System::UInt32 DGLJLJEHNNB; // 0x20
		::System::UInt32 IFAGMAOMHCL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMMCDJNBDB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BPMMCDJNBDB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPMMCDJNBDB*))((::PBYTE)hIl2Cpp + BPMMCDJNBDB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

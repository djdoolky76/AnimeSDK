#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMDBHIONNPL;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCEOEAEKJFE_EDBPGAEDMJC_OFFSET UNITYSDK_OFFSET(0x11007F30)
#define HCEOEAEKJFE_JBGMGIIOOHE_OFFSET UNITYSDK_OFFSET(0x11007EC0)
#define HCEOEAEKJFE__CTOR_OFFSET UNITYSDK_OFFSET(0x11007E60)

inline static constexpr unsigned int HCEOEAEKJFE_TypeDefinitionIndex = 62726;

class HCEOEAEKJFE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* DPDJLMDIBCI; // 0x10
	::KMDBHIONNPL* CLEDOMFLPOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEOEAEKJFE__CTOR_OFFSET))(this);
	}

	static ::HCEOEAEKJFE* JBGMGIIOOHE(::KMDBHIONNPL* LJBPECKCCEA, ::System::Int32 CBDNFPGFAIP)
	{
		return ((::HCEOEAEKJFE*(*)(::KMDBHIONNPL*, ::System::Int32))((::PBYTE)hIl2Cpp + HCEOEAEKJFE_JBGMGIIOOHE_OFFSET))(LJBPECKCCEA, CBDNFPGFAIP);
	}

	static ::HCEOEAEKJFE* EDBPGAEDMJC(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* MGNPPPJOJDK, ::System::Int32 CBDNFPGFAIP)
	{
		return ((::HCEOEAEKJFE*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + HCEOEAEKJFE_EDBPGAEDMJC_OFFSET))(MGNPPPJOJDK, CBDNFPGFAIP);
	}
};

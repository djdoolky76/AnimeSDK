#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKMDIDJNMKA;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define INBKLJGLCIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E52C0)
#define INBKLJGLCIL_DMAPBGHPDCI_OFFSET UNITYSDK_OFFSET(0x1A5E5150)
#define INBKLJGLCIL_NPJPBDLJLLN_OFFSET UNITYSDK_OFFSET(0x1A5E4FF0)

inline static constexpr unsigned int INBKLJGLCIL_TypeDefinitionIndex = 84256;

	class INBKLJGLCIL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::GKMDIDJNMKA*>* NODFJBABKPI; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::GKMDIDJNMKA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::GKMDIDJNMKA*>*))((::PBYTE)hIl2Cpp + INBKLJGLCIL_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 NPJPBDLJLLN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBKLJGLCIL_NPJPBDLJLLN_OFFSET))(this);
		}

		::GKMDIDJNMKA* DMAPBGHPDCI(::System::Int32 a1)
		{
			return ((::GKMDIDJNMKA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INBKLJGLCIL_DMAPBGHPDCI_OFFSET))(this, a1);
		}

	};

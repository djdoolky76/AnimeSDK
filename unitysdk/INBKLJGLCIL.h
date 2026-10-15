#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKMDIDJNMKA;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define INBKLJGLCIL_CTOR_OFFSET UNITYSDK_OFFSET(0x164D8970)
#define INBKLJGLCIL_DMAPBGHPDCI_OFFSET UNITYSDK_OFFSET(0x164D8800)
#define INBKLJGLCIL_NPJPBDLJLLN_OFFSET UNITYSDK_OFFSET(0x164D86A0)

inline static constexpr unsigned int INBKLJGLCIL_TypeDefinitionIndex = 81476;

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDOBLDMEGB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBHIBDPOCGG_JIMNIMEHOEL_NCEAMIMPNAM_OFFSET UNITYSDK_OFFSET(0x157A9ED0)
#define EBHIBDPOCGG_JIMNIMEHOEL__CTOR_OFFSET UNITYSDK_OFFSET(0x157A9E40)

inline static constexpr unsigned int EBHIBDPOCGG_JIMNIMEHOEL_TypeDefinitionIndex = 10417;

class EBHIBDPOCGG_JIMNIMEHOEL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::BPDOBLDMEGB*>*>* _FCJCAPHPDID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHIBDPOCGG_JIMNIMEHOEL__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::BPDOBLDMEGB*>*>* NCEAMIMPNAM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::BPDOBLDMEGB*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHIBDPOCGG_JIMNIMEHOEL_NCEAMIMPNAM_OFFSET))(this);
	}
};

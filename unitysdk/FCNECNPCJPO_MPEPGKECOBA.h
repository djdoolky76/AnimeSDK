#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCNECNPCJPO_MPEPGKECOBA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E57110)

inline static constexpr unsigned int FCNECNPCJPO_MPEPGKECOBA_TypeDefinitionIndex = 53297;

class FCNECNPCJPO_MPEPGKECOBA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*>* KBKEFBIGFCP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* ONPJLDAINMG; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* IAPOLFCBEJB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_MPEPGKECOBA__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PEPIIOHIAMJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIFPLINLHFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1873C560)

inline static constexpr unsigned int JIFPLINLHFN_TypeDefinitionIndex = 42351;

class JIFPLINLHFN : public ::System::Object
{
public:
	::System::String* LNEBNIDGNNO; // 0x10
	::System::Collections::Generic::List_1<::PEPIIOHIAMJ*>* GLOIMHAJJIE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFPLINLHFN__CTOR_OFFSET))(this);
	}
};

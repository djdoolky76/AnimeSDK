#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFPICOFNDF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBKINBPDEIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB82B50)

inline static constexpr unsigned int KBKINBPDEIC_TypeDefinitionIndex = 43734;

	class KBKINBPDEIC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LKFPICOFNDF*>* BCEFDINCEMD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKINBPDEIC_CTOR_OFFSET))(this);
		}

	};

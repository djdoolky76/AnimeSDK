#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLNEKELMDNJ;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HMNIDFGMLOB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D88570)
#define HMNIDFGMLOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D88680)
#define HMNIDFGMLOB_LALPGEAJIHF_OFFSET UNITYSDK_OFFSET(0x15D884D0)

inline static constexpr unsigned int HMNIDFGMLOB_TypeDefinitionIndex = 80134;

	class HMNIDFGMLOB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNIDFGMLOB_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* LALPGEAJIHF()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNIDFGMLOB_LALPGEAJIHF_OFFSET))(this);
		}

		::JLNEKELMDNJ* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::JLNEKELMDNJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMNIDFGMLOB_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};

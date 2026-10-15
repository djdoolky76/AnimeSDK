#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICDNEPOKHJL;
class JNHEPGLMAFE;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CBCNJKJCEKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C59A930)
#define CBCNJKJCEKA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C59AA00)

inline static constexpr unsigned int CBCNJKJCEKA_TypeDefinitionIndex = 37191;

	class CBCNJKJCEKA : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::ICDNEPOKHJL*>* CMKEBEGLOCA; // 0x10
		::JNHEPGLMAFE* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JNHEPGLMAFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNHEPGLMAFE*))((::PBYTE)hIl2Cpp + CBCNJKJCEKA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCNJKJCEKA_EXECUTE_OFFSET))(this);
		}

	};

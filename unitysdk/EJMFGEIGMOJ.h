#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJMFGEIGMOJ;
class JBACCAGFHON;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EJMFGEIGMOJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154E2EA0)
#define EJMFGEIGMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x154E2F40)
#define EJMFGEIGMOJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x154E2FC0)
#define EJMFGEIGMOJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x154E2F80)
#define EJMFGEIGMOJ_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x154E3330)

inline static constexpr unsigned int EJMFGEIGMOJ_TypeDefinitionIndex = 78127;

	class EJMFGEIGMOJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* NNOANAOOOPA; // 0x10
		::JBACCAGFHON* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + EJMFGEIGMOJ_CTOR_OFFSET))(this, a1);
		}

		static ::EJMFGEIGMOJ* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::EJMFGEIGMOJ*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + EJMFGEIGMOJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMFGEIGMOJ_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMFGEIGMOJ_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMFGEIGMOJ_TEARDOWN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDFEIOLEDIG;
class JBACCAGFHON;

#define IDFEIOLEDIG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EBB5A0)
#define IDFEIOLEDIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15EBB610)
#define IDFEIOLEDIG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15EBB660)
#define IDFEIOLEDIG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15EBB620)
#define IDFEIOLEDIG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15EBB910)

inline static constexpr unsigned int IDFEIOLEDIG_TypeDefinitionIndex = 78128;

	class IDFEIOLEDIG : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + IDFEIOLEDIG_CTOR_OFFSET))(this, a1);
		}

		static ::IDFEIOLEDIG* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::IDFEIOLEDIG*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + IDFEIOLEDIG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIOLEDIG_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIOLEDIG_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIOLEDIG_TEARDOWN_OFFSET))(this);
		}

	};

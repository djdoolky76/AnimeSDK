#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHOEJOCFKDE;
class JBACCAGFHON;

#define CHOEJOCFKDE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF5A0F0)
#define CHOEJOCFKDE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF5A160)
#define CHOEJOCFKDE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCF5A1B0)
#define CHOEJOCFKDE_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xCF5A0E0)
#define CHOEJOCFKDE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCF5A170)
#define CHOEJOCFKDE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xCF5A1F0)

inline static constexpr unsigned int CHOEJOCFKDE_TypeDefinitionIndex = 78126;

	class CHOEJOCFKDE : public ::System::Object
	{
	public:
		::JBACCAGFHON* _Services_k__BackingField; // 0x10
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CHOEJOCFKDE_CTOR_OFFSET))(this, a1);
		}

		::JBACCAGFHON* get_Services()
		{
			return ((::JBACCAGFHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEJOCFKDE_GET_SERVICES_OFFSET))(this);
		}

		static ::CHOEJOCFKDE* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::CHOEJOCFKDE*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CHOEJOCFKDE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEJOCFKDE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEJOCFKDE_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEJOCFKDE_TEARDOWN_OFFSET))(this);
		}

	};

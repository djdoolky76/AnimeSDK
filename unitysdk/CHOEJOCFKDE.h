#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHOEJOCFKDE;
class JBACCAGFHON;

#define CHOEJOCFKDE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF61700)
#define CHOEJOCFKDE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF61770)
#define CHOEJOCFKDE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCF617C0)
#define CHOEJOCFKDE_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xCF616F0)
#define CHOEJOCFKDE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCF61780)
#define CHOEJOCFKDE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xCF61800)

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

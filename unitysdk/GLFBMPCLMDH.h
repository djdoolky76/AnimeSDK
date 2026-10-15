#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNHCNPDALBB;

#define GLFBMPCLMDH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15AA4990)
#define GLFBMPCLMDH_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA4A80)

inline static constexpr unsigned int GLFBMPCLMDH_TypeDefinitionIndex = 80149;

	class GLFBMPCLMDH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBMPCLMDH_CTOR_OFFSET))(this);
		}

		::KNHCNPDALBB* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::KNHCNPDALBB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLFBMPCLMDH_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};

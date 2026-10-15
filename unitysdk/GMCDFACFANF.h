#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKIGGAKDIGO;

#define GMCDFACFANF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAB1C70)
#define GMCDFACFANF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB1CD0)

	class GMCDFACFANF : public ::System::Object
	{
	public:
		::IKIGGAKDIGO* CNLHCKELLBE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCDFACFANF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCDFACFANF_CLEAR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAACNICGMHN;

#define PBMDPCHNAAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBFED6B0)

inline static constexpr unsigned int PBMDPCHNAAA_TypeDefinitionIndex = 80552;

	class PBMDPCHNAAA : public ::System::Object
	{
	public:
		::JAACNICGMHN* HNEOOKPBCNK; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor(::JAACNICGMHN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAACNICGMHN*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBMDPCHNAAA_CTOR_OFFSET))(this, a1, a2);
		}

	};

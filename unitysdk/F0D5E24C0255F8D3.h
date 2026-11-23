#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define F0D5E24C0255F8D3_B0301A441D85563C_OFFSET UNITYSDK_OFFSET(0x4020E60)

inline static constexpr unsigned int F0D5E24C0255F8D3_TypeDefinitionIndex = 14597;

class F0D5E24C0255F8D3 : public ::System::Object
{
public:
	static ::System::Boolean B0301A441D85563C(::System::Exception* E2B6D81F69EA0D9B)
	{
		return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + F0D5E24C0255F8D3_B0301A441D85563C_OFFSET))(E2B6D81F69EA0D9B);
	}
};

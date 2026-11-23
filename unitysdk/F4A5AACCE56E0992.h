#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B1900F0F0CFD5092;
class EA4B68D7067891D7;
namespace System { class String; }

#define F4A5AACCE56E0992_A29AE68FDCEAAA17_OFFSET UNITYSDK_OFFSET(0x3DF2630)
#define F4A5AACCE56E0992_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x3DF26D0)
#define F4A5AACCE56E0992__CTOR_OFFSET UNITYSDK_OFFSET(0x3DF2F80)

inline static constexpr unsigned int F4A5AACCE56E0992_TypeDefinitionIndex = 14645;

class F4A5AACCE56E0992 : public ::System::Object
{
public:
	::B1900F0F0CFD5092* EC7956A04A9328C5; // 0x10

	static ::System::String* A29AE68FDCEAAA17(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + F4A5AACCE56E0992_A29AE68FDCEAAA17_OFFSET))(E937D4885DAA1AE8);
	}

	::EA4B68D7067891D7* A66245FDD0182C57()
	{
		return ((::EA4B68D7067891D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + F4A5AACCE56E0992_A66245FDD0182C57_OFFSET))(this);
	}

	::System::Void _ctor(::System::String* E8D435280B17E9A6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F4A5AACCE56E0992__CTOR_OFFSET))(this, E8D435280B17E9A6);
	}
};

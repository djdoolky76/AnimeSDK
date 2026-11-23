#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A291CEDB8837C82D.h"

namespace System::Text { class StringBuilder; }

#define ADA54FFB5588DA5B_F0E1147DBBB5A8CE_OFFSET UNITYSDK_OFFSET(0x4426DC0)
#define ADA54FFB5588DA5B_F24E2B46A67B38AF_OFFSET UNITYSDK_OFFSET(0x17B7850)
#define ADA54FFB5588DA5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADA54FFB5588DA5B_TypeDefinitionIndex = 18950;

class ADA54FFB5588DA5B : public ::A291CEDB8837C82D
{
public:
	::System::Int32 F24E2B46A67B38AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADA54FFB5588DA5B_F24E2B46A67B38AF_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADA54FFB5588DA5B__CTOR_OFFSET))(this);
	}

	::System::Int32 F0E1147DBBB5A8CE(::System::Char A97F5B807CC19082, ::System::Text::StringBuilder* A94D8812A3A79CC8)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ADA54FFB5588DA5B_F0E1147DBBB5A8CE_OFFSET))(this, A97F5B807CC19082, A94D8812A3A79CC8);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHCIPOKIBAI;
class DMHOLJNNCJA;

#define DMHOLJNNCJA_ABMJJCJLIIC_KNJIAOFGIEN_OFFSET UNITYSDK_OFFSET(0x16977F40)
#define DMHOLJNNCJA_ABMJJCJLIIC__CTOR_OFFSET UNITYSDK_OFFSET(0x16977F30)

inline static constexpr unsigned int DMHOLJNNCJA_ABMJJCJLIIC_TypeDefinitionIndex = 46948;

class DMHOLJNNCJA_ABMJJCJLIIC : public ::System::Object
{
public:
	::DMHOLJNNCJA* KLHPEBKNIFB; // 0x10
	::DHCIPOKIBAI* DDHFOECIFCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_ABMJJCJLIIC__CTOR_OFFSET))(this);
	}

	::System::Void KNJIAOFGIEN(::System::Int32 KCNOHOOPNAH, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_ABMJJCJLIIC_KNJIAOFGIEN_OFFSET))(this, KCNOHOOPNAH, BIOGEIHKABE);
	}
};

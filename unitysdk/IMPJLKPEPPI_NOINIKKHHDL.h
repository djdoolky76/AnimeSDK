#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IMPJLKPEPPI;
namespace System { class Action; }
namespace System { class String; }

#define IMPJLKPEPPI_NOINIKKHHDL_JLDIMCDJDKO_OFFSET UNITYSDK_OFFSET(0x16AB3D00)
#define IMPJLKPEPPI_NOINIKKHHDL__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB3CF0)

inline static constexpr unsigned int IMPJLKPEPPI_NOINIKKHHDL_TypeDefinitionIndex = 40492;

class IMPJLKPEPPI_NOINIKKHHDL : public ::System::Object
{
public:
	::System::Action* NHIJMEGJIAM; // 0x10
	::System::String* BAENNHHMHNC; // 0x18
	::System::Action* OBDCEHFACIN; // 0x20
	::IMPJLKPEPPI* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPJLKPEPPI_NOINIKKHHDL__CTOR_OFFSET))(this);
	}

	::System::Void JLDIMCDJDKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPJLKPEPPI_NOINIKKHHDL_JLDIMCDJDKO_OFFSET))(this);
	}
};

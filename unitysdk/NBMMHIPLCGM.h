#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBMMHIPLCGM__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED1630)

inline static constexpr unsigned int NBMMHIPLCGM_TypeDefinitionIndex = 44931;

class NBMMHIPLCGM : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* GLMMFLHCJNA; // 0x10
	::System::Int32 BELNJJKMMJP; // 0x18
	::System::Byte HGAEGCIOKGI; // 0x1C
	::System::Byte JFBHMHNJPNJ; // 0x1D
	::System::Byte OIBPPEPGLEE; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMMHIPLCGM__CTOR_OFFSET))(this);
	}
};

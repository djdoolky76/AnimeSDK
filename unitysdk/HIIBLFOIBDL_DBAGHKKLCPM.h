#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIIBLFOIBDL;

#define HIIBLFOIBDL_DBAGHKKLCPM_GLHAKAKLBCO_OFFSET UNITYSDK_OFFSET(0x140B76F0)
#define HIIBLFOIBDL_DBAGHKKLCPM__CTOR_OFFSET UNITYSDK_OFFSET(0x140B76E0)

inline static constexpr unsigned int HIIBLFOIBDL_DBAGHKKLCPM_TypeDefinitionIndex = 71532;

class HIIBLFOIBDL_DBAGHKKLCPM : public ::System::Object
{
public:
	::HIIBLFOIBDL* KLHPEBKNIFB; // 0x10
	::System::Int32 CFPENIOGIEJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBLFOIBDL_DBAGHKKLCPM__CTOR_OFFSET))(this);
	}

	::System::Void GLHAKAKLBCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBLFOIBDL_DBAGHKKLCPM_GLHAKAKLBCO_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FAPOPLBAPMH__CTOR_OFFSET UNITYSDK_OFFSET(0x10F53790)

inline static constexpr unsigned int FAPOPLBAPMH_TypeDefinitionIndex = 60069;

class FAPOPLBAPMH : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* ACELGAMAGKK; // 0x10
	::System::Single JBNDMLCIEDJ; // 0x18
	::System::Int32 GCEOJJFFDOO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPOPLBAPMH__CTOR_OFFSET))(this);
	}
};

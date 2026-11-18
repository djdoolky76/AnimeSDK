#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OCAIMDEIIKG_HNCCCPIIBHH_GAIMOIGCLBB_OFFSET UNITYSDK_OFFSET(0x1291E060)
#define OCAIMDEIIKG_HNCCCPIIBHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1291E050)

inline static constexpr unsigned int OCAIMDEIIKG_HNCCCPIIBHH_TypeDefinitionIndex = 44909;

class OCAIMDEIIKG_HNCCCPIIBHH : public ::System::Object
{
public:
	::System::Action* HKEBHFKHBCC; // 0x10
	::System::Int32 NADMBCPFKDH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_HNCCCPIIBHH__CTOR_OFFSET))(this);
	}

	::System::Void GAIMOIGCLBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_HNCCCPIIBHH_GAIMOIGCLBB_OFFSET))(this);
	}
};

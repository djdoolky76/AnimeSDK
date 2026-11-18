#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCBFNKIPOPJ;
class PBLHBGKKFCL;
namespace System { class Action; }

#define HCBFNKIPOPJ_MDAJMFPGHLE_LAPEDFBKEPH_OFFSET UNITYSDK_OFFSET(0x14D0C120)
#define HCBFNKIPOPJ_MDAJMFPGHLE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0C110)

inline static constexpr unsigned int HCBFNKIPOPJ_MDAJMFPGHLE_TypeDefinitionIndex = 60437;

class HCBFNKIPOPJ_MDAJMFPGHLE : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::HCBFNKIPOPJ* KLHPEBKNIFB; // 0x18
	::System::UInt32 IHEAAOINMFF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_MDAJMFPGHLE__CTOR_OFFSET))(this);
	}

	::System::Void LAPEDFBKEPH(::PBLHBGKKFCL* DCABKIOCCOI)
	{
		return ((::System::Void(*)(::PVOID, ::PBLHBGKKFCL*))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_MDAJMFPGHLE_LAPEDFBKEPH_OFFSET))(this, DCABKIOCCOI);
	}
};

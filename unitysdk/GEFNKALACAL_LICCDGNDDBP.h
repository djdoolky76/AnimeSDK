#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GEFNKALACAL_LICCDGNDDBP_IAGACAGNFIK_OFFSET UNITYSDK_OFFSET(0x125C95B0)
#define GEFNKALACAL_LICCDGNDDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x125C95A0)

inline static constexpr unsigned int GEFNKALACAL_LICCDGNDDBP_TypeDefinitionIndex = 53699;

class GEFNKALACAL_LICCDGNDDBP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFNKALACAL_LICCDGNDDBP__CTOR_OFFSET))(this);
	}

	::System::Void IAGACAGNFIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFNKALACAL_LICCDGNDDBP_IAGACAGNFIK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELNPPPDBHKC;
namespace System { class Exception; }

#define ELNPPPDBHKC_NAOIFMBPEIG_AFCOPAALLEB_OFFSET UNITYSDK_OFFSET(0x11A9C9E0)
#define ELNPPPDBHKC_NAOIFMBPEIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9C9D0)

inline static constexpr unsigned int ELNPPPDBHKC_NAOIFMBPEIG_TypeDefinitionIndex = 48243;

class ELNPPPDBHKC_NAOIFMBPEIG : public ::System::Object
{
public:
	::ELNPPPDBHKC* LGBLDAMKBPM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_NAOIFMBPEIG__CTOR_OFFSET))(this);
	}

	::System::Void AFCOPAALLEB(::System::Exception* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_NAOIFMBPEIG_AFCOPAALLEB_OFFSET))(this, NFFNEFLKPDG);
	}
};

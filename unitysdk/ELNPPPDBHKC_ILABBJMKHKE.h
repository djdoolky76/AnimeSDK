#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELNPPPDBHKC;
namespace System { class Action; }
namespace System { class Exception; }

#define ELNPPPDBHKC_ILABBJMKHKE_KKGEOAHFHAO_OFFSET UNITYSDK_OFFSET(0x12363720)
#define ELNPPPDBHKC_ILABBJMKHKE__CTOR_OFFSET UNITYSDK_OFFSET(0x12363710)

inline static constexpr unsigned int ELNPPPDBHKC_ILABBJMKHKE_TypeDefinitionIndex = 48230;

class ELNPPPDBHKC_ILABBJMKHKE : public ::System::Object
{
public:
	::ELNPPPDBHKC* LGBLDAMKBPM; // 0x10
	::System::Action* HKEBHFKHBCC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_ILABBJMKHKE__CTOR_OFFSET))(this);
	}

	::System::Void KKGEOAHFHAO(::System::Exception* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_ILABBJMKHKE_KKGEOAHFHAO_OFFSET))(this, NFFNEFLKPDG);
	}
};

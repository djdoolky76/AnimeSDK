#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BFIECKLGKPN_OHCLODKEPBM_HIBPOHKHGKD_OFFSET UNITYSDK_OFFSET(0x14C40E80)
#define BFIECKLGKPN_OHCLODKEPBM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C40E70)

inline static constexpr unsigned int BFIECKLGKPN_OHCLODKEPBM_TypeDefinitionIndex = 60743;

class BFIECKLGKPN_OHCLODKEPBM : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB; // 0x10
	::System::String* KBJILBFOOCC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIECKLGKPN_OHCLODKEPBM__CTOR_OFFSET))(this);
	}

	::System::Void HIBPOHKHGKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIECKLGKPN_OHCLODKEPBM_HIBPOHKHGKD_OFFSET))(this);
	}
};

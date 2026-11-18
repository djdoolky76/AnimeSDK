#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FJPNJGFGABL_DEMFHIOBFPJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14101410)
#define FJPNJGFGABL_DEMFHIOBFPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14101400)

inline static constexpr unsigned int FJPNJGFGABL_DEMFHIOBFPJ_TypeDefinitionIndex = 49428;

class FJPNJGFGABL_DEMFHIOBFPJ : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPNJGFGABL_DEMFHIOBFPJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPNJGFGABL_DEMFHIOBFPJ_PNGOHNLELDJ_OFFSET))(this);
	}
};

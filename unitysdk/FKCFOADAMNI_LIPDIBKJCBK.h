#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFLBNDFBIBH;
class IKFBCIGNNEP;
template <typename T> class DFDEIDBBGHG_1;

#define FKCFOADAMNI_LIPDIBKJCBK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11D80280)
#define FKCFOADAMNI_LIPDIBKJCBK__CTOR_OFFSET UNITYSDK_OFFSET(0x11D80110)

inline static constexpr unsigned int FKCFOADAMNI_LIPDIBKJCBK_TypeDefinitionIndex = 76367;

class FKCFOADAMNI_LIPDIBKJCBK : public ::System::Object
{
public:
	::DFDEIDBBGHG_1<::BFLBNDFBIBH*>* ALCJNNLMKLK; // 0x10
	::DFDEIDBBGHG_1<::IKFBCIGNNEP*>* FAEOKOOOBBP; // 0x18
	::DFDEIDBBGHG_1<::System::UInt32>* MEFAMJJIHPM; // 0x20
	::DFDEIDBBGHG_1<::System::UInt32>* AEEDIABADFE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI_LIPDIBKJCBK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI_LIPDIBKJCBK_PHOADBJGFBE_OFFSET))(this);
	}
};

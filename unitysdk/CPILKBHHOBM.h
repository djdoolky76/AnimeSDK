#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class String; }

#define CPILKBHHOBM_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1204C560)
#define CPILKBHHOBM_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x1204C5B0)
#define CPILKBHHOBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1204C620)

inline static constexpr unsigned int CPILKBHHOBM_TypeDefinitionIndex = 76580;

class CPILKBHHOBM : public ::System::Object
{
public:
	::System::String* DGKLEAAFCGD; // 0x10
	::MoleMole::TextureSheetSkipFrameParam* GCAJFDLPODD; // 0x18
	::MoleMole::HollowPieceBlendMode FEGCKCGMPFI; // 0x20
	::System::Nullable_1<::System::Single> KDBJLOBJFGC; // 0x24
	::System::Int32 FAAICMKACJG; // 0x2C
	::System::Boolean GDINHGLCODO; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 BOGPAHGJOJK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPILKBHHOBM__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPILKBHHOBM_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPILKBHHOBM_ILEEFLAOOOM_OFFSET))(this);
	}
};

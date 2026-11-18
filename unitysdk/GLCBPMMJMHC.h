#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define GLCBPMMJMHC_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x16CD0420)
#define GLCBPMMJMHC_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x16CD0480)
#define GLCBPMMJMHC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD04F0)

inline static constexpr unsigned int GLCBPMMJMHC_TypeDefinitionIndex = 69706;

class GLCBPMMJMHC : public ::System::Object
{
public:
	::System::String* CJBJONJDOLI; // 0x10
	::System::Boolean HAFDIMGJBHC; // 0x18
	::System::Boolean HHOJNLOMCNJ; // 0x19
	::System::Byte _padding0[0x2];
	::MoleMole::UIHollowChessPieceParticle_AttachPointType HIHGOIPENBM; // 0x1C
	::MoleMole::UIHollowChessPieceParticle_TransformType MMGCIBDFNFO; // 0x20
	::System::Nullable_1<::Foundation::Unreal::FTransform> HOCNHLIONBM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCBPMMJMHC__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCBPMMJMHC_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCBPMMJMHC_ILEEFLAOOOM_OFFSET))(this);
	}
};

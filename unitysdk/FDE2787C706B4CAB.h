#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FDE2787C706B4CAB_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FC2B10)
#define FDE2787C706B4CAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FDE2787C706B4CAB_TypeDefinitionIndex = 8959;

class FDE2787C706B4CAB : public ::System::Object
{
public:
	::System::UInt32 A0C23437A80792C9; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDE2787C706B4CAB__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FDE2787C706B4CAB* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FDE2787C706B4CAB*))((::PBYTE)hIl2Cpp + FDE2787C706B4CAB_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};

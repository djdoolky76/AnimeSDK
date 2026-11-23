#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Nullable_1.h"

class ACF0CD3C17A52A37;
namespace System { class String; }

#define F5F397F9EA00AECC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11530)

inline static constexpr unsigned int F5F397F9EA00AECC_TypeDefinitionIndex = 385;

class F5F397F9EA00AECC : public ::E379DE61A548837D
{
public:
	::System::Nullable_1<::AD61077CFCBEFAEA> BB20B12F70564FEC; // 0x38
	::System::Byte _padding0[0x8];
	::System::Nullable_1<::System::UInt32> F5B4397813D1EE72; // 0x48
	::E865F6F8B8B44C1E A44CF21B55FEFA89; // 0x50
	::System::String* AEDF565CE654EE81; // 0x58
	::System::Single B17B9B9C54637FC1; // 0x60
	::System::Byte _padding1[0x4];
	::ACF0CD3C17A52A37* AF2DC8E07EFA86BD; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5F397F9EA00AECC__CTOR_OFFSET))(this);
	}
};

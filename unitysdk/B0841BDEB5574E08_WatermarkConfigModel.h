#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class WatermarkInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B0841BDEB5574E08_WATERMARKCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x38CD770)

inline static constexpr unsigned int B0841BDEB5574E08_WatermarkConfigModel_TypeDefinitionIndex = 12384;

class B0841BDEB5574E08_WatermarkConfigModel : public ::System::Object
{
public:
	::System::Boolean available; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::MiHoYo::SDK::WatermarkInfo*>* config; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0841BDEB5574E08_WATERMARKCONFIGMODEL__CTOR_OFFSET))(this);
	}
};

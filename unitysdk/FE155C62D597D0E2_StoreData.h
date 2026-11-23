#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FE155C62D597D0E2_B0E875A7C5CA0747.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FE155C62D597D0E2_STOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE155C62D597D0E2_StoreData_TypeDefinitionIndex = 17974;

class FE155C62D597D0E2_StoreData : public ::System::Object
{
public:
	::FE155C62D597D0E2_B0E875A7C5CA0747 _type; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* _valueStr; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE155C62D597D0E2_STOREDATA__CTOR_OFFSET))(this);
	}
};

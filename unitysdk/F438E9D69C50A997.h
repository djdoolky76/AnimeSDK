#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define F438E9D69C50A997_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3D1F780)
#define F438E9D69C50A997__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F438E9D69C50A997_TypeDefinitionIndex = 10880;

class F438E9D69C50A997 : public ::System::Object
{
public:
	::System::Type* A288CB28FC2A6DA3; // 0x10
	::System::Boolean A3A7AF81DF2248E7; // 0x18
	::System::Byte _padding0[0x1];
	::System::UInt16 EB211B01816ACA79; // 0x1A

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F438E9D69C50A997_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F438E9D69C50A997__CTOR_OFFSET))(this);
	}
};

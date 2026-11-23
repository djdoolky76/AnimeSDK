#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B2E969227C390F44;
namespace System::Collections { class E6C6EEEB155967C0; }

#define F6092AE1DE512F1F__CTOR_OFFSET UNITYSDK_OFFSET(0x3C6A7B0)

inline static constexpr unsigned int F6092AE1DE512F1F_TypeDefinitionIndex = 11681;

class F6092AE1DE512F1F : public ::System::Object
{
public:
	::System::Collections::E6C6EEEB155967C0* AB16568253B00EB7; // 0x10
	::System::Int32 EB45981532882BAB; // 0x18
	::System::Byte _padding0[0x4];
	::B2E969227C390F44* E1813C17F917D60D; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6092AE1DE512F1F__CTOR_OFFSET))(this);
	}
};

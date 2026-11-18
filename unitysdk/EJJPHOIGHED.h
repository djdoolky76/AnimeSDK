#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define EJJPHOIGHED__CTOR_OFFSET UNITYSDK_OFFSET(0x106409C0)

inline static constexpr unsigned int EJJPHOIGHED_TypeDefinitionIndex = 82934;

class EJJPHOIGHED : public ::System::Object
{
public:
	::System::Func_1<::System::Single>* HLBNLHEKDGC; // 0x10
	::System::Func_1<::System::Single>* EEPGAKJANJB; // 0x18
	::System::Func_2<::System::Int32, ::System::Boolean>* AKNKJLKCBLF; // 0x20
	::System::Func_1<::System::Int32>* DANFJPHAEBJ; // 0x28
	::System::Boolean IEGBPHOMFAG; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 KGJCJMLIODM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJPHOIGHED__CTOR_OFFSET))(this);
	}
};

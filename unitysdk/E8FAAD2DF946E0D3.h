#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/F153AD0581C8A808.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
class F46674751C3D74BD;
namespace System { template <typename T> class Action_1; }

#define E8FAAD2DF946E0D3__CTOR_OFFSET UNITYSDK_OFFSET(0x19D8840)

inline static constexpr unsigned int E8FAAD2DF946E0D3_TypeDefinitionIndex = 8857;

class E8FAAD2DF946E0D3 : public ::System::Object
{
public:
	::B39AAAD1233537D7::F153AD0581C8A808 E43F771E6B5DE5BA; // 0x10
	::System::Byte _padding0[0x4];
	::F46674751C3D74BD* B97E11AD8B618D88; // 0x18
	::System::Action_1<::A04FB906869DCF3A*>* F13E866327B34FC5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8FAAD2DF946E0D3__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E78B436C7FACCBD8;
class F20AE33FE5C03C3A;
namespace System { template <typename T> class Action_1; }

#define F62F9066A4AB7ECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F62F9066A4AB7ECE_TypeDefinitionIndex = 8485;

class F62F9066A4AB7ECE : public ::System::Object
{
public:
	::System::Boolean F99CB1AB2858499E; // 0x10
	::System::Boolean AD466E87E53F3CFE; // 0x11
	::System::Byte _padding0[0x6];
	::E78B436C7FACCBD8* ECE98A511C0F9B3C; // 0x18
	::E78B436C7FACCBD8* E74CB035C806A71D; // 0x20
	::F20AE33FE5C03C3A* EE69A52E502E5E83; // 0x28
	::System::Action_1<::F62F9066A4AB7ECE*>* A918198C96972E40; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F62F9066A4AB7ECE__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class B166A93C29737F1E_AFEB98B5B6A783FC;
namespace System { class String; }

#define F896FA42D55CDA04__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F896FA42D55CDA04_TypeDefinitionIndex = 8696;

class F896FA42D55CDA04 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* AC059E02D360C64E; // 0x38
	::ABC::Config::WwiseEvent F642DF094887EE91; // 0x40
	::B166A93C29737F1E_AFEB98B5B6A783FC* E1C0F03E3EF79B03; // 0x50
	::B166A93C29737F1E_AFEB98B5B6A783FC* B6A7EEC34D201E4E; // 0x58
	::System::String* AC102C217E92CDEE; // 0x60
	::System::Boolean B5B735826E7DDBBC; // 0x68
	::System::Boolean F5FB911F2FE6B196; // 0x69

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F896FA42D55CDA04__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class B166A93C29737F1E_AFEB98B5B6A783FC;
namespace System { class String; }

#define FD8F9A4F7733F41F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FD8F9A4F7733F41F_TypeDefinitionIndex = 7910;

class FD8F9A4F7733F41F : public ::E379DE61A548837D
{
public:
	::System::UInt64 EA877E6F76211464; // 0x38
	::ABC::Config::WwiseEvent F642DF094887EE91; // 0x40
	::AB642D1382756991* E927034E06260979; // 0x50
	::B166A93C29737F1E_AFEB98B5B6A783FC* E1C0F03E3EF79B03; // 0x58
	::B166A93C29737F1E_AFEB98B5B6A783FC* B6A7EEC34D201E4E; // 0x60
	::System::String* AC102C217E92CDEE; // 0x68
	::System::Boolean B5B735826E7DDBBC; // 0x70
	::System::Boolean F5FB911F2FE6B196; // 0x71

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD8F9A4F7733F41F__CTOR_OFFSET))(this);
	}
};

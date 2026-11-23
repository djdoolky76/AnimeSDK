#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A853937BC1C84E01;
namespace System { class String; }
namespace System { class Type; }

#define F9BB2CB8960E1CAF_A9F48CBC310EABCD_OFFSET UNITYSDK_OFFSET(0x3EEA950)
#define F9BB2CB8960E1CAF__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5180)

inline static constexpr unsigned int F9BB2CB8960E1CAF_TypeDefinitionIndex = 15156;

class F9BB2CB8960E1CAF : public ::System::Object
{
public:
	::System::String* ECE6814AAF195607; // 0x10
	::A853937BC1C84E01* B0BCCDA35E8E65AA; // 0x18
	::System::Type* B6BBC5660F0FF31E; // 0x20

	::A853937BC1C84E01* A9F48CBC310EABCD()
	{
		return ((::A853937BC1C84E01*(*)(::PVOID))((::PBYTE)hIl2Cpp + F9BB2CB8960E1CAF_A9F48CBC310EABCD_OFFSET))(this);
	}

	::System::Void _ctor(::System::String* F5AF910062A6E30F, ::A853937BC1C84E01* FF370D5436AFF6B9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::A853937BC1C84E01*))((::PBYTE)hIl2Cpp + F9BB2CB8960E1CAF__CTOR_OFFSET))(this, F5AF910062A6E30F, FF370D5436AFF6B9);
	}
};

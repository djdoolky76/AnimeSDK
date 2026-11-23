#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BF82AD40DA1D2959_HTTPRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x3946CD0)

inline static constexpr unsigned int BF82AD40DA1D2959_HttpResponse_TypeDefinitionIndex = 12410;

class BF82AD40DA1D2959_HttpResponse : public ::System::Object
{
public:
	::System::String* response; // 0x10
	::System::String* header_response; // 0x18
	::System::Int32 http_code; // 0x20
	::System::Int32 error_code; // 0x24
	::System::String* error_msg; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF82AD40DA1D2959_HTTPRESPONSE__CTOR_OFFSET))(this);
	}
};

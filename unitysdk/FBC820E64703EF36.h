#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

class A842050E314079D9;
namespace System { class String; }

#define FBC820E64703EF36_EA053794E7841437_OFFSET UNITYSDK_OFFSET(0x17A7F90)
#define FBC820E64703EF36__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FBC820E64703EF36_TypeDefinitionIndex = 858;

class FBC820E64703EF36 : public ::E379DE61A548837D
{
public:
	::System::UInt32 A5E9A61B8A23886C; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* BC9C5D0F1F1D3BF7; // 0x40
	::AB893667BB6F371B B400B7FF36AAD5E9; // 0x48
	::System::Boolean FC585B26CF5909D8; // 0x68
	::System::Byte _padding1[0x7];
	::AB893667BB6F371B A19F6DDD0D29254E; // 0x70

	::System::Void EA053794E7841437(::A842050E314079D9* F9BC0891D68F2BA3)
	{
		return ((::System::Void(*)(::PVOID, ::A842050E314079D9*))((::PBYTE)hIl2Cpp + FBC820E64703EF36_EA053794E7841437_OFFSET))(this, F9BC0891D68F2BA3);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBC820E64703EF36__CTOR_OFFSET))(this);
	}
};

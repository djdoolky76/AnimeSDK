#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A35E521B7672CA3E;
class BED9DB3A34D9A5A5;
namespace System { class String; }

#define EF36EA1CA14EED77__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1666CA0)
#define EF36EA1CA14EED77__CTOR_OFFSET UNITYSDK_OFFSET(0x21DFD00)

inline static constexpr unsigned int EF36EA1CA14EED77_TypeDefinitionIndex = 8938;

class EF36EA1CA14EED77 : public ::System::Object
{
public:
	::System::Int32 FB78838AB2867853; // 0x10
	::System::Int32 FC217A844D171C52; // 0x14
	::System::Int32 BFCF77E6CE7C6C62; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* B6BA63830CC3F479; // 0x20
	::System::Boolean F564C3C167913495; // 0x28

	::System::Void _ctor(::BED9DB3A34D9A5A5* B83442F930EA3E85, ::A35E521B7672CA3E* B076D6911116907A)
	{
		return ((::System::Void(*)(::PVOID, ::BED9DB3A34D9A5A5*, ::A35E521B7672CA3E*))((::PBYTE)hIl2Cpp + EF36EA1CA14EED77__CTOR_OFFSET))(this, B83442F930EA3E85, B076D6911116907A);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF36EA1CA14EED77__CTOR_1_OFFSET))(this);
	}
};

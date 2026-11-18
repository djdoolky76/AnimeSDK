#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPKCOBKIJPH;
template <typename T> class DFDEIDBBGHG_1;

#define BNFIIBMAMDO_IJGCHCHMIAM_AFCPHNKFBOH_OFFSET UNITYSDK_OFFSET(0x14EFF380)
#define BNFIIBMAMDO_IJGCHCHMIAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFF370)

inline static constexpr unsigned int BNFIIBMAMDO_IJGCHCHMIAM_TypeDefinitionIndex = 80871;

class BNFIIBMAMDO_IJGCHCHMIAM : public ::System::Object
{
public:
	::DFDEIDBBGHG_1<::System::UInt32>* NOKIIFGFDAP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_IJGCHCHMIAM__CTOR_OFFSET))(this);
	}

	::System::Boolean AFCPHNKFBOH(::EPKCOBKIJPH* DLJPLHKELCO)
	{
		return ((::System::Boolean(*)(::PVOID, ::EPKCOBKIJPH*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_IJGCHCHMIAM_AFCPHNKFBOH_OFFSET))(this, DLJPLHKELCO);
	}
};

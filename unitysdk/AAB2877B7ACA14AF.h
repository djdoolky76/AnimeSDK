#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA3569C0D94DAF36.h"

#define AAB2877B7ACA14AF_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x21E72B0)
#define AAB2877B7ACA14AF_F19FEBA7109A027C_OFFSET UNITYSDK_OFFSET(0x21E7310)
#define AAB2877B7ACA14AF__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AAB2877B7ACA14AF_TypeDefinitionIndex = 8937;

class AAB2877B7ACA14AF : public ::AA3569C0D94DAF36
{
public:
	::System::UInt32 BD86D673D208DD23; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAB2877B7ACA14AF__CTOR_OFFSET))(this);
	}

	::System::Boolean F19FEBA7109A027C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAB2877B7ACA14AF_F19FEBA7109A027C_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::System::UInt32 B61615F8870BD53E)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAB2877B7ACA14AF_A1E97155B145443C_OFFSET))(this, B61615F8870BD53E);
	}
};

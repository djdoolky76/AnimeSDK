#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGENFGOHJFD_FCNNBNJHLOC.h"
#include "unitysdk/System/Object.h"

class KPLPHPMAGDA;
namespace System { class String; }

#define CGENFGOHJFD_ADAGNMFNONL_OFFSET UNITYSDK_OFFSET(0x1B999200)
#define CGENFGOHJFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B999130)
#define CGENFGOHJFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9993F0)

inline static constexpr unsigned int CGENFGOHJFD_TypeDefinitionIndex = 17307;

class CGENFGOHJFD : public ::System::Object
{
public:
	::KPLPHPMAGDA* GCDIBFGDJPO; // 0x10
	::KPLPHPMAGDA* PALFIKBOFBJ; // 0x18
	::CGENFGOHJFD_FCNNBNJHLOC ABOGAIOGCGP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGENFGOHJFD__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGENFGOHJFD_TOSTRING_OFFSET))(this);
	}

	::System::Int32 ADAGNMFNONL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGENFGOHJFD_ADAGNMFNONL_OFFSET))(this);
	}
};

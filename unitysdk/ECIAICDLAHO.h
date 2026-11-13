#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class HCHOPEJMBPP;
class OHGIOJLKBJD;
namespace System { class String; }
namespace System { class Type; }

#define ECIAICDLAHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E521A20)
#define ECIAICDLAHO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E525670)
#define ECIAICDLAHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5255A0)

inline static constexpr unsigned int ECIAICDLAHO_TypeDefinitionIndex = 45356;

	class ECIAICDLAHO : public ::System::Object
	{
	public:
		::System::Type* DNJCEPOHKGN; // 0x10
		::OHGIOJLKBJD* CGFMKDGPGHP; // 0x18
		::HCHOPEJMBPP* FNDHDEOILCK; // 0x20
		::System::Guid DKHNNMHCBPJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIAICDLAHO_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIAICDLAHO_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIAICDLAHO_DISPOSE_OFFSET))(this);
		}

	};

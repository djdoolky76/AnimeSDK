#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Text { class StringBuilder; }

#define IHDAHOCLFGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A466F60)
#define IHDAHOCLFGN_GDCKLDBLOEB_OFFSET UNITYSDK_OFFSET(0x1A4671B0)
#define IHDAHOCLFGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A466E00)

inline static constexpr unsigned int IHDAHOCLFGN_TypeDefinitionIndex = 49694;

class IHDAHOCLFGN : public ::System::Object
{
public:
	// static const ::System::String* BHJDNHNNPKC; // 0x0
	// static const ::System::String* BEIDHIDPLAL; // 0x0
	::System::String* FCMJLHPFENC; // 0x10
	::System::Diagnostics::Stopwatch* GHGLFLBMPCK; // 0x18
	::System::Text::StringBuilder* ELEPNLJLMJA; // 0x20

	::System::Void _ctor(::System::String* GFAFMKBICMC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHDAHOCLFGN__CTOR_OFFSET))(this, GFAFMKBICMC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDAHOCLFGN_DISPOSE_OFFSET))(this);
	}

	::System::Int64 GDCKLDBLOEB()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDAHOCLFGN_GDCKLDBLOEB_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E4A2E7A888FD3D2F.h"
#include "unitysdk/FAD2E319BC60A0F8/A1873E9EF1B834D9.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
template <typename T> class FCECB52A00C1344E;

#define E4EB3DF59CEF4BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4EB3DF59CEF4BD1_TypeDefinitionIndex = 5826;

class E4EB3DF59CEF4BD1 : public ::System::Object
{
public:
	::System::Int32 AEA6A4F794917D32; // 0x10
	::E68AA4EB51923C98::E4A2E7A888FD3D2F E005833A79B08BC5; // 0x14
	::System::Type* B4C9D38C4FD4882B; // 0x18
	::FAD2E319BC60A0F8::A1873E9EF1B834D9 E67795209A9E3216; // 0x20
	::FAD2E319BC60A0F8::A1873E9EF1B834D9 FC80AB7FF9F5E08A; // 0x24
	::System::Boolean B0486B547D1A8DC7; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 EA7103F90285FC32; // 0x2C
	::FCECB52A00C1344E<::System::Type*>* A07ECFDD6B3EA5DB; // 0x30
	::FCECB52A00C1344E<::System::Type*>* F93926FF8EA6263B; // 0x38
	::FCECB52A00C1344E<::System::Type*>* AC4BC5415672D9CE; // 0x40
	::System::String* A963FD20EE294E1C; // 0x48
	::System::Int32 AAA68C80C3550902; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4EB3DF59CEF4BD1__CTOR_OFFSET))(this);
	}
};

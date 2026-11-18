#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLOLMPABND;
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define OOIFDNDJMPI_KAKHFJPNEPB_OFFSET UNITYSDK_OFFSET(0x178A4A90)
#define OOIFDNDJMPI_KAPOEPFBBOH_OFFSET UNITYSDK_OFFSET(0x178A3EC0)
#define OOIFDNDJMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3EB0)

inline static constexpr unsigned int OOIFDNDJMPI_TypeDefinitionIndex = 57160;

class OOIFDNDJMPI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIFDNDJMPI__CTOR_OFFSET))(this);
	}

	static ::System::Void KAPOEPFBBOH(::MiHoYo::SDK::JSONObject*& CBKKFECGFAG, ::ODLOLMPABND* DEKJDEPKKLH, ::System::Int32 MGKIHCBNKJI, ::System::String* JPAALJFDIBO)
	{
		return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*&, ::ODLOLMPABND*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + OOIFDNDJMPI_KAPOEPFBBOH_OFFSET))(CBKKFECGFAG, DEKJDEPKKLH, MGKIHCBNKJI, JPAALJFDIBO);
	}

	static ::System::String* KAKHFJPNEPB(::System::String* PFLKHEPPIPJ, ::System::Int32 MGKIHCBNKJI, ::System::String* JPAALJFDIBO)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + OOIFDNDJMPI_KAKHFJPNEPB_OFFSET))(PFLKHEPPIPJ, MGKIHCBNKJI, JPAALJFDIBO);
	}
};

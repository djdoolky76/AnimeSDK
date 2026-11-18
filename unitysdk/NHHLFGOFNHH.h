#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NHHLFGOFNHH_CMBHGCIGIBA_OFFSET UNITYSDK_OFFSET(0x11F77DC0)
#define NHHLFGOFNHH_EOJMFLNGLAP_OFFSET UNITYSDK_OFFSET(0x11F77EC0)
#define NHHLFGOFNHH_JFLEHEBHFGD_OFFSET UNITYSDK_OFFSET(0x11F77E80)
#define NHHLFGOFNHH_JHLKILFCFCD_OFFSET UNITYSDK_OFFSET(0x11F77D60)
#define NHHLFGOFNHH_KIAONAAPCII_OFFSET UNITYSDK_OFFSET(0x11F77E00)
#define NHHLFGOFNHH_LOIDOPDHBKB_OFFSET UNITYSDK_OFFSET(0x11F77D20)

inline static constexpr unsigned int NHHLFGOFNHH_TypeDefinitionIndex = 89548;

class NHHLFGOFNHH : public ::System::Object
{
public:
	static ::System::Boolean LOIDOPDHBKB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHHLFGOFNHH_LOIDOPDHBKB_OFFSET))();
	}

	static ::System::String* JHLKILFCFCD()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NHHLFGOFNHH_JHLKILFCFCD_OFFSET))();
	}

	static ::System::String* CMBHGCIGIBA()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NHHLFGOFNHH_CMBHGCIGIBA_OFFSET))();
	}

	static ::System::Boolean KIAONAAPCII(::System::String* DENFAAIGKFM)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NHHLFGOFNHH_KIAONAAPCII_OFFSET))(DENFAAIGKFM);
	}

	static ::System::Boolean JFLEHEBHFGD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHHLFGOFNHH_JFLEHEBHFGD_OFFSET))();
	}

	static ::System::Boolean EOJMFLNGLAP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHHLFGOFNHH_EOJMFLNGLAP_OFFSET))();
	}
};

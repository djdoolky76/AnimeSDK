#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/OLPPOJJADDO.h"

class BIMCFHFCAHK;
class CFHOEGBMPKN;
template <typename T> class DBMAHDDGMHM_1;

#define HGPCABLDKEB_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0x11019E20)
#define HGPCABLDKEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11019C40)
#define HGPCABLDKEB_MJIPDLBCHNH_OFFSET UNITYSDK_OFFSET(0x11019D50)
#define HGPCABLDKEB_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x11019EE0)
#define HGPCABLDKEB__CTOR_OFFSET UNITYSDK_OFFSET(0x11019A20)

inline static constexpr unsigned int HGPCABLDKEB_TypeDefinitionIndex = 68239;

class HGPCABLDKEB : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::UnityEngine::Vector3>* EFKNDPBOGME; // 0x10
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x18
	::Foundation::ViewObject::GroupMemberIdentifier CGMJBFKEFME; // 0x20

	::System::Void _ctor(::BIMCFHFCAHK* ABCMODOAPFF)
	{
		return ((::System::Void(*)(::PVOID, ::BIMCFHFCAHK*))((::PBYTE)hIl2Cpp + HGPCABLDKEB__CTOR_OFFSET))(this, ABCMODOAPFF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPCABLDKEB_DISPOSE_OFFSET))(this);
	}

	::System::UInt64 MJIPDLBCHNH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPCABLDKEB_MJIPDLBCHNH_OFFSET))(this);
	}

	::System::Void APPCLMIANHI(::BIMCFHFCAHK* JKHIHIBHDPH)
	{
		return ((::System::Void(*)(::PVOID, ::BIMCFHFCAHK*))((::PBYTE)hIl2Cpp + HGPCABLDKEB_APPCLMIANHI_OFFSET))(this, JKHIHIBHDPH);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPCABLDKEB_PGKDINGDONO_OFFSET))(this);
	}
};

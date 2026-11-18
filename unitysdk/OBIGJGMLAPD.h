#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class CFHOEGBMPKN;
class EAMBHPJOEPG;
namespace System { class EventArgs; }
template <typename T> class DBMAHDDGMHM_1;

#define OBIGJGMLAPD_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0xE13D2F0)
#define OBIGJGMLAPD_CEAHOFGOGGL_OFFSET UNITYSDK_OFFSET(0xE13D740)
#define OBIGJGMLAPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE13D080)
#define OBIGJGMLAPD_MHKMHFILMLJ_OFFSET UNITYSDK_OFFSET(0xE13D340)
#define OBIGJGMLAPD_MJIPDLBCHNH_OFFSET UNITYSDK_OFFSET(0xE13D2B0)
#define OBIGJGMLAPD_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0xE13D3B0)
#define OBIGJGMLAPD_PGKMNCMMFJE_OFFSET UNITYSDK_OFFSET(0xE13D6F0)
#define OBIGJGMLAPD__CTOR_OFFSET UNITYSDK_OFFSET(0xE13C8E0)

inline static constexpr unsigned int OBIGJGMLAPD_TypeDefinitionIndex = 55342;

class OBIGJGMLAPD : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* ADNPFJMKDNM; // 0x10
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x18
	::System::Boolean NGPFHHMNAJD; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 KNMHCPPLABK; // 0x24
	::Foundation::ViewObject::GroupMemberIdentifier EOJAFFGKIAG; // 0x28

	::System::Void _ctor(::EAMBHPJOEPG* BEAPKIGPADJ)
	{
		return ((::System::Void(*)(::PVOID, ::EAMBHPJOEPG*))((::PBYTE)hIl2Cpp + OBIGJGMLAPD__CTOR_OFFSET))(this, BEAPKIGPADJ);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIGJGMLAPD_DISPOSE_OFFSET))(this);
	}

	::System::UInt64 MJIPDLBCHNH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIGJGMLAPD_MJIPDLBCHNH_OFFSET))(this);
	}

	::System::Void APPCLMIANHI(::EAMBHPJOEPG* JKHIHIBHDPH)
	{
		return ((::System::Void(*)(::PVOID, ::EAMBHPJOEPG*))((::PBYTE)hIl2Cpp + OBIGJGMLAPD_APPCLMIANHI_OFFSET))(this, JKHIHIBHDPH);
	}

	::System::Void MHKMHFILMLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIGJGMLAPD_MHKMHFILMLJ_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIGJGMLAPD_PGKDINGDONO_OFFSET))(this);
	}

	::System::Void PGKMNCMMFJE(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OBIGJGMLAPD_PGKMNCMMFJE_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void CEAHOFGOGGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIGJGMLAPD_CEAHOFGOGGL_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define LPGEFCKAOFK_AONACIBLHNJ_OFFSET UNITYSDK_OFFSET(0x15E13500)
#define LPGEFCKAOFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E13AA0)
#define LPGEFCKAOFK_ILHBMCMGJFN_OFFSET UNITYSDK_OFFSET(0x15E13C80)
#define LPGEFCKAOFK_JFLBBNNGGPB_OFFSET UNITYSDK_OFFSET(0x15E13370)
#define LPGEFCKAOFK_LGOENCKAGOH_OFFSET UNITYSDK_OFFSET(0x15E13A50)
#define LPGEFCKAOFK_NCNBEKLHBDI_OFFSET UNITYSDK_OFFSET(0x15E13A40)
#define LPGEFCKAOFK_NHCKGPAKGME_OFFSET UNITYSDK_OFFSET(0x15E13AF0)
#define LPGEFCKAOFK__CTOR_OFFSET UNITYSDK_OFFSET(0x15E13350)

inline static constexpr unsigned int LPGEFCKAOFK_TypeDefinitionIndex = 91119;

class LPGEFCKAOFK : public ::System::Object
{
public:
	::System::Int32 CIKEHBHNDNP; // 0x10
	::System::Boolean DKPAACMNBLK; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGEFCKAOFK__CTOR_OFFSET))(this);
	}

	::System::Boolean NCNBEKLHBDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGEFCKAOFK_NCNBEKLHBDI_OFFSET))(this);
	}

	::System::Boolean LGOENCKAGOH(::System::Int32 OMOLJBGIBAC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPGEFCKAOFK_LGOENCKAGOH_OFFSET))(this, OMOLJBGIBAC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGEFCKAOFK_DISPOSE_OFFSET))(this);
	}

	::System::Void NHCKGPAKGME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGEFCKAOFK_NHCKGPAKGME_OFFSET))(this);
	}

	::System::Void ILHBMCMGJFN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LPGEFCKAOFK_ILHBMCMGJFN_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Int32 AONACIBLHNJ()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LPGEFCKAOFK_AONACIBLHNJ_OFFSET))();
	}

	::System::Void JFLBBNNGGPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGEFCKAOFK_JFLBBNNGGPB_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class KOIDMLPJGML;
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class NMANHEHIJAL_1;

#define DHMNFJBEEDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12BB3170)
#define DHMNFJBEEDP_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x12BB3440)
#define DHMNFJBEEDP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB3430)

inline static constexpr unsigned int DHMNFJBEEDP_TypeDefinitionIndex = 70741;

class DHMNFJBEEDP : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* PADGHPGBNLG; // 0x10
	::NMANHEHIJAL_1<::KOIDMLPJGML*>* HEIAEFIDLAK; // 0x18
	::DBMAHDDGMHM_1<::System::Boolean>* ODKGAHDFMAP; // 0x20
	::DBMAHDDGMHM_1<::System::Int32>* MFGPCFNAPHA; // 0x28
	::System::Int32 DDPHAJDLBDH; // 0x30
	::System::Int32 LMFLNAOODBP; // 0x34
	::System::Int32 FHAAEKOOEMN; // 0x38
	::System::Int32 NHEMFEIEHNP; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMNFJBEEDP__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMNFJBEEDP_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMNFJBEEDP_PGKDINGDONO_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class KOIDMLPJGML;
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class NMANHEHIJAL_1;

#define GBIAPOABIDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB80000)
#define GBIAPOABIDG_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0xBB80350)
#define GBIAPOABIDG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB80340)

inline static constexpr unsigned int GBIAPOABIDG_TypeDefinitionIndex = 64064;

class GBIAPOABIDG : public ::System::Object
{
public:
	::NMANHEHIJAL_1<::KOIDMLPJGML*>* HEIAEFIDLAK; // 0x10
	::DBMAHDDGMHM_1<::System::Boolean>* MCJCCJOEKGN; // 0x18
	::NMANHEHIJAL_1<::System::Object*>* HNJFBAHBPAN; // 0x20
	::System::Int32 NOCEJKJAHJC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIAPOABIDG__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIAPOABIDG_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIAPOABIDG_PGKDINGDONO_OFFSET))(this);
	}
};

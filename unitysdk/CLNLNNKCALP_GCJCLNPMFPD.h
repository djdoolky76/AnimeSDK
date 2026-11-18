#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
template <typename T> class LJHFMILANJA_1;

#define CLNLNNKCALP_GCJCLNPMFPD_EFEIILBAAIF_OFFSET UNITYSDK_OFFSET(0x147ADB60)
#define CLNLNNKCALP_GCJCLNPMFPD_KNAGCNMJAME_OFFSET UNITYSDK_OFFSET(0x147ADA10)
#define CLNLNNKCALP_GCJCLNPMFPD__CTOR_OFFSET UNITYSDK_OFFSET(0x147ADA00)

inline static constexpr unsigned int CLNLNNKCALP_GCJCLNPMFPD_TypeDefinitionIndex = 42751;

class CLNLNNKCALP_GCJCLNPMFPD : public ::System::Object
{
public:
	::LJHFMILANJA_1<::System::Boolean>* PBHIBNJEHEF; // 0x10
	::PAMPOBIPLCE KAMJLKGLFDB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNLNNKCALP_GCJCLNPMFPD__CTOR_OFFSET))(this);
	}

	::System::Void KNAGCNMJAME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNLNNKCALP_GCJCLNPMFPD_KNAGCNMJAME_OFFSET))(this);
	}

	::System::Void EFEIILBAAIF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLNLNNKCALP_GCJCLNPMFPD_EFEIILBAAIF_OFFSET))(this, KOIBHLHLMFC);
	}
};

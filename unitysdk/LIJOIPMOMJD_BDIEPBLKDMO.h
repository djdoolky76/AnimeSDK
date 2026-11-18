#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class IKFICPMJCEL;
template <typename T> class LGFJMNEABJP_1;

#define LIJOIPMOMJD_BDIEPBLKDMO_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16372B90)
#define LIJOIPMOMJD_BDIEPBLKDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x16372C10)

inline static constexpr unsigned int LIJOIPMOMJD_BDIEPBLKDMO_TypeDefinitionIndex = 91360;

class LIJOIPMOMJD_BDIEPBLKDMO : public ::JJEJBPGJPJN
{
public:
	::LGFJMNEABJP_1<::IKFICPMJCEL*>* GNAEKLJODNM; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOIPMOMJD_BDIEPBLKDMO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOIPMOMJD_BDIEPBLKDMO_ONCREATEPROPERTY_OFFSET))(this);
	}
};

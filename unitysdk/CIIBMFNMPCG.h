#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIIBMFNMPCG_ADOLANEHALD;
class CIIBMFNMPCG_AEKKIMHPCGM;
class CIIBMFNMPCG_JBPIMNFHHFN;
class CIIBMFNMPCG_PJFEJIAPOMM;

#define CIIBMFNMPCG__CTOR_OFFSET UNITYSDK_OFFSET(0x159DC170)

inline static constexpr unsigned int CIIBMFNMPCG_TypeDefinitionIndex = 82677;

class CIIBMFNMPCG : public ::System::Object
{
public:
	::CIIBMFNMPCG_ADOLANEHALD* JFKOFMABCKI; // 0x10
	::CIIBMFNMPCG_JBPIMNFHHFN* PMBCJMFFFIA; // 0x18
	::CIIBMFNMPCG_AEKKIMHPCGM* BEFMEGPLNPK; // 0x20
	::CIIBMFNMPCG_PJFEJIAPOMM* BCEKDEJGHAG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBMFNMPCG__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCFJKEOJPPE;
namespace System { class Action; }

#define JCFJKEOJPPE_EFCPJCPLFIL_AAJAJKMMENL_OFFSET UNITYSDK_OFFSET(0x1872EB40)
#define JCFJKEOJPPE_EFCPJCPLFIL_MJBOHGMBNHD_OFFSET UNITYSDK_OFFSET(0x1872ED90)
#define JCFJKEOJPPE_EFCPJCPLFIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1872EB30)

inline static constexpr unsigned int JCFJKEOJPPE_EFCPJCPLFIL_TypeDefinitionIndex = 47009;

class JCFJKEOJPPE_EFCPJCPLFIL : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::JCFJKEOJPPE* KLHPEBKNIFB; // 0x18
	::System::Boolean FMNKGIBCKLJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_EFCPJCPLFIL__CTOR_OFFSET))(this);
	}

	::System::Void AAJAJKMMENL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_EFCPJCPLFIL_AAJAJKMMENL_OFFSET))(this);
	}

	::System::Void MJBOHGMBNHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_EFCPJCPLFIL_MJBOHGMBNHD_OFFSET))(this);
	}
};

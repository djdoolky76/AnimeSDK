#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JAOECNEPLAL_AKAMINOJAKP;
class KECNBGKAFHP;
class PEALJGCMGPN;

#define KECNBGKAFHP_CDIKKMFKFJJ_PJFNAENIIMJ_OFFSET UNITYSDK_OFFSET(0x1860B870)
#define KECNBGKAFHP_CDIKKMFKFJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1860B860)

inline static constexpr unsigned int KECNBGKAFHP_CDIKKMFKFJJ_TypeDefinitionIndex = 65124;

class KECNBGKAFHP_CDIKKMFKFJJ : public ::System::Object
{
public:
	::PEALJGCMGPN* LIPPBBOGEAM; // 0x10
	::JAOECNEPLAL_AKAMINOJAKP* AEJAMJDBHAM; // 0x18
	::KECNBGKAFHP* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_CDIKKMFKFJJ__CTOR_OFFSET))(this);
	}

	::System::Void PJFNAENIIMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_CDIKKMFKFJJ_PJFNAENIIMJ_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPMACEGMIOC;
class KECNBGKAFHP;

#define KECNBGKAFHP_NINDKFFPBFH_HBJENEILFOO_OFFSET UNITYSDK_OFFSET(0x16338C10)
#define KECNBGKAFHP_NINDKFFPBFH__CTOR_OFFSET UNITYSDK_OFFSET(0x16338C00)

inline static constexpr unsigned int KECNBGKAFHP_NINDKFFPBFH_TypeDefinitionIndex = 65119;

class KECNBGKAFHP_NINDKFFPBFH : public ::System::Object
{
public:
	::KECNBGKAFHP* KLHPEBKNIFB; // 0x10
	::JPMACEGMIOC* IMJNBACLHLO; // 0x18
	::System::Boolean FNDOFMLKIFD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_NINDKFFPBFH__CTOR_OFFSET))(this);
	}

	::System::Void HBJENEILFOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_NINDKFFPBFH_HBJENEILFOO_OFFSET))(this);
	}
};

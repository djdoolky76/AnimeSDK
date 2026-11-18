#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKJGNIJNBAM;
class JHOGLKMCDLG;

#define CKJGNIJNBAM_EBHBPNJMNOK_BCEHNPOHHBJ_OFFSET UNITYSDK_OFFSET(0x19A13920)
#define CKJGNIJNBAM_EBHBPNJMNOK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A13910)

inline static constexpr unsigned int CKJGNIJNBAM_EBHBPNJMNOK_TypeDefinitionIndex = 88193;

class CKJGNIJNBAM_EBHBPNJMNOK : public ::System::Object
{
public:
	::CKJGNIJNBAM* KLHPEBKNIFB; // 0x10
	::JHOGLKMCDLG* EOHPBKNIPMD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJGNIJNBAM_EBHBPNJMNOK__CTOR_OFFSET))(this);
	}

	::System::Void BCEHNPOHHBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJGNIJNBAM_EBHBPNJMNOK_BCEHNPOHHBJ_OFFSET))(this);
	}
};

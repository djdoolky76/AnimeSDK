#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/System/Object.h"

#define LEEBCPEGBHG_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x15BD52F0)
#define LEEBCPEGBHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD52E0)

inline static constexpr unsigned int LEEBCPEGBHG_TypeDefinitionIndex = 73891;

class LEEBCPEGBHG : public ::System::Object
{
public:
	::AIJGGGANLLD HGIJHODLIBC; // 0x10
	::System::Int32 OJOAICDEHKP; // 0x30
	::System::Boolean AJFFIBBGBCG; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEEBCPEGBHG__CTOR_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEEBCPEGBHG_CHCGMACMJLD_OFFSET))(this);
	}
};

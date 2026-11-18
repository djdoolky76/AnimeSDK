#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDNCJLGEINF.h"
#include "unitysdk/INMOGNKBAJD_JPMPHLKBMAI.h"
#include "unitysdk/System/Object.h"

class INMOGNKBAJD;

#define INMOGNKBAJD_NOKCCBCBDPD_BOPOLGEGBNN_OFFSET UNITYSDK_OFFSET(0x1658B850)
#define INMOGNKBAJD_NOKCCBCBDPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1658B840)

inline static constexpr unsigned int INMOGNKBAJD_NOKCCBCBDPD_TypeDefinitionIndex = 50461;

class INMOGNKBAJD_NOKCCBCBDPD : public ::System::Object
{
public:
	::INMOGNKBAJD_JPMPHLKBMAI MGIAOABKHBO; // 0x10
	::INMOGNKBAJD* KLHPEBKNIFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMOGNKBAJD_NOKCCBCBDPD__CTOR_OFFSET))(this);
	}

	::System::Void BOPOLGEGBNN(::IDNCJLGEINF FFNKDGGHBPP, ::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::IDNCJLGEINF, ::System::Object*))((::PBYTE)hIl2Cpp + INMOGNKBAJD_NOKCCBCBDPD_BOPOLGEGBNN_OFFSET))(this, FFNKDGGHBPP, HNOPAJLDCFB);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKPEEBMCNPD_ECANOEDMJHB.h"
#include "unitysdk/KOIDMLPJGML.h"

class FOLOGHLENFB;
class HGAJKHIMKJP;

#define BKPEEBMCNPD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1397B080)
#define BKPEEBMCNPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1397AFF0)

inline static constexpr unsigned int BKPEEBMCNPD_TypeDefinitionIndex = 78071;

class BKPEEBMCNPD : public ::KOIDMLPJGML
{
public:
	::FOLOGHLENFB* DFMKILICPFB; // 0xF8
	::System::Boolean BNBIEFMHEJN; // 0x100
	::System::Boolean DPDOFDHIBCP; // 0x101
	::System::Boolean JAANAGAMJNN; // 0x102
	::System::Byte _padding0[0x1];
	::System::Int32 NKHKFGFACNP; // 0x104
	::BKPEEBMCNPD_ECANOEDMJHB CIAHAAKLADN; // 0x108
	::System::Int32 AAPIFDMOKPJ; // 0x10C

	::System::Void _ctor(::HGAJKHIMKJP* PMHJBOFDPEJ)
	{
		return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + BKPEEBMCNPD__CTOR_OFFSET))(this, PMHJBOFDPEJ);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEEBMCNPD__CTOR_1_OFFSET))(this);
	}
};
